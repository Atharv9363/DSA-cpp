#include<bits/stdc++.h>

using namespace std;
// void merge(int arr[], int start, int end){
// 	int mid = start+(end - start)/2;

// 	//length of left or first part/array
// 	int length1 = mid - start + 1;
	
// 	//length of right or second part/array
// 	int length2 = end - mid;

// 	//Creting two arrays to store values of both parts
// 	int *firstArr = new int[length1];
// 	int *secondArr = new int[length2];

// 	//Copying values into firstArr and secondArr
// 	int mainArrayIndex = start;
// 	for(int i=0; i<length1; i++){
// 		firstArr[i] = arr[mainArrayIndex++];
// 	}
// 	mainArrayIndex = mid + 1;
// 	for(int i=0; i<length2; i++){
// 		secondArr[i] = arr[mainArrayIndex++];
// 	}

// 	int index1 = 0;
// 	int index2 = 0;
// 	mainArrayIndex = start;

// 	while(index1 < length1 && index2 < length2){ //For checking the created limits are in limit.
// 		if(firstArr[index1] < secondArr[index2]){
// 			arr[mainArrayIndex++] = firstArr[index1++];
// 		}
// 		else{
// 			arr[mainArrayIndex++] = secondArr[index2++];
// 		}
// 	}

// 	//If one of the arrays length is greater than the length
// 	while(index1 < length1){
// 		arr[mainArrayIndex++] = firstArr[index1++];
// 	}
// 	while(index2 < length2){
// 		arr[mainArrayIndex++] = secondArr[index2++];
// 	}
// }

// void mergeSort(int arr[], int start, int end){
// 	if(start >= end){
// 		return;
// 	}
// 	int mid = start+(end - start)/2;

// 	//First part which will be from start to mid
// 	mergeSort(arr, start, mid);

// 	//Seccond part which will be from mid to end 
// 	mergeSort(arr, mid+1, end);

// 	//For merging two parts together 
// 	merge(arr, start, end);
// }
// int main(){
// 	int arr[5] = {2,6,8,5,10};
// 	int n = 5;

// 	mergeSort(arr, 0, n-1);
// 	for(int i=0; i<n; i++){
// 		cout << arr[i] << " ";
// 	}
// 	cout << endl;
// }

//Spave Complexity: O(n)
//Time Complexity : O(nlogn)


//Inversion count using Merge Sort
  
int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid,
          int right);
  
/* This function sorts the
   input array and returns the
number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}
  
/* An auxiliary recursive function
  that sorts the input array and
returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        /* Divide the array into two parts and
        call _mergeSortAndCountInv()
        for each of the parts */
        mid = (right + left) / 2;
  
        /* Inversion count will be sum of
        inversions in left-part, right-part
        and number of inversions in merging */
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
  
        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}
  
/* This function merges two sorted arrays
and returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left, int mid,
          int right)
{
    int i, j, k;
    int inv_count = 0;
  
    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
  
            /* this is tricky -- see above
            explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }
  
    /* Copy the remaining elements of left subarray
(if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];
  
    /* Copy the remaining elements of right subarray
       (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];
  
    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
  
    return inv_count;
}
  
// Driver code
int main()
{
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr, n);
    cout << " Number of inversions are " << ans;
    return 0;
}