#include<bits/stdc++.h>

/*Queue is a data structure which follows First in First out order
STL for Queue :
for creating an queue --> queue<int> q;
for pushing an element -->  q.push()
for pop operaton --> q.pop()
for getting size of the queue --> q.size()
for chexking whether queue is empty or not --> q.empty()
for finding front element in the queue --> q.front()
*/
using namespace std;

int main(){
	// queue <int> q;

	// q.push(10);
	// q.push(15);
	// q.push(20);
	// q.push(25);

	// cout << "Size of queue is : " << q.size() << endl;

	// q.pop();

	// cout << "Size of queue is : " << q.size() << endl; 

	// if(q.empty()){
	// 	cout << "Queue is empty " << endl;
	// }
	// else{
	// 	cout << "Queue is not empty" << endl;
	// }
 
 //Doubly ended queue using STL
	deque<int> d;

	d.push_front(15);
	d.push_back(20);

	cout << d.front() << endl;
	cout << d.back() << endl;

	d.pop_front();

	cout << d.front() << endl;
	cout << d.back() << endl;

	d.pop_back();

	if(d.empty()){
		cout << "Queue is empty" << endl;
	}
	else{
		cout << "Queue is not empty" << endl;
	}
} 