// https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

void sortedInsert(stack<int> &stack, int num){
    if(stack.empty() || (!stack.empty() && stack.top() < num)){ //Check whether stack is empty or not and top of stack is less than num if it is true then push the num elment 
        stack.push(num);
        return ;
    }
    int n = stack.top(); //pop top of stack and don't push it until until any small element than top appears
    stack.pop();
    
    sortedInsert(stack, num);
    
    stack.push(n);    //If no small element appers as compare to top the push top back in stacck
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){    //Checking whether stack is empty or not
        return ;
    }
    
    int num = stack.top();       //pop top element from top
    stack.pop();
    
    sortStack(stack);            //Recursive call for sorting elements
     
    sortedInsert(stack, num);    //for getting sorted stack
}
