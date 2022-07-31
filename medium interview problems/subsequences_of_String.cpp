//https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0

void solve(string str, string output, int index, vector<string>& ans){
    if(index >= str.length()){
        if(output.length() > 0){
            ans.push_back(output);    
        }
        return ;
    }
    
    //excludeing string(just increment the index)
    solve(str, output, index+1,ans);
    
    //inccluding string(just push the element in array)
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}
vector<string> subsequences(string str){
	vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}
