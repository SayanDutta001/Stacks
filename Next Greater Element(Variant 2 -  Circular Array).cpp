#include<bits/stdc++.h>
using namespace std;

void nextGreatest(int *arr,int n){
	stack <int> ans; // stack for answer
	stack<int> nge; // stack to compare next greater element
	for(int i= 2*n-1;i>=0;i--) // Circular Array Implementation 
	{
		while(!nge.empty() and arr[i%n] >= nge.top()) // pop stack until ith element is smaller than any element
			nge.pop();                                  // present in stack.
		
		if(i<n) // when i pointer actually enters the array
			if(!nge.empty()) 
				ans.push(nge.top()); // element is pushed inside the ans stack
			else
				ans.push(-1); 
		}
		nge.push(arr[i%n]);
	}

	while(!ans.empty()) // iterate over the stack to print the answer
	{
		cout<<ans.top()<<" ";
		ans.pop();
	}
	return;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	nextGreatest(arr,n);
  return 0;
}
