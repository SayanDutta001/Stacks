#include<bits/stdc++.h>
using namespace std;

template<typename T> // Generic Stack using Template class
class Stack{

private: // abstraction to hide the array from direct access
	vector<T> v;

public:
	// to check if stack is Empty
	bool isEmpty()
	{
		return v.empty();
	}
	
	// returns last element of stack
	T peek(){
		return v.back();
	}

	// to add an element into the stack
	void push(T x){
		v.push_back(x);
	}

	// to remove an element from the stack
	T pop(){
		T res = v.back();
		v.pop_back();
		return res;
	}

	int length()
	{
		return v.size();
	}
};

int main()
{
  Stack <int>mystack;
	mystack.push(10);
	mystack.push(15);
	mystack.push(20);
	cout<<mystack.peek()<<endl;
	cout<<mystack.length()<<endl;

	cout<<mystack.isEmpty()<<endl;

	cout<<mystack.pop()<<endl;
	cout<<mystack.pop()<<endl;
	cout<<mystack.length()<<endl;

	return 0;
}
