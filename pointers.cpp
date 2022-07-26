#include<bits/stdc++.h>

using namespace std;

int main(){
	// int num = 5;
	// cout << num << endl;
//& gives address of operator. 

	// cout << "address of num is: "<< &num << endl;

/* Pointer : pointer helps to store address
e.g. int *p = &num;
	 char *ptr = &ch; */

	// int *ptr = &num;

	// cout << "Address is: " << ptr << endl;
	// cout << "Value is: " << *ptr << endl;

	// double d = 4.3;
	// double *p2 = &d;

	// cout << "Address is: " << p2 << endl;
	// cout << "Value is: " << *p2 << endl;

	// cout << "size of integer is " << sizeof(num) << endl;
	// cout << "size of pointer is " << sizeof(ptr) << endl;
	// cout << "size of pointer is " << sizeof(p2) << endl; 	

//Pointer is created and pointing to some garbage address
	// int *p = 0; 			//Gives segmentation fault
	// cout << *p << endl;


	// int i = 5;
	
	// int *q = &i;
	// cout << q << endl;   
	// cout << *q << endl;	

	// int*p = 0;
	// p = &i;

	// cout << p << endl;
	// cout << *p << endl;

	int num = 5;
	int a = num;
	a++;

	cout << num << endl;

	int *p = &num;
	cout<< "Before " << num << endl;
	(*p)++;
	cout<< "After " << num << endl;

	int *q = p;
	cout << p << " - " << q << endl;
	cout << *p << " - " << *q << endl;

}
