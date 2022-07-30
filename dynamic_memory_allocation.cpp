#include<bits/stdc++.h>

using namespace std;

int getSum(int *arr, int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += arr[i];
	}
	return sum;
}
int main(){
//Dynamic memory allocation in 1D array
	// int n;
	// cin >> n;

	// int *arr = new int[n];
	
	// for(int i=0; i<n; i++){
	// 	cin >> arr[i];
	// }

	// int ans = getSum(arr, n);
	// cout << "Answer is " << ans <<endl;

//Dynamic memory allocation in 2D array
	// int n;
	// cin >> n;

	// int **arr = new int*[n];

	// for(int i=0; i<n; i++){
	// 	arr[i] = new int[n];
	// }

	// for(int i=0; i<n; i++){
	// 	for(int j=0; j<n; j++){
	// 		cin >> arr[i][j];
	// 	}
	// }

	// for(int i=0; i<n; i++){
	// 	for(int j=0; j<n; j++){
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }


//2D array by taking row and col input   
	// int row;
	// cin >> row;

	// int col;
	// cin >> col;

	// int **arr = new int*[row];
	// //Here we have created an array of pointer and with respect to those corresponding pointers we have created arra ys
	// for(int i=0; i<row; i++){
	// 	arr[i] = new int[col]; 
	// }

	// for(int i=0; i<row; i++){
	// 	for(int j=0; j<col; j++){
	// 		cin >> arr[i][j];
	// 	}
	// }

	// for(int i=0; i<row; i++){
	// 	for(int j=0; j<col; j++){
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	//Releasing memory
	// for(int i=0; i<row; i++){
	// 	delete [] arr[i];
	// }
	// delete []arr;

// 2D Jagged array
// 	int rows;
// 	cout << "Enter no of rows of array: ";
// 	cin >> rows;
// 	int *cols = new int[rows];   //array to store no of columns in each row;
// 	//declaration of array
// 	int **array = new int*[rows];   //jagged array

// 	for (int i = 0; i < rows; i++)
// 	{
// 		cout << "Enter no. of cols in row " << i << ": " << endl;
// 		cin >> cols[i];
// 		array[i] = new int[cols[i]];
// 	}
// 	//Input values in array
// 	for (int i = 0; i < rows; i++)
// 	{
// 		for (int j = 0; j < cols[i]; j++)
// 		{
// 			cout << "Row " << i << ":- Enter value " << i*cols[i] + j << ": " << endl;
// 			cin >> array[i][j];
// 		}
// 	}
// 	//Output values of array
// 	for (int i = 0; i < rows; i++)
// 	{
// 		for (int j = 0; j < cols[i]; j++)
// 		{
// 			cout << array[i][j] << " ";
// 		}
// 		cout << "\n";
// 	}
// }
