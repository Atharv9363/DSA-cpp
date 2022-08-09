// https://www.codingninjas.com/codestudio/problems/delete-middle-element-from-stack_985246?leftPanelTab=0

void solve(stack<int>&inputStack, int count, int size){
    if(count == size/2){ //base case
        inputStack.pop();
        return ;
    }
    
    int num = inputStack.top();
    inputStack.pop();
    
    solve(inputStack, count+1, size); //Recursive call
    
    inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
  int count = 0;
  solve(inputStack, count, N);  
}
