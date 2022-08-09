// https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1

Node* mergeTwoLists(Node* a, Node* b) {
    
    Node *temp = new Node(0);
    Node *res = temp; 
    
    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->bottom = a; 
            temp = temp->bottom; 
            a = a->bottom; 
        }
        else {
            temp->bottom = b;
            temp = temp->bottom; 
            b = b->bottom; 
        }
    }
    
    if(a) temp->bottom = a; 
    else temp->bottom = b; 
    
    return res -> bottom; 
    
}
Node *flatten(Node *root)
{
   
        if (root == NULL || root->next == NULL) 
            return root; 
  
        // recur for list on right 
        root->next = flatten(root->next); 
  
        // now merge 
        root = mergeTwoLists(root, root->next); 
  
        // return the root 
        // it will be in turn merged with its left 
        return root; 
}

// https://www.codingninjas.com/codestudio/problems/1112655?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node* mergeTwoLists(Node* a, Node* b) {
    
    Node *temp = new Node(0);
    Node *res = temp; 
    
    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp-> child = a; 
            temp = temp-> child; 
            a = a-> child; 
        }
        else {
            temp-> child = b;
            temp = temp-> child; 
            b = b-> child; 
        }
    }
    
    if(a) temp->child = a; 
    else temp->child = b; 
    temp -> child -> next = NULL;
    return res -> child; 
    
}

Node* flattenLinkedList(Node* head) 
{
         if (head == NULL || head->next == NULL) 
            return head; 
  
        // recur for list on right 
        head->next = flattenLinkedList(head->next); 
  
        // now merge 
        head = mergeTwoLists(head, head->next); 
  
        // return the root 
        // it will be in turn merged with its left 
        return head;
}

//Here on code studio time limit is exceeding for this solution........

