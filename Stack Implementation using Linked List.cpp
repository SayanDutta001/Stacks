#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
	node(int x)
	{
		data = x;
		next = NULL;
	}
};

class Stack{
private: 
	node *head;
	int top;
	int size;
public:
	Stack(int n)
	{
		top=0;
		size=n;
	}
	bool isEmpty()
	{
		return (head == NULL);
	}

	void push(int x)
	{
		if(top == size){
			cout<<"Stack Overflow"<<endl;
			return;
		}
		node *newNode = new node(x);
		if(head == NULL){
			head=newNode;
			top++;
			return;
		}
		newNode->next = head;
		head = newNode;
		top++;
	}
	void pop()
	{
		if(head==NULL)
			cout<<"Stack is empty"<<endl;
		node *temp=head;
		head = head->next;
		temp->next =NULL;
		delete(temp);
		top--;
	}

	int peek()
	{
		if(top == 0)
		{
			cout<<"Stack Underflow"<<endl;
			return -1;
		}
		return (head->data);
	}

	int length()
	{
		return top;
	}
};

int main()
{

    int n;
    cin>>n;
	Stack mystack = Stack(n);
	mystack.push(10);
	mystack.push(15);
	mystack.push(20);
	cout<<mystack.peek()<<endl;
	cout<<mystack.length()<<endl;

	cout<<mystack.isEmpty()<<endl;

	mystack.pop();
	mystack.pop();
	cout<<mystack.peek()<<endl;
	cout<<mystack.length()<<endl;
	mystack.pop();
	cout<<mystack.peek()<<endl;

	mystack.push(10);
	mystack.push(20);
	mystack.push(30);
	mystack.push(40);
	mystack.push(50);
	mystack.push(60);
	cout<<mystack.length()<<endl;
	mystack.push(70);
	return 0;
}
