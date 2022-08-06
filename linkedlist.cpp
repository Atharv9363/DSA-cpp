#include<bits/stdc++.h>

using namespace std;

class Node{
	public:
		int data;
		Node* next;

		//constructor
		Node(int data){
			this -> data = data;
			this -> next = NULL;
		}	

		//destructor
		~Node(){
			int value = this -> data;
			//memory free
			if(this -> next != NULL){
				delete next;
				this -> next = NULL;
			}
			cout << " Memory is free for node with data " << value << endl;
		}
};

void insertAtHead(Node* &head, int d){ //Inserting element at head / begining.
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
}

void insertAtTail(Node* &tail, int d){	//Inserting element at tail/ end
	Node* temp = new Node(d);
	tail -> next = temp;
	tail = tail -> next;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d ){   //Insertion at any position
	if(position == 1){   //Insert at start
		insertAtHead(head, d);
		return;
	}

	Node* temp = head;
	int cnt = 1;

	while(cnt < position-1){
		temp = temp -> next;
		cnt++;
	}

	if(temp -> next == NULL){   //Insert at end
		insertAtTail(tail, d);
		return;
	}

	Node* nodeToInsert = new Node(d); 	//Creating a node for d
	nodeToInsert -> next = temp -> next;
	temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
	//Deleting first/ start node
	if(position == 1){
		Node* temp = head;
		head = head -> next;
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
		prev -> next = curr -> next;
		curr -> next = NULL; //Free Memory of node
		delete curr;
	}
}

void print(Node* &head){
	Node* temp = head;

	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}


int main(){
	Node* node1 = new Node(10);
	// cout << node1 -> data << endl;
	// cout << node1 -> next << endl; 

	//Inserting element at end
	Node* head = node1;		//Pointing head to node1
	// print(head);

	// insertAtHead(head, 20);
	// print(head);

	// insertAtHead(head, 40);
	// print(head);

	Node* tail = node1;
	print(head);

	insertAtTail(tail, 12);
	print(head);

	insertAtTail(tail, 14);
	print(head);

	insertAtPosition(tail, head, 2, 11);
	print(head);

	insertAtPosition(tail, head, 4, 13);
	print(head);

	cout << "Head "<< head -> data << endl;
	cout << "Tail "<< tail -> data << endl;

	deleteNode(1, head);
	print(head);

	deleteNode(3, head);
	print(head);

	deleteNode(3, head);
	print(head);
}