// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

class Solution {
	public:
		string FirstNonRepeating(string A){
		    unordered_map<char, int> count;
		    queue<int> q;
		    string ans = "";
		    
		    for(int i=0; i<A.length(); i++ ){
		        char ch = A[i];
		        
		        //increase count
		        count[ch]++;
		        
		        //push in a queue
		        q.push(ch);
		        
		        while(!q.empty()){
		            if(count[q.front()] > 1){
		                //repeating character
		                q.pop();
		            }
		            else{
		                //we will get non-repeating characters
		                ans.push_back(q.front());
		                break;
		            }
		            if(q.empty()){
		                ans.push_back('#');
		            }
		        }
		    }
		    return ans;
		}

};
