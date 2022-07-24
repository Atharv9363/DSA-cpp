//https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
int firstOcc(vector<int>& arr, int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2 ;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    } 
    return ans;
}
int lastOcc(vector<int>& arr, int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2 ;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s= mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    } 
    return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}