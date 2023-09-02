//https://leetcode.com/problems/string-compression/
class Solution {
public:
    int compress(vector<char>& chars) {
        // int i = 0;
        // int ansIndex = 0;
        // int n = chars.size();
        
        // while(i<n){
        //     int j=i+1;
        //     while(j<n && chars[i]==chars[j]){
        //         j++;
        //     }
            
        //     chars[ansIndex++] = chars[i];
            
        //     int count = j-i;
            
        //     if(count > 1){
        //         string cnt = to_string(count);
        //         for(char ch: cnt){
        //             chars[ansIndex++] = ch;
        //         }
        //     }
        //     i=j;
        // }
        // return ansIndex;
    }
};

// New Solution :

class Solution {
public:
    int compress(vector<char>& s) {
        int index = 0, count = 1;
        char prev = s[0];

        for(int i = 1; i < s.size(); ++i){
            if(s[i] == prev){
                count++;
            }
            else{
                s[index++] = prev;
                if(count > 1){
                    int start = index;
                    while(count){
                        s[index++] = (count % 10) + '0';
                        count /= 10;
                    }
                    reverse(s.begin() + start, s.begin() + index);
                }
                prev = s[i];
                count = 1; 
            }
        }

        s[index++] = prev;
        if(count > 1){
            int start = index;
            while(count){
                s[index++] = (count % 10) + '0';
                count /= 10;
            }
            reverse(s.begin() + start, s.begin() + index);
        }

        return index;
    }
};
