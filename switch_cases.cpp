#include<bits/stdc++.h>

using namespace std;

int main(){
	// int num = 1;
	// char ch = '1';
	// switch(ch){
	// 	case 1: cout<<"First"<<endl;
	// 			cout<<"First again" <<endl;
	// 			break;

	// 	case '1':switch(num){
	// 		case 1:cout << "Value of num is "<<num <<endl;
	// 		break;
	// 	    }
	// 	    break;
	// 	default: cout<< "It is default case"<<endl;
	// }

// ------------->	Calculator   <--------------
	int a,b;
	cout<<"Enter first number : "<<endl;
	cin>>a;
	cout<<"Enter second number : "<<endl;
	cin>>b;

	char ch;
	cout<<"Enter operation to perform : "<<endl;
	cin >> ch;

	switch(ch){
		case '+':cout << "Addition of numbers is: "<< a+b <<endl;
		break;
		case '-':cout << "Subtraction of numbers is: "<< a-b <<endl;
		break;
		case '*':cout << "Multiplicatition of numbers is: "<< a*b <<endl;
		break;
		case '/':cout << "Disvision of numbers is: "<< a/b <<endl;
		break;
		case '%':cout << "Remainder of numbers is: "<< a%b <<endl;
		break;
	}

}