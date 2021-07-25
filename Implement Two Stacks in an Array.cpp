#include<bits/stdc++.h>
using namespace std;

class twoStacks{
private:
	int *arr;
	int top1;
	int top2;
	int size1;
	int size2;
	int cap;
public:
	twoStacks(int n){
	arr = new int[n];
	top1 = -1;
	top2 = n;
	cap = n;
	size1=size2=0;
	}

	int peek1(){
		if(top1 == -1){
			cout<<"Stack1 is Empty: ";
			return -1;
		}
		return arr[top1];
	} 

	int peek2(){
		if(top2==cap){
			cout<<"Stack2 is Empty: ";
			return -1;
		}
		return arr[top2];
	}

	void push1(int x){
		if(top1 < top2-1){
			arr[++top1] = x;
			++size1;
		}
		else
		{
			cout<<"Stack1 Overflow"<<endl;
		}
		return;
	}

	void push2(int x){
		if(top1 < top2-1){
			arr[--top2] = x;
			++size2;
		}
		else
		{
			cout<<"Stack2 Overflow"<<endl;
		}
		return;
	}

	void pop1(){
		if(top1 == -1){
			cout<<"Stack1 Underflow"<<endl;
		}
		else{
			--size1;
			--top1;
		}
	}

	void pop2(){
		if(top2==cap){
			cout<<"Stack2 Underflow"<<endl;
		}
		else{
			++top2;
			++size2;
		}
	}

	int length1(){
		return size1;
	}

	int length2(){
		return size2;
	}

	bool isEmpty1(){
		return (size1 == 0);	
	}

	bool isEmpty2(){
		return (size2 == 0);
	}

};
int main(){
	int n;
	cin>>n;
	twoStacks myStack = twoStacks(n);

	myStack.pop1();
	myStack.pop2();

	myStack.push1(1);
	myStack.push1(2);
	myStack.push1(3);
	myStack.push1(4);
	cout<<"Size of stack1: "<<myStack.length1()<<endl;
	(myStack.isEmpty1()) ? cout<< ("Stack1 Empty")<<endl: cout<< ("Stack1 Filled")<<endl;

	cout<<"Elements of Stack1: "<<endl;
	while(!myStack.isEmpty1())
	{
		cout<<myStack.peek1()<<" ";
		myStack.pop1();
	} 
	cout<<endl;
	cout<<"Size of Stack1: "<<myStack.length1()<<endl;
	(myStack.isEmpty1()) ? cout<< ("Stack1 Empty")<<endl: cout<< ("Stack1 Filled")<<endl;

	myStack.push1(1);
	myStack.push1(2);
	myStack.push1(3);
	myStack.push1(4);
	myStack.push2(4);
	myStack.push2(3);
	myStack.push2(2);
	myStack.push2(1);

	cout<<"Size of Stack1: "<<myStack.length1()<<endl;
	cout<<"Size of Stack2: "<<myStack.length2()<<endl;

	myStack.push2(5);
	return 0;
}
