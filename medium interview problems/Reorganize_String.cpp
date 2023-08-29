// https://leetcode.com/problems/reorganize-string/description/

class Solution {
public:
    string reorganizeString(string s) {
         int hash[26] = {0}; //Because there are 26 alphabets
         for(int i=0; i<s.size(); i++){
             hash[s[i] - 'a']++;
         }  //O(n)

        //  Finding the most frequent character
        char max_freq_char;
        int max_freq = INT_MIN;
        for(int i=0; i<26; i++){
            if(hash[i] > max_freq){
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        } //Running at constant time

        int index = 0;
        while(max_freq > 0 && index < s.size()){
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }       //O(n/2) = O(n)

        if(max_freq != 0){
            return "";
        }
        hash[max_freq_char - 'a'] = 0;

        // Place the rest of the characters

        for(int i=0; i<26; i++){
            while(hash[i] > 0){
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                hash[i]--;
                index += 2;
            }
        }  //O(25 * n) = O(n)
        return s;
    }
};
