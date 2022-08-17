// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int a, int b, int n ){
        if(M[a][b] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack <int> s;
        
        //step 1: push all elements in stack
        for(int i=0; i<n; i++){
            s.push(i);
        }
        
        //step 2: get two elements and compare them
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
            
        }
        int ans = s.top();
        
        //step 3: single element in stack is potential celebrity So verify it using conditions
        
        int zeroCount = 0;
        
        for(int i=0; i<n; i++){
            if(M[ans][i] == 0)
            zeroCount++;
        }
        
        //Condition 1: all zeros
        if(zeroCount != n){
            return -1;
        }
        
        //Condition 2: Column check
        int oneCount = 0;
        
        for(int i=0; i<n; i++){
            if(M[i][ans] == 1){
                oneCount++;
            }
        }
        if(oneCount != n-1){
            return -1;
        }
        return ans;
    }
};

