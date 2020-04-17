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
