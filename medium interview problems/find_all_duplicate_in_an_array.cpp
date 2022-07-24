//https://leetcode.com/problems/find-all-duplicates-in-an-array/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[abs(nums[i])-1]<0)
             {
                 v.push_back(abs(nums[i]));
            }
            else{
                int p=nums[i];
                nums[abs(p)-1]*=-1;
            }   
        }
        return v;
    }
};
