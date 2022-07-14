#include<bits/stdc++.h>

using namespace std;

int main(){
	/*int n;
	cin >> n;
	int i =1;

	while(i<=n){
		int j =1;
		while(j<=n){
			cout << "*";
			j=j+1;
		}
		cout<<endl;	
		i=i+1;
	}
	
	while(i<=n){
		int j =1;
		while(j<=n){
			cout << i;
			j++;
		}
		cout << endl;
		i++;
	}
*/
	
		/*
	int n;
	cin>>n;

	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}
	I:4

	O:1234
	 1234
	 1234
	 1234 */

	int n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<n-j+1;
			j++;
		}
		cout<<endl;
		i++;
	}
}