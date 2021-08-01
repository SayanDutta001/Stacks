#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int lo,int mid,int high)
{
	int count = 0; // to count number of inversions
	
  int n1 = mid - lo + 1; // size of the left array
	int n2 = high - mid; // size of the right array
	
  int a1[n1],a2[n2]; // left array, right array
  
	for(int i = 0; i< n1;i++) a1[i] = arr[i+lo]; // insertion of elements in the left array
	for(int j=0;j<n2;j++)     a2[j] = arr[j+mid+1]; // insertion of elements in the right array

	int i = 0,j = 0,k = lo; // i -> pointer to the left array, j -> pointer to the right array, k -> pointer to index of orig_array

	while(i<n1 and j< n2)
	{
		if(a1[i]<=a2[j]) arr[k++] = a1[i++]; // if current element of left array is less than the current element of right array then 
                                         // insert the element to kth index of orig_array
		
    else count += (n1-i), arr[k++] = a2[j++]; // else increment the count_inv and then insert the current element of right array to 
                                              //the kth index of orig_array
	}
  
  // insert the remaining elements of the non exhausted array to the orig_array since any one of the two arrays may get over before 
  // the other one
  
	while(i<n1) arr[k++] = a1[i++]; 
	while(j<n2) arr[k++] = a2[j++];
  
	return count;
}

int mergeSort(int arr[],int lo, int hi)
{
	if(lo>=hi)
		return 0;
	int mid = lo + (hi - lo)/2;
	int left = mergeSort(arr,lo,mid);
	int right = mergeSort(arr,mid+1,hi);
	return left + right + merge(arr,lo,mid,hi);
}

int main()
{   
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<mergeSort(arr,0,n-1)<<"\n";
	cout<<mergeSort(arr,0,n-1)<<"\n";
	return 0;
}
