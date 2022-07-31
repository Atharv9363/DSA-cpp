//https://leetcode.com/problems/subsets/

class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
        if(index >= nums.size()){ //Base case
            ans.push_back(output); //pushing output if base case is true  
            return ;
        }
        
        //excluding element(just increment index for excluding)
        solve(nums, output, index+1, ans);
        
        //including element(just push the element)
        int element = nums[index];
        output.push_back(element); 
        solve(nums, output, index+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int> > ans; //This is for storing all the answers
       vector<int> output; //Creating output array / vector
       int index = 0;
       solve(nums, output, index, ans);
       return ans; 
    }
};
