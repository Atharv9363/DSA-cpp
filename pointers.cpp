#include<bits/stdc++.h>

using namespace std;


void print(int *p){
	cout << *p << endl;
}

void update(int *p){
	//Updating address
	//p= p + 1;
	//cout << "Inside Function " << p << endl;

	//Updating values
	*p = *p + 1;

}

int getSum(int /*arr[] */ *arr, int n){
	cout << endl << "Size : " << sizeof(arr) <<endl;

	int sum = 0;
	for(int i=0; i<n; i++){
		sum += arr[i] /*i[arr] */;
	}
	return sum;
}

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
	
	//============ Pointers in arrays =============
	// 1.Integer Arrays
	//int arr[10] = {23,122,41,67};

	/* cout << "address of first memory block is: " << arr << endl;
	cout << arr[0] << endl;
	cout << "address of first memory block is: " << arr[0] << endl;

	cout << "4th " << *arr << endl;
	cout << "5th " << *arr + 1 << endl;
	cout << "6th " << *(arr + 1) << endl;
	cout << "7th " << *(arr) + 1 << endl;
	cout << "8th " << arr[2] << endl;
	cout << "9th " << *(arr + 2) << endl;
 
	//arr[i] = *(arr + i) OR i[arr] = *(i + arr)
	int i=3;
	cout << i[arr] << endl;
	*/

	// int temp[10];
	// cout << sizeof(temp) << endl;
	// cout << " 1st " << sizeof(*temp) << endl;
	// cout << " 2nd " << sizeof(&temp) << endl;

	// int *ptr = &temp[0];
	// cout << sizeof(ptr) << endl;
	// cout << sizeof(*ptr) << endl;
	// cout << sizeof(&ptr) << endl;

	// int a[20] = {1,2,3,5};
	// cout << " ->" << &a[0] << endl;
	// cout << &a <<endl;
	// cout << a <<endl;

	// int *p = &a[0];
	// cout << p << endl;
	// cout << *p << endl;
	// cout << " ->" << &p << endl;

	//int arr[10];

	//ERROR
	//arr = arr+1;

	// int *ptr = &arr[0];
	// cout << ptr << endl;
	// ptr = ptr + 1;
	// cout << ptr << endl;

	//2. Character Arrays
	//in case of character arrays cout function behaves differently
	//In integer array if we print variable arr we will get address of an array
	//But in case of character array if print variable ch we will get entire array printed.

	// int arr[5] = {1,2,3,4,5};
	// char ch[6] = "abcde";

	// cout << arr << endl;
	// cout << ch << endl; 

	// char *c = &ch[0];
	// //prints entire string.
	// cout << c << endl;

	// char temp = 'z';
	// char *p = &temp;

	// cout << p << endl;

//============== Pointers in Functions ==============

	/*int value = 5;
	int *p = & value;

	//print(p);

	cout << "Before " << p <<endl;
	update(p);
	cout << "After " << p << endl;

	cout << "value Before update " << *p << endl;
	update(p);
	cout << "value After update " << *p << endl;
	*/

	// int arr[5] = {1,2,3,4,5};

	// cout << "Sum is " << getSum(arr,5) << endl;

//Benefit of sending array as a pointer in the function is we can send a part of array
//for e.g.
	
	// int arr[6] = {1,2,3,4,5,8};

	// cout << "Sum is " << getSum(arr+3,3) << endl;	
}
