#include<bits/stdc++.h>

using namespace std;

int partition(int arr[], int start, int end){

	int pivot = arr[start];

	int count = 0;
	//For counting numbers which are less than pivot
	for(int i=start+1; i<=end; i++){
		if(arr[i] <= pivot){
			count++;
		}
	}
	//For placing pivot at right position.
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	//From here we are checking left and right part of the pivot

	int i=start, j=end;

	while(i<pivotIndex && j>pivotIndex){

		while(arr[i] <= pivot){
			i++; // This is incrmenting if the element is less than pivot 
		}

		while(arr[j] > pivot){
			j--; // This is decrmenting if the element is greater than pivot
		}

		if(i<pivotIndex && j>pivotIndex){
			swap(arr[i], arr[j]); //Swapping elements if above conditions are not matched
			i++;
			j--;
					//OR
		//	swap(arr[i++],arr[j--]);
		}
	}
	return pivotIndex;
}

void quickSort(int arr[], int start, int end){
	if(start >= end){
		return ;
	}
	//For creating two partition 
	int p = partition(arr, start, end);

	//For elements which are less than p
	quickSort(arr, start, p-1);

	//For elements which are greater than p
	quickSort(arr, p+1, end);
}
int main()
{
	int arr[5] = {2,4,1,6,9};
	int n = 5;

	quickSort(arr, 0, n-1);

	for(int i=0; i<n; i++){
		cout<< arr[i] << " ";
	}
	cout << endl;
}