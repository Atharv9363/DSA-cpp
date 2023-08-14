// https://leetcode.com/problems/palindromic-substrings/description/

class Solution {
public:
    int expandAroundIndex(string s, int left, int right){
        int count = 0;
        // increment left and decrement right until left and right matches
        while(left >= 0 && right < s.length() && s[left] == s[right]){
            count++;
            left--;
            right++;
        }
        return count; 
    }
    int countSubstrings(string s) {
        int totalCount  = 0;
        int n = s.length();

        for(int center=0; center<n; center++){
            // odd
            int ansOdd = expandAroundIndex(s, center, center);
            totalCount = totalCount + ansOdd;
            // even
            int ansEven = expandAroundIndex(s, center, center+1);
            totalCount = totalCount + ansEven;
        }

        return totalCount;
    }
};
