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

void update2(int **p2){
	//p2 = p2 + 1; // There will be no changes.

	//*p2 = *p2 + 1; //There will be changes 

	//**p2 = **p2 + 1; //There will be changes in i.
}

void update3(int *p){
	*p = (*p) * 2;
}

void increment(int **p){
	++(**p);
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
// ============== Double Pointer ===============

	// int i = 5;
	// int* p = &i;
	// int** p2 = &p;

	// cout << " Printing p " << p <<endl;
	// cout << " Address of p " << &p <<endl;  
	// cout << *p2 << endl;

	// cout << i <<endl;
	// cout << *p <<endl;
	// cout << **p2 <<endl;


	// cout << &i << endl;
	// cout << p << endl;
	// cout << *p2 << endl;

	// cout <<"Before " <<i << endl;
	// cout <<"Before " <<p << endl;
	// cout <<"Before " <<p2 << endl;
	// update2(p2);
	// cout <<"After " << i << endl;
	// cout <<"After " << p << endl;
	// cout <<"After " << p2 << endl;

// 		Questions
	//1.
	// int first = 8;
	// int second = 18;
	// int *ptr = &second;
	// *ptr = 9;
	// cout << first << " " << second << endl;

	//OUTPUT : 8 9
 
 //---------------------------------------------------	
	
	//2.
	// int first = 6;
	// int *p = &first;
	// int *q = p;
	// (*q)++;
	// cout << first <<endl;

	//OUTPUT : 7

 //---------------------------------------------------	
	//3.
	// int first = 8;
	// int *p = &first;
	// cout << (*p)++ << " ";
	// cout << first << endl;	

	// 	output : 8 9

 //---------------------------------------------------	

	//4.
	// int *p = 0;
	// int first = 110;
	// *p = first; 	
	// cout << *p << endl;

	// It will give an error to solve this error we have change p = &first then it will run. 
 //---------------------------------------------------	

	//5.
	// int first = 8;
	// int second = 11;
	// int *third = &second;
	// first = *third;
	// *third = *third + 2;
	// cout << first << " " << second << endl;

	//OUTPUT : 11 13

 //---------------------------------------------------	

	//6.
	// float f = 12.5;
	// float p = 21.5;
	// float *ptr = &f;
	// (*ptr)++;
	// *ptr = p;
	// cout << *ptr << " " << f << " " << p << endl;


	//OUTPUT : 21.5 21.5 21.5
 //---------------------------------------------------	

	//7.
	// int arr[5];
	// int *ptr;
	// cout << sizeof(arr) << " " << sizeof(ptr) <<endl;							

	//OUTPUT : 20 4

 //---------------------------------------------------	

	//8.
	// int arr[] = {11,21,13,14};
	// cout << *(arr) << " " << *(arr+1) << endl;

	//OUTPUT : 11 21

 //---------------------------------------------------	

	// //9.
	// int arr[6] = {11, 12, 31};
	// cout << arr << " " << &arr <<endl;

	//OUTPUT : 0x61fef8 0x61fef8

 //---------------------------------------------------	

	//10.
	// int arr[6] = {11, 21,13};
	// cout << (arr + 1) <<endl;	 

	//OUTPUT : 0x61fefc

//---------------------------------------------------

	//11.
	// int arr[6] = {11,21,31};
	// int *p = arr;
	// cout << p[2] <<endl;

	//OUTPUT : 31

//---------------------------------------------------

	//12.
	// int arr[] = {11,12,13,14,15};
	// cout << *(arr) << " " << *(arr + 3);	 

	//OUTPUT : 11 14

//---------------------------------------------------

	// //13.
	// int arr[] = {11,21,31,41};
	// int *ptr = arr++;
	// cout << *ptr << endl;	

	//It will give an error

//---------------------------------------------------

	//14.
	// char ch = 'a';
	// char *ptr = &ch;
	// ch++;
	// cout << *ptr << endl;

	//OUTPUT : b

//---------------------------------------------------

	//15.
	// char arr[] = "abcde";
	// char *p = &arr[0];
	// cout << p << endl;

	//OUTPUT : abcde

//---------------------------------------------------

	// //16.
	// char arr[] = "abcde";
	// char *p = &arr[0];
	// p++;
	// cout << p << endl;

	//OUTPUT : bcde

//---------------------------------------------------

	//17.
	// char str[] = "atharv";
	// char *p = str;
	// cout << str[0] << " " << p[0] << endl;

	//OUTPUT: a a

//---------------------------------------------------

	//18.
	// int i = 10;
	// update3(&i);
	// cout << i << endl;

	//OUTPUT : 20

//---------------------------------------------------

	//19. 
	// int first = 110;
	// int *p = &first;
	// int **q = &p;
	// int second = (**q)++ + 9;
	// cout << first << " " << second << endl;

	//OUTPUT : 111 119

//---------------------------------------------------

	//20.
	// int first = 100;
	// int *p = &first;
	// int **q = &p;
	// int second = ++(**q);
	// int *r = *q;
	// ++(*r);
	// cout << first << " " << second <<endl;

	//OUTPUT : 102 101  

//---------------------------------------------------

	//21.
	// int num = 110;
	// int *ptr = &num;
	// increment(&ptr);
	// cout << num << endl;

	//OUTPUT : 111
}
