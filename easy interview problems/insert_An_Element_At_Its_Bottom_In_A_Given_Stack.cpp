// https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=0

void solve(stack<int>& s, int x){
    //Base case
    if(s.empty()){       //If the stack is empty then push the element 
        s.push(x);
        return ;
    }
    
    int num = s.top();  
    s.pop();       //Here we are popping an element one by one using recursion until stack becomes completely empty after it becomes empty we push the given element and also pushing the popped elements back. 
    
    solve(s, x);
    
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
