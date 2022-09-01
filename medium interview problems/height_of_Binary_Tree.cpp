// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/0

//{ Driver Code Starts

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        //Height : Longest path between root node and a leaf node.
        if(node == NULL){
            return 0;
        }
        
        int left = height(node -> left);
        int right = height(node -> right);
        
        int ans = max(left, right) + 1;
        return ans;
        
    }
};
