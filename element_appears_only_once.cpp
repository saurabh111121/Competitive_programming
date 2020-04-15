/*
Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

link : 
https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3283/
*/


int singleNumber(vector<int>& nums) {
        int x = 0;
        for(int a:nums){
           x^=a;   
        }
        return x;
    }
