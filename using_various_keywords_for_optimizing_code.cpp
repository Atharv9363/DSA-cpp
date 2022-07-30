#include<bits/stdc++.h>

//==> Macro : It is a piece of code in a program that is replaced by value of macro. 
//==> Global variable : Variable which has global scope.
//==> Inline functions : These are used to reduce the function calls overhead. 
//==> Default Arguments : 

using namespace std;

//================= Used for Macros ========================
//2nd way
//#define PI 3.14 //More optimized because this is not a variable so we don't need to allocate memory

//================= Used for Global Variables
// int score = 15; //Declaring a global variable
//use global variables carefully because anyone can change it. if it was change in one function then it will affect the next function So use refrence variables instead of it. 

// void a(){
// 	cout << score << " Accessing Global variable in function a"<< endl;
// 	score++; //Here after updating this score output/ value in function b changed.
// }
// void b(){
// 	cout << score << " Accessing Global variable in function b" << endl;	
// }

//================== Used for Inline functions =======================
// inline int getMax(int a, int b){
// 	return (a>b) ? a : b; //It will treat maximum three lines of code as a inline function ,it also varies on compiler to compiler 
// }

//================== Used for Default arguments ======================
void print(int arr[], int n, int start = 0){
	//Here we have created start as a default argument.
	//**Default argument always start from rightmost parameter/argument.
	
	for(int i=start; i<n; i++){
		cout << arr[i] << endl;
	}

}


int main(){
//e.g for Macros
	
	// int r = 5;
	
	// //1st way
	// //double pi = 3.14; //It will take some memory So we can further optimize it by using macros

	// double area = PI * r * r;
	// cout << "Area is " << area << endl; 

//e.g for Global Variable

	// cout << score << " Accessing Global variable in main " << endl;
	// a();
	// b();

//e.g Inline funtions

	// int a=1,b=2;
	// int ans = 0;

	// ans = getMax(a,b); //In inline function function call gets replaced with function body which results in no extra memory usage and no function call overhea d
	// cout << ans << endl; 

	// a = a+3;
	// b = b+1;

	// ans = getMax(a,b);
	// cout << ans << endl;

//e.g Default Args
	int arr[5] = {1,3,4,7,8};
	int size = 5;

	print(arr, size);

	cout << endl;

	print(arr, size, 2);

}