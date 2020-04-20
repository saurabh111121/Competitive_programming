// question at the bottom 
// https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3304/
// solution =>   https://www.youtube.com/watch?v=84a8fQp5hJA

/*  as the complexity has to be O(log n) that means using binary search but sorting has to be done by dividing the array into 2 parts */ 

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n = nums.size();
       if(n==0){
           return -1;
       }   
       int low = 0,high =n-1;
       int first=nums[0];
       while(low<=high){
           int mid =low + (high - low)/2;
           int value = nums[mid];
           if(value == target){
               return mid;   
           }
           bool am_big = value >= first;
           bool target_big = target >= first;
           
           if(am_big == target_big){
               if( value < target){
                   low = mid + 1;
               }
               else{  high = mid -1;}    
           }
           
           else
           {
               if(am_big){low = mid + 1;}
               else{high = mid - 1;  }
           }
           
       }
       return -1;

    }
};

//  OR 

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;
        
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        
        while (i <= j) {
            printf("i, j = %d, %d\n", i, j);
            int mid = i + (j - i) / 2;
            
            if (nums[mid] == target) {
                return mid;
            }
            
            if (nums[i] <= nums[mid]) {
                // left half is sorted
                if (nums[i] <= target && target < nums[mid]) {
                    j = mid - 1;
                } else {
                    i = mid + 1;
                }
            } else {
                // right half is sorted
                if (nums[mid] < target && target <= nums[j]) {
                    i = mid + 1;
                } else {
                    j = mid - 1;
                }
            }
        }
        return -1;
    }
};


/* 

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

*/ 
