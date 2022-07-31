#include <bits/stdc++.h>

using namespace std;

//=================== Reversing a string using Recursion ==================
void reverseStr(string& str, int i, int j){
	cout << "call recieved for "<< str << endl;
	if(i>j){
		return ;
	}
	swap(str[i],str[j]);
	i++;
	j--;

	reverseStr(str,i,j);
}

//==================== Check Palindrome ===================
bool checkPalindrome(string str, int i, int j){
	if(i>j){
		return true;
	}
	if(str[i] != str[j]){
		return false;
	}
	else{
		return checkPalindrome(str, i+1, j-1);
	}
}

//=================== Finding power using recursion (bth power of a means a^b) ===================
int pow(int a, int b){
	if(b==0){
		return 1;
	}
	if(b==1){
		return a;
	}
	int ans = pow(a, b/2);

	if(b%2 == 0){
		return ans * ans; //even
	}
	else{
		return a * ans * ans; //odd
	}
}

// ================= Bubble sort using recursion ==================
void bubbleSort(int arr[], int n){
	if(n==0  || n==1){
		return ;
	}
	for(int i=0; i<n-1; i++){
		if(arr[i] > arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}
	bubbleSort(arr, n-1);
}

int main(){
	// string name = "atharv"; 

	// cout << endl;
	// reverseStr(name, 0, name.length()-1);
	// cout << endl;

	// cout<< name << endl;

	// string str = "noon";
	// cout << endl;

	// bool isPalindrome = checkPalindrome(str, 0, str.length()-1);

	// if(isPalindrome){
	// 	cout << "It is a palindrome" << endl;
	// }
	// else{
	// 	cout << "It is not a palindrome" << endl;
	// }

	// int a,b;
	// cin>>a>>b;
	// cout << endl;

	// int ans = pow(a,b);

	// cout << "Answer is: " << ans << endl;

	int arr[5] = {2,5,8,6,3};
	bubbleSort(arr,5);
	for(int i=0; i<5; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
