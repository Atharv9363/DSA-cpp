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

bool detectLoop(Node* head){
	if(head == NULL){
		return false;
	}

	map<Node*, bool> visited;

	Node* temp = head;

	while(temp != NULL){
		if(visited[temp] == true){
			cout << "Present on element " << temp -> data << endl;
			return true;
		}

		visited[temp] =true;
		temp = temp -> next;
	}
	return false;

	//Space Complexity: O(n)
	//Time Complexity: O(n)
}

//Floyd's cycle detection algorithm
Node* floydDetectLoop(Node* head){
	if(head == NULL){
		return NULL;
	}
	Node* slow = head;
	Node* fast = head;

	while(slow != NULL && fast != NULL){
		
		fast = fast -> next;
		if(fast != NULL){
			fast = fast -> next; 
		}

		slow = slow -> next;

		if(slow == fast){
			cout << "Cycle present at " << slow -> data << endl;
			return slow;
		}
	}
	return NULL;

}

//Getting starting node of loop/cycle
Node* getStartingNode(Node* head){
	if(head == NULL){
		return NULL;
	}

	Node* intersection = floydDetectLoop(head);
	Node* slow = head;

	while(slow != intersection){
		slow = slow -> next;
		intersection = intersection -> next;
	}
	return slow;
}

//Removing loop
void removeLoop(Node* head){
	if(head == NULL){
		return ;
	}

	Node* startOfLoop = getStartingNode(head);
	Node* temp = startOfLoop;

	while(temp -> next != startOfLoop){
		temp = temp -> next;
	}
	temp -> next = NULL;
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

	insertAtTail(tail, 12);

	insertAtTail(tail, 15);

	insertAtPosition(tail, head, 4, 22);
	print(head);

	tail -> next = head -> next;

	cout << "head " << head -> data << endl;
	cout << "tail " << tail -> data << endl;	
	//print(head);

	// if(detectLoop(head)){
	// 	cout << "Cycle is present" << endl;	
	// }
	// else{
	// 	cout << "Cycle is not present" << endl;
	// }

	if(floydDetectLoop(head) != NULL){
		cout << "Cycle is present" << endl;	
	}
	else{
		cout << "Cycle is not present" << endl;
	}

	Node* loop = getStartingNode(head);

	cout << "Loop starts at " << loop -> data << endl; 

	removeLoop(head);
	print(head);


}
