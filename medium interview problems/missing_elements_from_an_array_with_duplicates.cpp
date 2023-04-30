#include <iostream>
using namespace std;

void findMissing(int *a, int n){
  // // Visited method
  // for(int i=0; i<n; i++){
  //   int index = abs(a[i]);
  //   if(a[index - 1] > 0){
  //     a[index - 1] *= -1;
  //   }
  // }
  // // All remaining positive indexes are missing indexes
  // for(int i=0; i<n; i++){
  //   if(a[i] > 0){
  //     cout << i+1 << " ";
  //   }
  // }

  // Sort + Swap method
  int i = 0;
  while(i<n){
    int index = a[i] - 1;
    if(a[i] != a[index]){
      swap(a[i], a[index]);
    }
    else{
      ++i;
    }
    
  }
  // for(int i=0; i<n; i++){
  //   cout << a[i] << " ";    
  // }
  // cout << endl;

  for(int i=0; i<n; i++){
    if(a[i] != i+1){
      cout << i+1 << " ";
    }
  }
  cout << endl;
}

int main() {
  // Missing elements from an array with duplicates
  //Constraints:
  // N - Size of array
  // a[i] belongs to [1,N]

  int n;
  int a[] = {1,3,5,3,4};
  n = sizeof(a)/sizeof(int);
  findMissing(a, n);
  return 0;

}