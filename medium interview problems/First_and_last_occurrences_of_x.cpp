// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

class Solution
{
    public:
    void firstOcc(int arr[],int index1,int& ans1, int n, int x){
        if(index1 >= n){
            return;
        }
        if(arr[index1] == x){
            ans1 = index1;
            return ;
        }
        firstOcc(arr, index1 + 1 , ans1, n, x);
    }
    
    void lastOcc(int arr[],int index2,int& ans2, int n, int x){
        if(index2 == 0){
            return;
        }
        if(arr[index2] == x){
            ans2 = index2;
            return ;
        }
        lastOcc(arr, index2 - 1 , ans2, n, x);
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        int index1 = 0;
        int index2 = n - 1;
        int ans1 = -1;
        int ans2 = -1;
        firstOcc(arr, index1, ans1, n, x);
        lastOcc(arr, index2, ans2, n, x);
        
        vector<int> ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
        
    }
};



