#include<bits/stdc++.h>
using namespace std;

void nextGreatest(int *arr,int n){
    stack<int> nge;
    stack<int>ans;
    for(int i=n-1;i>=0;i--){
        
        while(!nge.empty() and arr[i] >=nge.top())
            nge.pop();
        
        (nge.empty()) ? ans.push(-1): ans.push(nge.top());
        nge.push(*(arr+i));
    }

    while(!ans.empty()){
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
