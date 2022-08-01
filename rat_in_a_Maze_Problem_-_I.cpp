// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

class Solution{
    private:
    bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m){
        if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
            return true;
        }   
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n, vector<string>& ans, int x, int y, vector<vector<int>> visited, string path){
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return ;
        }
        visited[x][y] = 1;
        //We have 4 cases
        
        //Case 1: Down
        int newX = x+1;
        int newY = y;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('D');
            solve(m, n, ans, newX, newY, visited, path);
            path.pop_back();
        }
        
        //Case 2: Left
        newX = x;
        newY = y-1;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('L');
            solve(m, n, ans, newX, newY, visited, path);
            path.pop_back();
        }
        
        //Case 3: Right
        newX = x;
        newY = y+1;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('R');
            solve(m, n, ans, newX, newY, visited, path);
            path.pop_back();
        }
        
        //Case 4: Up
        newX = x-1;
        newY = y;
        if(isSafe(newX, newY, n, visited, m)){
            path.push_back('U');
            solve(m, n, ans, newX, newY, visited, path);
            path.pop_back();
        }
        visited[x][y] = 0;
    }   
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0] == 0){ //If starting and ending positions are zero
            return ans;
        }
        
        int srcX = 0;
        int srcY = 0;
        
        vector<vector<int>> visited = m; //creating 2D array
        
        for(int i=0; i<n; i++){  
            for(int j=0; j<n; j++){
                visited[i][j] = 0; //Marking 2D array with 0
            }
        }
        
        string path = "";
        
        solve(m, n, ans, srcX, srcY, visited, path);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
