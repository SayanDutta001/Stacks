#include<bits/stdc++.h>
using namespace std;

template<typename T> // Generic Stack using Template class
class Stack{

private: // abstraction to hide the array from direct access
	T *arr;
	int top;
	int size;

public:
	Stack(int n){
		arr = new T[n];
		top = -1;
		size =n;
		return;
	}
	
  // to check if the stack is empty
	bool isEmpty()
	{
		return (top == -1);
	}
	
  // to check the top most element present in the stack
	int peek(){
		if(top == -1){
			cout<<"Stack is empty!!!"<<endl;
			return -1;
		}
		return arr[top];
	}

  // to return the size of the stack
  int length(){
    return top+1;
  }
  
	// to add an element into the stack
	void push(int x){
		if(top == size - 1){
			cout<<"Stack Overflow!!!"<<endl;
			return;
		}
		arr[++top] = x;
	}

	// to remove an element from the stack
	void pop(){
		if(top == -1){
			cout<<"Stack Underflow!!!"<<endl;
			return;
		}
		top--;
	}
};

int main()
{    
	int size;
	cout<<"Enter the size of the stack: ";
	cin>>size;
	cout<<endl;

	Stack <int> mystack(size); // stack created  

  string s = (mystack.isEmpty())? "Empty" : "Not Empty";
	cout<<s<<endl; // to check if string is empty
	
	mystack.push(0); // to add 0 into the stack
	mystack.push(1); // to add 1 into the stack
	mystack.push(2); // to add 2 into the stack 
	cout<<mystack.peek()<<endl; // to check the top most element of the stack
  cout<<mystack.length()<<endl; // size of the stack

	mystack.push(3); // to add 3 into the stack
	mystack.pop(); // to remove the top most element of the stack
	cout<<mystack.peek()<<endl; // to check the top most element of the stack
	
	mystack.push(4); // to add 2 into the stack 
	cout<<mystack.peek()<<endl; // to check the top most element of the stack

	return 0;
}
