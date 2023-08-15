#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

// To print below string in reverse lexicographical order
bool cmp(char first, char second){
  return first > second;
}

bool compare(int a, int b){
  return a > b;
}

int main() {
  string s = "atharv";
  // Lexicographical order
  sort(s.begin(), s.end());
  cout << s << endl;
  
  // Reverse Lexicographical order
  sort(s.begin(), s.end(), cmp);
  cout << s << endl;
  
  // Printing in reverse order
  vector<int> v{5, 3, 1, 2, 4};
  sort(v.begin(), v.end(), compare);

  for(auto i:v){
    cout << i << " ";
  }
  cout << endl;
}