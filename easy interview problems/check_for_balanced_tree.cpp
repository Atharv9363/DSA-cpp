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

//Above solution is not optimized because here will get time complexity O(n^2) 
//so, use below approach 

class Solution{
    private:
        int height(struct Node* node){
            if(node == NULL){
                return 0;
            }
            
            int left = height(node -> left);
            int right = height(node -> right);
            
            int ans = max(left, right) + 1;
            return ans;
        }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root == NULL){
            return true;
        }
        bool left = isBalanced(root -> left);
        bool right = isBalanced(root -> right);
        
        bool diff = abs(height(root -> left) - height(root -> right)) <= 1;
        
        if(left && right && diff){
            return true;
        }
        else{
            return false;
        }
    }
    
};
