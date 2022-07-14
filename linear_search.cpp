#include<bits/stdc++.h>

using namespace std;

int search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}
int main(){
	int arr[10]={5,7,-2,10,12,22,0,5,4,22};

	cout<<"Enter the elements to Search for"<<endl;
	int key;
	cin>>key;
	bool found =search(arr,10,key);
	if(found){
		cout<<"Key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;
	}
}