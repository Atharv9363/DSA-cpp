#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node* next;

	//constructor
	Node(int d){
		this -> data = d;
		this -> next = NULL;
	}

	~Node(){
		int value = this -> data;
		if(this -> next != NULL){
			delete next;
			next = NULL;
		}
		cout << "Memory free for node with data " << value << endl;
	}
};

void insertNode(Node* &tail, int element, int d){
	//Assuming that the element is present in the list

	if(tail == NULL){ //empty list
		Node* newNode = new Node(d);
		tail = newNode;
		newNode -> next = newNode;
	}
	else{  //Non empty list
		//Assuming that the element is present at the list

		Node* curr = tail;
		while(curr -> data != element){
			curr = curr -> next;
		}

		//element found -> curr is representing element with node
		Node* temp = new Node(d);
		temp -> next = curr -> next;
		curr -> next = temp;

	}
}

bool isCircularList(Node* head){
	if(head == NULL){
		return true;
	}

	Node* temp = head -> next;
	while(temp != NULL && temp != head){
		temp = temp -> next;
	}

	if(temp == head){
		return true;
	}

	return false;
}

void print(Node* tail){
	Node* temp = tail;

	if(tail == NULL){
		cout << "List is Empty" << endl;
		return ;
	}

	do{
		cout << tail -> data << " ";
		tail = tail -> next;
	}
	while(tail != temp);
	cout << endl;
}

void deleteNode(Node* &tail, int value){
	if(tail == NULL){ //empty list
		cout << " List is empty...";
	}
	else{
		//non empty list
		//Assuming that value is present in the linked list

		Node* prev = tail;
		Node* curr = prev -> next;

		while(curr -> data != value){
			prev = curr;
			curr = curr -> next;
		}

		prev -> next = curr -> next;

		//If only one node is present in list
		if(curr == prev){
			tail = NULL;
		}

		//If greater than equal to 2 nodes are present
		if(tail == curr){
			tail = prev;
		}
		curr -> next = NULL;
		delete curr;
	}
}

int main(){
	Node* tail = NULL;

	insertNode(tail, 5, 3);
	print(tail);

	insertNode(tail, 3, 5);
	print(tail);

	insertNode(tail, 5, 6);
	print(tail);

	// insertNode(tail, 6, 7);
	// print(tail);

	// deleteNode(tail, 5);
	// print(tail);

	if(isCircularList(tail)){
		cout << " Linked List is circular in nature." << endl;
	}
	else{
		cout << " Linked List is not circular." << endl;
	}

}