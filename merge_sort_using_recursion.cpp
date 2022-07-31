#include<bits/stdc++.h>

using namespace std;
void merge(int arr[], int start, int end){
	int mid = start+(end - start)/2;

	//length of left or first part/array
	int length1 = mid - start + 1;
	
	//length of right or second part/array
	int length2 = end - mid;

	//Creting two arrays to store values of both parts
	int *firstArr = new int[length1];
	int *secondArr = new int[length2];

	//Copying values into firstArr and secondArr
	int mainArrayIndex = start;
	for(int i=0; i<length1; i++){
		firstArr[i] = arr[mainArrayIndex++];
	}
	mainArrayIndex = mid + 1;
	for(int i=0; i<length2; i++){
		secondArr[i] = arr[mainArrayIndex++];
	}

	int index1 = 0;
	int index2 = 0;
	mainArrayIndex = start;

	while(index1 < length1 && index2 < length2){ //For checking the created limits are in limit.
		if(firstArr[index1] < secondArr[index2]){
			arr[mainArrayIndex++] = firstArr[index1++];
		}
		else{
			arr[mainArrayIndex++] = secondArr[index2++];
		}
	}

	//If one of the arrays length is greater than the length
	while(index1 < length1){
		arr[mainArrayIndex++] = firstArr[index1++];
	}
	while(index2 < length2){
		arr[mainArrayIndex++] = secondArr[index2++];
	}
}

void mergeSort(int arr[], int start, int end){
	if(start >= end){
		return;
	}
	int mid = start+(end - start)/2;

	//First part which will be from start to mid
	mergeSort(arr, start, mid);

	//Seccond part which will be from mid to end 
	mergeSort(arr, mid+1, end);

	//For merging two parts together 
	merge(arr, start, end);
}
int main(){
	int arr[5] = {2,6,8,5,10};
	int n = 5;

	mergeSort(arr, 0, n-1);
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}