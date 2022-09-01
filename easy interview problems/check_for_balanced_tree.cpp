// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

/* A binary tree node structure

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
    //Function to check whether a binary tree is balanced or not.
    pair<bool, int> isBalancedTree(Node* root){
      if(root == NULL){
        pair<bool, int> p = make_pair(true, 0);
        return p;
      }
      
      pair<int, int> left = isBalancedTree(root -> left);
      pair<int, int> right = isBalancedTree(root -> right);
      
      bool leftAns = left.first;
      bool rightAns = right.first;
      
      bool diff = abs(left.second - right.second) <= 1;
      
      pair<bool, int> ans;
      ans.second = max(left.second, right.second) + 1;
      
      if(leftAans && rightAns && diff){
        ans.first = true;
      }
      else{
        ans.first = false; 
      }
      return ans;
     }
  
    bool isBalanced(Node* root){
      return isBalancedTree(root).first; 
    }
    
};

//Abovesolution is not optimized because here will get time complexity O(n^2) 
