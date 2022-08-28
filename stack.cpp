#include <bits/stdc++.h>

using namespace std;

// class Stack{
// public:			//properties
// 	int *arr;
// 	int top;
// 	int size;

// Stack(int size){
// 	this -> size = size;
// 	arr = new int[size];
// 	top = -1;
// }

// void push(int element){
// 	//Check whether there is any empty space is avalaible or not
// 	if(size - top > 1){
// 		top++;
// 		arr[top] = element;
// 	}
// 	//If there no space avalaible then print Stack overflow
// 	else{
// 		cout << "Stack overflow" << endl;
// 	}
// }

// void pop(){
// 	//Check whether element is present or not then pop it
// 	if(top >= 0){
// 		top--;
// 	}
// 	else{
// 		cout << "Stack Underflow" << endl;
// 	}
// }

// int peek(){
// 	//Check whether top is in valid range otherwise print stack is empty
// 	if(top >= 0)
// 		return arr[top];
// 	else{
// 		cout << "Stack is empty" << endl;
// 		return -1;
// 	}
// }

// bool isEmpty(){
// 	//if top == -1 then stack is empty
// 	if(top == -1){
// 		return true;
// 	}
// 	else{
// 		return false;
// 	}
// }
// };

int main(){
// Stack using STL	
	// stack<int> s; 	//creation of stack

	// s.push(5); 	//push operation
	// s.push(10);

	// s.pop(); 	//pop operation

	// cout << "Printing top element: " << s.top() << endl;

	// if(s.empty()){
	// 	cout << "stack is empty" << endl;
	// }
	// else{
	// 	cout << "stack is not empty" << endl;
	// }

	// cout << "Size of stack is: " << s.size() << endl;

//Implementing stack using arrays
	// Stack stk(5);

	// stk.push(5);
	// stk.push(15);
	// stk.push(25);
	// stk.push(35);
	// stk.push(45);

	// cout << stk.peek() << endl;

	// stk.pop();

	// cout << stk.peek() << endl;stk.push(5);

	// if (stk.isEmpty())
	// {
	// 	cout << "Stack is empty...." << endl;
	// }
	// else{
	// 	cout << "Stack is not empty.." << endl;
	// }

//Q. Reverse a string using Stack
	string str = "atharv";

	stack<char> s;

	for(int i=0; i<str.length(); i++){
		char ch = str[i];
		s.push(ch);
	}

	string ans = "";

	while(!s.empty()){
		char ch = s.top();
		ans.push_back(ch);

		s.pop();
	}

	cout << "answer is: " << ans << endl;

//Time compleity: O(N)
//Space compleity: O(N)	
//We can use stack to reverse a string but this in not the best solution because here Space complexity is O(N) 
}