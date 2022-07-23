/* Binary Function
  For Binary Search elements should be in monotonic function    */


#include<bits/stdc++.h>

using namespace std;

// int binarySearch(int arr[], int size ,int key){
// 	int start = 0;
// 	int end = size - 1;

// 	int mid = start + (end - start)/2; // it is same as (start + end)/2 but it will solve error of getting integer size out of range (2^31 - 1). 

// 	while(start <= end){
// 		//if element is at middle index
// 		if(arr[mid]== key){
// 			return mid;
// 		}
// 		//if element is at right(more than midddle element) side of middle element
// 		else if(key > arr[mid]){
// 			start= mid + 1;
// 		}
// 		//if element is at left(less than middle element) side of middle element
// 		else{
// 			start= mid - 1;
// 		}
// 		mid = start + (end - start)/2; //
// 	}
// 	return -1;
// }
// int main()
// {
// 	int even[6] = {2,4,6,8,12,16};
// 	int odd[5] = {3,5,7,9,11};

// 	int evenIndex = binarySearch(even,6,12);

// 	cout << "Index of 12 is:" << evenIndex << endl; 
	
// 	int oddIndex = binarySearch(odd,5,7);

// 	cout << "Index of 7 is:" << oddIndex << endl;

// 	return 0;
// }

//First and Last Position of an Element In Sorted Array

// int firstOcc(int arr[], int n, int key){
// 	int s = 0;
// 	int e = n-1;
// 	int mid = s + (e-s)/2 ;
// 	int ans = -1;
// 	while(s <= e){
// 		if(arr[mid] == key){
// 			ans = mid;
// 			e = mid - 1;
// 		}
// 		else if(key > arr[mid]){
// 			s = mid + 1;
// 		}
// 		else if(key < arr[mid]){
// 			e = mid - 1;
// 		}
// 		mid = s + (e - s)/2;
// 	} 
// 	return ans;
// }
// int lastOcc(int arr[], int n, int key){
// 	int s = 0;
// 	int e = n-1;
// 	int mid = s + (e-s)/2 ;
// 	int ans = -1;
// 	while(s <= e){
// 		if(arr[mid] == key){
// 			ans = mid;
// 			s= mid + 1;
// 		}
// 		else if(key > arr[mid]){
// 			s = mid + 1;
// 		}
// 		else if(key < arr[mid]){
// 			e = mid - 1;
// 		}
// 		mid = s + (e - s)/2;
// 	} 
// 	return ans;
// }

// int main(){
// 	int even[5] = {1,2,3,3,5};

// 	cout << "First occurence of 3 is: " << firstOcc(even ,5 ,3) << endl;
// 	cout << "Last occurence of 3 is: " << lastOcc(even ,5 ,3) << endl;
// }

// Finding pivot element in an array

// int getPivot(int arr[], int n){
// 	int s = 0;
// 	int e = n - 1;
// 	int mid = s + (e - s)/2;

// 	while(s < e){
// 		if(arr[mid] >= arr[0]){
// 			s = mid+1;
// 		}
// 		else{
// 			e = mid;
// 		}
// 		mid = s + (e - s)/2;
// 	}
// 	return s;
// }

// int main(){
// 	int arr[5] = {3,8,10,17,1};

// 	cout << "Pivot is: " << getPivot(arr , 5) << endl;
// }

//Finding Square root of an integer more precisely 
long long int sqrtInteger(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e - s)/2;
        
        long long int ans = -1;
        while(s <= e){
            long long int square = mid * mid;
            if(square == n){
                return mid;
            }
            if(square < n){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
}

double morePrecision(int n, int precision, int tempSol){
	 double factor = 1;
	 double ans = tempSol;

	 for (int i = 0; i < precision; i++)
	 {
	 	factor = factor / 10;

	 	for(double j = ans; j*j < n; j= j+factor){
	 		ans = j;
	 	}
	 }
	 return ans;
}


int main(){
  	int n;
  	cout << "Enter the Number: " << endl;
  	cin >> n;

  	int tempSol = sqrtInteger(n);
  	cout << "Answer is: " << morePrecision(n, 3, tempSol); 
  	return 0;
}