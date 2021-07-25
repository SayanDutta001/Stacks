// I/P :  4 5 2 10 8
// O/P : -1 4 -1 2 2

#include<bits/stdc++.h>
using namespace std;

void previousSmallerElement(int *arr, int n){
	stack<int> smallest;
	for(int i=0;i<n;i++){
		while(!smallest.empty() and smallest.top()>arr[i]) 
			smallest.pop();
		(!smallest.empty() and arr[i] > smallest.top())?cout<<smallest.top()<<" ":cout<<-1<<" ";
		smallest.push(arr[i]);
	}
	return;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	previousSmallerElement(arr,n);
	return 0;
}
