// https://www.codingninjas.com/codestudio/problems/next-smaller-element_1112581?leftPanelTab=0

#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
   //We are traversing frm nbottom to top(from left to right ) so we will definetely get -1 
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i=n-1; i>=0; i--){ //For traversing
        int curr = arr[i];
        while(s.top() >= curr){ //this will run until we get smaller element than current(curr) element and pop it
            s.pop();
        }
        ans[i] = s.top(); //So our ans is top of stack
        s.push(curr);
    }
    return ans;
}
