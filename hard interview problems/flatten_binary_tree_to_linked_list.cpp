// https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1

class Solution
{
    public:
    void flatten(Node *root)
v      {
        Node* curr = root;
        while(curr != NULL){
            if(curr -> left){
                Node* pred = curr -> left;
                while(pred -> right)
                    pred = pred -> right;
                
                pred -> right = curr -> right;
                curr -> right = curr -> left;
                curr -> left = NULL;  //Left part NULL 
            }
            curr = curr -> right;
        }
    }
};
