#include<bits/stdc++.h>
//Recursion : When a function calls itself directly or indirectly is called Recursion.
//When to use : We use recursion when we have big/complex problem but that problem's solution has same type of small problem
//We need Base case(mandatory without it we will get segmentation fault) and recursive relation to use recursion.
/* Recursion could be - 
	1.Tail Recursion:
	func(){
		Base case

		Processing

		Recursive relation
	}  
	
	2. Head Recursion: 
	func(){
		Base case

		Recursive relation

		processing
	}

	*/

/* For e.g 
	1.We have to solve 2^n 
	so we can solve it using 2^n = 2 * 2^(n-1)  (2^4 = 2 * 2^3)
	So we can say f(n) = 2 * f(n-1)....(Recursive Relation) 
	Here base case will be 2^0


	solve 5!
	so we can solve it using 5! = 5 * 4!
	which is n! = n * (n-1)!
	  f(n) = n * f(n-1) 
	  Here base case  will be 0!*/  

using namespace std;

//====================== Factorial using Recursion ======================

// int factorial(int n){
// 	if(n == 0){
// 		return 1;
// 	}   
// 	int smallProblem = factorial(n-1);
// 	int bigProblem = n * smallProblem;

// 	return bigProblem;
// }
			
			//OR

int factorial(int n){
	if(n==0){    //Base case
		return 1;
	}
	return n * factorial(n-1); //recursive relation
}

//======================= 2 to the power of n ===========================

// int power(int i){
// 	if(i == 0){
// 		return 1;
// 	}
// 	int smallProblem = power(i-1); 
	
// 	int bigProblem = 2 * smallProblem;

// 	return bigProblem;
// } 

			//OR
int power(int i){
	if(i==0){
		return 1;
	}
	return 2 * power(i-1);
}

//====================== Counting numbers =======================
void print(int p){
	if(p==0){
		return ;
	}
	cout << p <<endl;
	print(p-1);

}  

void printR(int p){
	if(p==0){
		return ;
	}
	printR(p-1);
	cout << p << endl;
}

//==================== Say Digit ========================== 
void sayDigit(int n, string arr[]){
	if(n==0){
		return ;
	}
	int digit = n % 10;
	n = n/10;

	sayDigit(n,arr);
	cout << arr[digit] << " ";	 
}

//===================== Finding whether array is sorted or not ==================
bool isSorted(int arr[],int size){
	if(size == 0 || size == 1){
		return true;
	}
	if(arr[0] > arr[1]){
		return false;
	}
	else{
	bool ans = isSorted(arr+1, size-1);
	return ans;
	}	
}

//Finding Sum of all elements in an array
int sumArr(int arr[],int size){
	if(size == 0){
		return 0;
	}
	if(size == 1){
		return arr[0];
	}
	int remaingPart = sumArr(arr+1, size-1);
	int ans = arr[0] + remaingPart;
	return ans; 
}

//================= Linear Search using Recursion =======================
void printArr(int arr[], int n){
	cout<< "Size of array is: "<<n<<endl;
	for(int i=0; i<n; i++){
		cout<< arr[i] << " ";
	}
	cout << endl;
}

bool linearSearch(int arr[], int size, int key){
	printArr(arr,size);

	if(size == 0){
		return false;
	}
	if(arr[0] == key){
		return true;
	}
	else{
		bool remainingPart = linearSearch(arr+1, size-1, key);
		return remainingPart;
	}
}

//================= Binary Search using Recursion =======================
void printArrBS(int arr[],int start, int end){
	for(int i=start; i<=end; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool binarySearch(int arr[], int start, int end, int key){
    cout << endl;

    printArrBS(arr, start, end);

	if(start > end){
		return false;
	}
	int mid = start + (end - start)/2;
	if(arr[mid] == key){
		return true;
	}
	if(arr[mid] < key){
		return binarySearch(arr, mid+1, end, key);
	}
	else{
		return binarySearch(arr, start, mid-1, key);
	}
}

int main(){
	// int n;
	// cin >> n;

	// int ans = factorial(n);

	// cout << "Factorial is: "<< ans << endl;


	// int i;
	// cin >> i;

	// int ans = power(i);
	// cout << "2 to the power of "<< i << " is:" << ans <<endl;
	 
	// int p;
	// cin >> p;
	// cout<< "Numbers are: "<<endl;
	// //print(p);
	// printR(p);

	// string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	// int n ;

	// cin >> n;

	// cout << endl;
	// sayDigit(n, arr);
	// cout << endl;

	// int arr[5] = {2,3,4,5,9};
	// int size = 5;

	// bool ans = isSorted(arr,size);

	// if(ans){
	// 	cout << "Array is sorted." << endl;
	// }
	// else{
	// 	cout << "Array is not sortedd.";
	// }

	// int sum = sumArr(arr, size);
	// cout<< "Sum of an array is: "<< sum <<endl;

	// int arr[5] = {2,3,4,5,9};
	// int size = 5;
	// int key = 6;
	// bool ans = linearSearch(arr, size, key);
	// if(ans){
	// 	cout<< "Present "<<endl;
	// }
	// else{
	// 	cout<< "Absent " <<endl;
	// } 


	int arr[6] = {2,3,4,5,6,9};
	int key = 6;
	bool ans = binarySearch(arr,0,5, key);
	if(ans){
		cout<< "Present "<<endl;
	}
	else{
		cout<< "Absent " <<endl;
	} 

}