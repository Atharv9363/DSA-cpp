#include <iostream>
using namespace std;

int bs(int a[], int start, int end, int x){
  while(start <= end){
    int mid = (start+end)/2;
    if(a[mid] == x){
      return mid;
    }
    else if(x>a[mid]){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return -1;
}

int expoSearch(int a[], int n, int x){
  if(a[0] == x){
    return 0;
  }

  int i = 1;
  while(i<n && a[i] <= x){
    i=i*2; 
  }
  return bs(a, i/2, min(i,n-1), x);
}

int main() {
    int a[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n= sizeof(a) / sizeof(int);
    int x = 13;
    int ans = expoSearch(a, n, x);
    cout << ans << endl;
    return 0;
}

// Time Complexity: log(2^logm-1)

// Applications:
// 1. Search in infinite / unbounded array
// 2. Better than BS when search is near beginning
// 