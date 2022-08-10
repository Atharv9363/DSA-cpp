// https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875?leftPanelTab=0

void insertAtBottom(stack<int> &s, int element){
    if(s.empty()){
        s.push(element);
        return ;
    }
    
    int num = s.top();
    s.pop();
    
    insertAtBottom(s, element);
    
    s.push(num);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return ;
    }
    int num = stack.top();   //Poping top element 
    stack.pop();
    
    reverseStack(stack); //Here we are using recursive call for reversing remaining stack elements
    
    insertAtBottom(stack, num);    //inserting popped top element at bottom of stack
    
}
