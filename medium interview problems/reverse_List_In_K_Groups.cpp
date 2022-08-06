//https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644?leftPanelTab=0

/****************************************************************
    Following is the Linked List node structure

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


Node* kReverse(Node* head, int k) {
    if(head == NULL){
        return NULL;
    }
    
    //Below we are reversing first k nodes
    Node* next = NULL;
    Node* curr = head; //pointer is on head
    Node* prev = NULL;
    int count = 0;
    
    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //Next nodes will be reversed using recursion
    if(next != NULL){
        head -> next = kReverse(next, k);    //In next each head will be stored
    }
    
    return prev;
}

//Space Complexity : O(n)
//Time Complexity : O(n)
