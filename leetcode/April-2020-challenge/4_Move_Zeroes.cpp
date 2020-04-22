/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int nxt = 0;
        for(int x : nums) {
            if(x != 0) {
                nums[nxt] = x;
                nxt++;
            }
        }
        for(int i = nxt; i < n; i++) {
            nums[i] = 0;
        }   
        //return nums;
    }
};
© 2020 GitHub, In
