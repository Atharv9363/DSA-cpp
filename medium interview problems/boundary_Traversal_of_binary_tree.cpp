// https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

class Solution {
public:
    //For right part 
    void traverseLeft(Node* root, vector<int> &ans){
        if((root == NULL) || (root -> left == NULL && root -> right == NULL))
            return ;
        
        ans.push_back(root -> data);
        if(root -> left)
            traverseLeft(root -> left, ans);
        else
            traverseLeft(root -> right, ans);
    } 
    
    //For leaf nodes
    void traverseLeaf(Node* root, vector<int> &ans){
        if(root == NULL)
            return ;
        if(root -> left == NULL && root -> right == NULL){
            ans.push_back(root -> data);
            return;
        }
        
        traverseLeaf(root -> left, ans);
        traverseLeaf(root -> right, ans);
    }
    
    //For right part
    void traverseRight(Node* root, vector<int> &ans){
        if((root == NULL) || (root -> left == NULL && root -> right == NULL))
            return ;
        if(root -> right)
            traverseRight(root -> right, ans);
        else
            traverseRight(root -> left, ans);
        
        //after return
        ans.push_back(root -> data);
    }
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL)
            return ans;
            
        ans.push_back(root -> data);
        
    //Traversing left part
        traverseLeft(root -> left, ans);
        
    //Traversing Leaf Nodes
        //Left subtree
        traverseLeaf(root -> left, ans);
        //Right subtree
        traverseLeaf(root -> right, ans);
        
    //Traversing right part
        traverseRight(root -> right, ans);
        
        return ans;
    }
};
