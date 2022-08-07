// https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?leftPanelTab=0

/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
     
************************************************************/

Node * uniqueSortedList(Node * head) {
    if(head == NULL){        //For empty list
        return NULL;
    }
    
    Node* curr = head;
    
    while(curr != NULL){      //For non empty list
        if((curr -> next != NULL) && curr -> data == curr -> next -> data){
      Node* next_next_node = curr -> next -> next;
      Node* nodeToDelete = curr -> next;
      delete(nodeToDelete);
      curr -> next = next_next_node;
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
}
