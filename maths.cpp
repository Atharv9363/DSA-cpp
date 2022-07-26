#include<bits/stdc++.h>

using namespace std;
//To find given number is Prime or not
bool isPrime(int n){
	if(n<=1)
	return false;
	
	for(int i=2; i<n; i++){
		if(n%i==0){
			return false;
		}
	}	
	return true;
}

//To find GCD of Two Numbers.
int gcd(int a, int b){
	if(a==0)
	return b;
	
	if(b==0)
	return a;

	while(a != b){
		if(a>b){
			a= a-b;
		}
		else{
			b=b-a;
		}
	}
	return a;	
}
int main(){
	// int a,b;
	// cout << "Enter the values of a and b" << endl;
	// cin >> a >> b;

	// int ans = gcd(a,b);

	// cout << "The GCD of " << a <<"& " << b << " is: " << ans << endl;

	// return 0;

	int n;
	cin >> n;

	if(isPrime(n)){
		cout << "It is a Prime Number" << endl;
	}
	else{
		cout << "It is not a Prime Number" << endl;
	}
}
