#include<bits/stdc++.h>

using namespace std;

int main(){
	int a=4;
	int b=6;
//AND(&),OR(|),NOT(~),XOR(^)
	cout<<"(a & b) "<<(a&b)<<endl;
	cout<<"(a | b) "<<(a|b)<<endl;
	cout<<"(~a) "<<~a<<endl;
	cout<<"(a ^ b) "<<(a^b)<<endl;

//Left(<<) and Right(>>) shift operator
	cout << (17>>1) <<endl;
	cout << (17>>2) <<endl;
	cout << (19<<1) <<endl;
	cout << (21<<2) <<endl;

//Pre/Post Increment and Decrement Operators
/*i++ --> post increment
  ++i --> pre increment
  i-- --> post decrement
  --i --> pre decrement*/

	int i=7;

	cout<<(++i)<<endl;
	cout<<(i++)<<endl;
	cout<<(i--)<<endl;
	cout<<(--i)<<endl;




}