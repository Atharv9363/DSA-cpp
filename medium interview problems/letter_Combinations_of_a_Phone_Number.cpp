// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
private:
    void solve(string digit, string output, int index, vector<string>& ans,string mapping[]){
        if(index >= digit.length()){  //base case
            ans.push_back(output);
            return;
        }
        int number = digit[index] - '0';  //This will get us the index character for converting that character to numbeer we are subracting it '0' from it.
        string value = mapping[number];  //For getting corresponding string value to the number.
        
        for(int i=0; i<value.length(); i++){ // For getting all the characters respect to that number e.g 1 => abc
            output.push_back(value[i]);
            solve(digit, output, index+1, ans, mapping);
            output.pop_back(); //For removing used number.
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){ //Checking whether the input string is empty or not
            return ans;
        }
        string output;
        int index = 0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        //mapping numbers with string
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};
