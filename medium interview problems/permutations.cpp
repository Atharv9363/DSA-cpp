//  https://leetcode.com/problems/permutations/

class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index){
        if(index >= nums.size()){
            ans.push_back(nums);
            return ;
        }
        
        for(int j=index; j<nums.size(); j++){
            swap(nums[index], nums[j]); //Swapping next element with index
            solve(nums, ans, index+1);
            
            swap(nums[index], nums[j]); //Backtracking to get consistent state 
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};
