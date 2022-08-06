//https://www.codingninjas.com/codestudio/problems/reverse-linked-list_920513?leftPanelTab=0

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
//1. Iterative way
Node* reverseLinkedList(Node *head)
{
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

//2. Recursive way
void reverse(Node* &head, Node* curr, Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}
Node* reverseLinkedList(Node *head)
{
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}

//3. Recursive way
Node* reverse(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    Node* smallHead = reverse(head -> next);
    head -> next -> next = head;
    head -> next =NULL;
    return smallHead;
}
Node* reverseLinkedList(Node *head)
{
    return reverse(head);
}

Time Compleity: O(n)
Space Complexity: O(n)  
