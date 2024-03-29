// https://www.codingninjas.com/codestudio/problems/search-in-bst_1402878?leftPanelTab=0

//Iterative solution
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    BinaryTreeNode<int> *temp = root;
    
    while(temp != NULL){
        if(temp -> data == x){
            return true;
        }
        if(temp -> data > x){
            temp = temp -> left;
        }
        else{
            temp = temp -> right;
        }
    }
    return false;
}

//Recursive solution
bool searchInBST(BinaryTreeNode<int> *root, int x) {
   if(root == NULL){
       return false;
   }
   if(root -> data == x){
       return true;
   } 
   if(root -> data > x){
       return searchInBST(root -> left, x);
   } 
   else{
       return searchInBST(root -> right, x);
   } 
}
