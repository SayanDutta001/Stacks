// Given an array of distinct elements, find previous greater element for every element. 
// If previous greater element does not exist, print -1. 

// I/P : arr[] = {10, 4, 2, 20, 40, 12, 30}
// O/P : -1, 10, 4, -1, -1, 40, 40
// I/P : arr[] = {10, 20, 30, 40}
// O/P : -1, -1, -1, -1

Input : arr[] = {40, 30, 20, 10}
Output :        -1 40 30 20


#include<bits/stdc++.h>
using namespace std;

void perviousGreaterElement(int *arr, int n){
	stack<int> greater; // stack to store the previous greater element
	for(int i=0;i<n;i++){
		while(!greater.empty() and arr[i]>greater.top()) // if current element is greater than the stack element then pop the stack elements
			greater.pop();                                //  until stack.top() is greater than the current element or the stack becomes empty

		(!greater.empty() and arr[i]<greater.top())? cout<<greater.top()<<" " : cout<<-1<<" "; // if stack is not empty and current element is greater 
                                                                                           // than the stack.top() then output is stack.top()
		greater.push(arr[i]); // push the current element
	}
	return;
}


int main(){
  int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	perviousGreaterElement(arr,n);
  return 0;
}
