#include<bits/stdc++.h>

using namespace std;
int update2(int& n){
	n++;
}
int update(int n){
	n++;
}
int main(){
	// int i = 5;

	// int& j = i; //Creating a refrence variable

	// cout << i << endl;
	// i++;
	// cout << i << endl;
	// j++;
	// cout << i << endl;
	// cout << j << endl;

	// int n = 5;
	// cout << "Before " << n << endl;
	// update(n);
	// cout << "After " << n << endl; //Here both before and after values will be same

	int n = 5;
	cout << "Before " << n << endl;
	update2(n);
	cout << "After " << n << endl; //Here we will get updated output which is 5 6 this happened because we used refrence variable in function.

	

}