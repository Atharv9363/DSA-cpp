#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int d){
		this -> data = d;
		this -> left = NULL;
		this -> right = NULL;
	}
};

void levelOrderTraversal(Node* root){  //Function for printing tree
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		Node* temp = q.front();
		q.pop();

		if(temp == NULL){  //Separator For not printing tree in linear format
			//This 'if' means the old traverse is complete and we can separate it
			cout << endl;
			if(!q.empty()){
				//queue still has some child nodes
				q.push(NULL);
			}
		}
		else{
			cout << temp -> data << " ";
			if(temp -> left){
				q.push(temp -> left);
			}

			if(temp -> right){
				q.push(temp -> right);
			}
		}
	}	
}

void inorder(Node* root){
	//base case
	if(root == NULL){
		return ;
	} 
	inorder(root -> left);	//left node
	cout << root -> data << " ";  //root node
	inorder(root -> right);	//right node
}

void preorder(Node* root){
	if(root == NULL){
		return ;
	}
	cout << root -> data << " ";	//root node
	preorder(root -> left);
	preorder(root -> right);
}

void postorder(Node* root){
	if(root == NULL){
		return ;
	}
	postorder(root -> left);
	postorder(root -> right);
	cout << root -> data << " ";
}

Node* insertIntoBST(Node* root, int d){
	if( root == NULL){
		root = new Node(d);
		return root;
	}

	if(d > root -> data){
		//inserting in right part
		root -> right = insertIntoBST(root -> right, d);
	}
	else{
		//inserting into left part
		root -> left = insertIntoBST(root -> left, d);
	}
	return root;
}

Node* minVal(Node* root){
	Node* temp =root;

	while(temp -> left != NULL){
		temp = temp -> left; 
	}
	return temp;
}

Node* maxVal(Node* root){
	Node* temp = root;

	while(temp -> right != NULL){
		temp = temp -> right;
	}
	return temp;
}

Node* deleteFromBST(Node* root, int val){
	if(root == NULL){
		return root;
	}

	if(root -> data == val){
	//For 0 child
		if(root -> left == NULL && root -> right == NULL){
			delete root;
			return NULL;
		}
	//For 1 child
		//Left child
		if(root -> left != NULL && root -> right == NULL){
			Node* temp = root -> left;
			delete root;
			return temp;
		}	
		//Right child
		if(root -> left == NULL && root -> right != NULL){
			Node* temp = root -> right;
			delete root;
			return temp;
		}

	//For 2 child
		if(root -> left != NULL && root -> right != NULL){
			int mini = minVal(root -> right) -> data;
			root -> data = mini;
			root -> right = deleteFromBST(root -> right, mini);
			return root;
		}	
	}
	else if(root -> data > val){
		//go to left part
		root -> left = deleteFromBST(root -> left, val);
		return root;
	}
	else{
		//go to right part
		root -> right = deleteFromBST(root -> right, val);
		return root;
	}
}
 

void takeInput(Node* &root){
	int data;
	cin >> data;

	while(data != -1){
		root = insertIntoBST(root, data);
		cin >> data;
	}
	//Time Complexity of insertion in BST : O(logn)	
}

int main(){
	Node* root = NULL;

	cout << "Enter data to create BST" << endl;
	takeInput(root);

	cout << "Printing the BST" << endl;
	levelOrderTraversal(root);

	cout << "Printing the inordered BST" << endl;
	inorder(root);
	
	cout << endl << "Printing the preoredered BST" << endl;
	preorder(root);

	cout << endl << "Printing the postordered BST" << endl;
	postorder(root);

	cout << "Min value is:" << minVal(root) -> data << endl;
	cout << "Max value is:" << maxVal(root) -> data << endl;

//Deletion
	root = deleteFromBST(root, 30);

	cout << "Printing the BST" << endl;
	levelOrderTraversal(root);

	cout << "Printing the inordered BST" << endl;
	inorder(root);
	
	cout << endl << "Printing the preoredered BST" << endl;
	preorder(root);

	cout << endl << "Printing the postordered BST" << endl;
	postorder(root);

	cout << "Min value is:" << minVal(root) -> data << endl;
	cout << "Max value is:" << maxVal(root) -> data << endl;

}