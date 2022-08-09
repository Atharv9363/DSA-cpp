// https://www.codingninjas.com/codestudio/problems/valid-parenthesis_795104?leftPanelTab=0

bool isValidParenthesis(string expression)
{
    stack<char> s;
    
    for(int i=0; i < expression.length(); i++){
        char ch = expression[i];
    //if opening bracket, stack push    
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            //if closing bracket appears,check stacktop with ch and if both matches then pop else return false
            if(!s.empty()){ //if stack is empty then return false 
                char top = s.top();
                if( (ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
//Time Complexity : O(N)
//Space Complexity : O(N)
