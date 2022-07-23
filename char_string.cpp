#include<bits/stdc++.h>

using namespace std;
//=========== Finding Maximum character in a string ============
char getMaxOccCharacter(string s){  
  int arr[26] = {0};

  for(int i=0; i<s.length(); i++){
  	char ch = s[i];

  	int number = 0;
  	if(ch >= 'a' && ch <= 'z'){
  		number = ch - 'a';
  	}
  	else{
  		number = ch - 'A';
  	}
  	arr[number]++;
  }
  int maxi = -1, ans= 0;
  for(int i=0; i<26; i++){
  	if(maxi < arr[i]){
  		ans = i;
  		maxi = arr[i];
  	}
  }
  char finalAns = 'a' + ans;
  return finalAns;
}
//=========== converting uppercase letter to lowercase ==========
	//for uppercase to lowercase : 'ch' - 'A' + 'a'
	//for lowercase to uppercase : 'ch' - 'a' + 'A'
char toLowerCase(char ch){
	if(ch >= 'a' && ch <= 'z')
		return ch;
	else{
		char temp = ch - 'A' + 'a';
		return temp;
	}
}	
//=========== Check whether String is palindrome or not ===========
bool checkPalindrome(char a[], int n){
	int s = 0;
	int e = n-1;

	while(s<=e){
		if(toLowerCase( a[s]) != toLowerCase( a[e]) ){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
	return 1; 
}
//=========== Reverse a String =============
void reverse(char name[], int n){
	int s = 0;
	int e = n-1;

	while(s<e){
		swap(name[s++], name[e--]);
	}
}
//=========== Length of a String ==============
int getLegth(char name[]){
	int count = 0;
	for(int i=0; name[i] != '\0'; i++){
		count++;
    }
    return count;
}
int main(){
	// char name[20];
	// cout << "Enter your name " << endl;
	// cin >> name;

	// cout << "Your name is ";
	// cout << name << endl;
	// int len = getLegth(name);

	// cout << "Length: " << len << endl; 
	// reverse(name, len);
	// cout << "Your name is ";
	// cout << name << endl;

	// cout << "Palindrome or Not: "<< checkPalindrome(name, len)<< endl;

	// cout << "Lower case: "<<toLowerCase('A');

	string s;
	cin >> s;
	cout << getMaxOccCharacter(s) << endl;
}

