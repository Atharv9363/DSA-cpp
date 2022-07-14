#include<bits/stdc++.h>

using namespace std;

// int power(int a, int b){
// 	int ans = 1;
// 	for(int i=1;i<=b;i++){
// 		ans = ans * a;
// 	}
// 	return ans;
// }
// int main(){
// 	int a,b;
// 	cin>>a >> b;
// 	int answer = power(a,b);
// 	cout<< "Answer is: " << answer <<endl;
// 	return 0;
// }

// int power(){
// 	int a,b;
// 	cin>>a>>b;
//  	int ans = 1;
//  	for(int i=1;i<=b;i++){
// 		ans = ans * a;
//  	}
//  	return ans;
// }
// int main(){
// 	int answer = power();
// 	cout<< "Answer is: "<<answer <<endl; 

// }


//------->   Even or Odd   <--------
// bool isEven(int a){
// 	if(a&1){
// 		return 0;
// 	}
// 	else{
// 		return 1;
// 	}
// }
// int main()
// {
// 	int num;
// 	cin >> num;
// 	if(isEven(num)){
// 		cout<<"Number is Even."<< endl;
// 	}
// 	else{
// 		cout<<"Number is Odd."<< endl;
// 	}
//}


//------> nCr of Number <-------
// int fact(int n){
// 	int fact = 1;
// 	for(int i=1;i<=n;i++){
// 		fact = fact * i;
// 	}
// 	return fact;
// }

// int nCr(int n,int r){
// 	int num = fact(n);
// 	int dem = fact(r) * fact(n-r);
// 	int ans = num/dem;
// 	return ans;
// }
// int main(){
// 	int n,r;
// 	cin >> n >> r;
// 	cout << "Answer is :"<<nCr(n,r)<<endl;
// }

//-------->Printing Numbers<-----------
// void printCounting(int n){
// 	for(int i=1;i<=n;i++){
// 		cout<<i<<endl;
// 	}
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	printCounting(n);
// 	return 0;
// }

//------->Finding given number is prime or not<-------
//1-->Prime number
//0-->Not a prime number

// bool isPrime(int n){
// 	for(int i=2;i<n;i++){
// 		if(n%i==0){
// 			return 0;
// 		}
// 	}	
// 	return 1;
// }

// int main(){
// 	int n;
// 	cin >> n;

// 	if(isPrime(n)){
// 		cout<<" is a Prime Number. "<<endl;
// 	}
// 	else{
// 		cout<<" is not a Prime Number. "<<endl;
// 	}
// }

//Pass by Value

// void dummy(int n){
// 	n++;
// 	cout<<" n is: " << n <<endl;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	dummy(n);
// 	cout<<" number n is: "<< n <<endl;
// 	return 0;
// } 
