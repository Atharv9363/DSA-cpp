#include<bits/stdc++.h>

using namespace std;

// void printArray(int arr[],int size){
// 	cout <<"Printing the array";
// 	for(int i=0; i<size; i++){
// 		cout<< arr[i]<<" ";
// 	}
// 	cout<<endl;
// 	cout<<"Done!";

// }

//int main(){
	// int number[15];
	// cout<< "Value at 0th index is: "<< number[0]<<endl;
	// cout<< "Value at 1st index is: "<< number[1]<<endl;

	// int second[3]={5,7,11};
	// cout<< " Value at second index is: "<< second[2]<<endl;

	// int third[15]={2,7};
	// int n =15;
	// cout << "Printing the Array "<<endl;
	// for(int i=0;i<n;i++){
	// 	cout <<third[i]<<" ";
	// }
	// cout<<endl;

	//int fourth[10]={0};
	// n=10;
	// cout << "Printing the Array "<<endl;
	// for(int i=0;i<n;i++){
	// 	cout <<fourth[i]<<" ";
	// }
	// cout<<endl;

	// int fifth[10]={1};
	// n=10;
	// cout << "Printing the Array "<<endl;
	// for(int i=0;i<n;i++){
	// 	cout <<fifth[i]<<" ";
	// }	


//Printing Array using functions
	// int sixth[10]={1,2,3,4,5,6,7,8,9};
	// printArray(sixth , 10);
	// int sixthsize= sizeof(sixth)/sizeof(int);
	// cout<<"Size of sixth is : "<<sixthsize<<endl;


//Printing array of char type
// 	char ch[6]={'a','t','h','a','r','v'};
// 	cout<<" Arrray is : ";

// 	for(int i=0;i<=5;i++){
// 		cout<<ch[i]<<" ";
// 	}
// 	cout<<endl;
//}


//Finding Maimum and Minimum element of an array
	// int getMax(int num[], int n){
	// 	//int max = INT_MIN;
	// 	int maxi = INT_MIN;
	// 	for(int i=0;i<=n;i++){
	// 	// 	if(num[i]>max){
	// 	// 		max = num[i];
	// 	// 	}
	// 		maxi=max(maxi,num[i]);
	// 	}
	// 	//return max;
	// 	return maxi;
	// }

	// int getMin(int num[], int n){
	// 	//int min = INT_MAX;
	// 	int mini = INT_MAX;
	// 	for(int i=0;i<=n;i++){
	// 		// if(num[i]<min){
	// 		// 	min = num[i];
	// 		// }
	// 		mini=min(mini,num[i]);
	// 	}
	// 	//return min;
	// 	return mini;
	// }

	// int main(){
	// 	int size;
	// 	cin>>size;
	// 	int num[100];
	// 	for(int i=0; i<size;i++){
	// 		cin >> num[i];
	// 	}
	// 	cout<< "Maximum value in array is : "<< getMax(num,size) <<endl;
	// 	cout<< "Minimum value in array is : "<< getMin(num,size) <<endl;

	// 	return 0;
	// }


//Scope

// void update(int arr[],int n){
// 	cout<< endl<<"Inside the function."<<endl;
// 	for(int i=0;i<3;i++){
// 		cout<< arr[i]<<" ";
// 	}
// 	cout<<endl;

// 	cout<<"Going back to main function."<<endl;
// }
// int main(){
// 	int arr[3]={1,2,3};
// 	update(arr,3);

// 	cout <<endl <<"Printing in main function "<<endl;
// 	for(int i=0;i<3;i++){
// 		cout << arr[i]<<" ";
// 	}
// 	cout<<endl;
// }


//**
// int sum(int arr[],int n){
// 	int add=0;
// 	for(int i=0;i<n;i++ ){
// 		add = add+i;
// 	}
// 	return add;
// }

// int main(){
// 		int size;
// 	 	cin>>size;
// 	 	int num[10];
// 	 	for(int i=0; i<size;i++){
// 	 		cin >> num[i];
// 		}
// 		cout << " Addition of an Array is : "<<sum(num,size);
// }


//------------>Reverse an Array<-------------
// void reverse(int arr[],int n){
// 	int start = 0;
// 	int end =n-1;

// 	while(start<=end){
// 		swap(arr[start],arr[end]);
// 			start++;
// 			end--;
// 	}
// }

// void printArray(int arr[],int n){
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;
// }

// int main(){
// 	int arr[6]={13,6,23,9,54,2}; 
// 	int brr[5]={7,8,6,4,3};

// 	reverse(arr,6);
// 	reverse(brr,5);

// 	printArray(arr,6);
// 	printArray(brr,5);

// 	return 0;
// }

//---------->Swap Alternate elements in an Array<----------
// void printArray(int arr[],int n){
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}cout<<endl;
// }
// void swapAlternate(int arr[],int size){
// 	for(int i=0;i<size;i+=2){
// 		if(i+1<size){
// 			swap(arr[i],arr[i+1]);
// 		}
// 	}
// }

// int main(){

// 	int even[6]={5,3,7,9,12,35};
// 	int odd[5]={2,23,7,6,3};
	
// 	cout<<"Alternate swap of Even array is: ";
// 	swapAlternate(even,6);
// 	printArray(even,6);
// 	cout<<endl;


// 	cout<<"Alternate swap of Odd array is: ";
// 	swapAlternate(odd,5);
// 	printArray(odd,5);
// }

