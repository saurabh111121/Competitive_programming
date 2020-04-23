/* Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.*/

// Kadane’s algorithm
// Dynamic Programming 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int a = 0;
        for(int x : nums) {
	    ans = max(ans, a + x);
            a = max(0, a + x);
            /*a += x;
            ans = max(ans, a);
            a = max(a, 0); */
        }
        return ans;
    }
};

/* https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/ */

 // normal version with O(n) complexity
/*
#include<iostream>
using namespace std ;

int fun(int a[],int n){
    
    int max_ending_here=0;
    int max_so_far = 0 ;
    for(int i=0;i<n;i++){
        max_ending_here = max_ending_here + a[i];
        if(max_ending_here < 0)
            max_ending_here = 0;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main(){
    int array[] = {-2,1,-3,4,-1,2,1,-5,4}; 
    int size = sizeof(array)/sizeof(array[0]);
    int ans = fun(array,size);
    cout << ans;
}
*/
