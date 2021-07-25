// Given a positive integer n, find the smallest integer which has exactly the same digits existing in the integer n 
// and is greater in value than n. If no such positive integer exists, return -1.

// I/P : 12
// O/P : 21
// I/P : 21
// O/P : -1
// I/P : 321
// O/P : -1

// Approach :
// Given number n -> possible numbers that are greater than n is less than n!
// n = 123 -> 123 , 132 , 213 , 231 , 312 , 321 -> Possible Answers ->  132 , 213 , 231 , 312 , 321. Next Greater is 132 (Ans.)
// find the first dip in the number 9824321 -> first dip is at position 2
// now find a digit present at the right of the dip that is greater than the dip element and swap the digit with the dip element.
// at last reverse the numbers present before the dip position
#include<bits/stdc++.h>
using namespace std;

int nextGreaterElement(long long int n) {
        
        string s = to_string(n); // typecast the number to string
        int dip_pos = (int)s.length() - 2; // pointer to start from 2nd last position and stop at dip_position
  
        // to find the first dip
        for(;dip_pos>=0;dip_pos--) 
        {
            if(s[dip_pos]<s[dip_pos+1])
                break;
        }
        if(dip_pos<0) // if all the digits are in descending order
            return -1;
        
        int greater = (int)s.length() - 1; // pointer to find an element greater than the dip element
  
        // find just greater then ith index element
        for(;greater>=0;greater--)
        {
            if(s[greater]>s[dip_pos]){
                swap(s[greater],s[dip_pos]); // swap the dip element with greater element
                break;
            }
        }
       	
       	reverse(s.begin()+dip_pos+1,s.end()); // reverse the number from dip_pos+1 to end

        long long int N = stoll(s); // typecast the string to interger back again
        return (N>2147483647)?-1:N;
    }


int main(){
	int n;
	cin>>n;
	cout<<nextGreaterElement(n);
  return 0;
}
