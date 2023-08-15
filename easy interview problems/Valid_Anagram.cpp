// https://leetcode.com/problems/valid-anagram/description/

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqTable[256] = {0};  // 256 ASCII characters are present that's why we are taking 256 here  
        for(int i=0; i<s.size(); i++){
            freqTable[s[i]]++;  //Adding characters in frequency table
        }  //O(m)
        
        for(int i=0; i<t.size(); i++){
            freqTable[t[i]]--; //Removing the characters from frequuency Table/array after found in 't'
        }  //O(n)

        for(int i=0; i<256; i++){
            // If we don't get ) in all indexes of array then it is not valid Anagram
            if(freqTable[i] != 0){
                return false;
            }
        } //O(256)
        return true;  
    }
};
