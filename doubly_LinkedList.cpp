#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node* prev;
	Node* next;

	//constructor
	Node(int d){
		this -> data = d;
		this -> prev = NULL;
		this -> next =NULL;
	}

	~Node(){
		int val = this -> data;
		if(next != NULL){
			delete next;
			next = NULL;
		}
		cout << "Memory free for node with data " << val << endl;
	}
};

void print(Node* head){
	Node* temp = head;

	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

int getLength(Node* head){
	int len = 0;
	Node* temp = head;

	while(temp != NULL){
		len++;
		temp = temp -> next;
	}
	return len;
}

void insertAtHead(Node* &tail, Node* &head, int d){
	if (head == NULL) //For empty list
	{
		Node* temp = new Node(d);
		head = temp;
		tail = temp;
	}
	else{
		Node* temp = new Node(d);
		temp -> next = head;
		head -> prev = temp;
		head = temp;
	}
}

void insertAtTail(Node* tail, Node* &head, int d){
	if (tail == NULL)   //For empty list
	{
		Node* temp = new Node(d);
		tail = temp;
		head = temp;
	}
	else{
			Node* temp = new Node(d);
		tail -> next = temp;
		temp -> prev = tail;
		tail = temp;
	}
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d ){   //Insertion at any position
	if(position == 1){   //Insert at start
		insertAtHead(tail, head, d);
		return;
	}

	Node* temp = head;
	int cnt = 1;

	while(cnt < position-1){
		temp = temp -> next;
		cnt++;
	}

	if(temp -> next == NULL){   //Insert at end
		insertAtTail(tail, head, d);
		return;
	}

	Node* nodeToInsert = new Node(d);

	nodeToInsert -> next = temp -> next;
	temp -> next -> prev = nodeToInsert;
	temp -> next = nodeToInsert;
	nodeToInsert -> prev = temp;

	  
}

void deleteNode(int position, Node* &head){  //Deletion of node at any position
	//Deleting first/ start node
	if(position == 1){
		Node* temp = head;
		temp -> next -> prev = NULL;
		head = temp -> next;
		//Free memory of start node
		temp -> next = NULL;
		delete temp;
	}
	else{
		//Deleting any middle node or last node
		Node* curr = head;
		Node* prev = NULL;

		int cnt = 1;
		while(cnt < position){
			prev = curr;
			curr = curr -> next;
			cnt++;
		}
		curr -> prev = NULL;
		prev -> next = curr -> next;
		curr -> next = NULL; //Free Memory of node
		delete curr;
	}
}
int main(){

	// Node* node1 = new Node(10);
	// Node* head = node1;
	// Node* tail = node1;

	Node* head = NULL;
	Node* tail = NULL;

	print(head);
	cout << "Length is: "<< getLength(head) << endl; 

	insertAtHead(tail, head, 11);
	print(head);
	cout << "Length is: "<< getLength(head) << endl; 

	insertAtTail(tail, head, 12);
	print(head);

	insertAtPosition(tail, head, 2, 13);
	print(head);

	deleteNode(1,head);
	print(head);
}