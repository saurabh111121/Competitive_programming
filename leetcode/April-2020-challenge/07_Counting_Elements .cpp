count elements x such that there exists some other element different by at most K
K=4
    
    5 8 8 8 8 8 8 13 14 14 ...

/* 
Given an integer array arr, count element x such that x + 1 is also in arr.

If there're duplicates in arr, count them seperately.

 

Example 1:

Input: arr = [1,2,3]
Output: 2
Explanation: 1 and 2 are counted cause 2 and 3 are in arr.
Example 2:

Input: arr = [1,1,3,3,5,5,7,7]
Output: 0
Explanation: No numbers are counted, cause there's no 2, 4, 6, or 8 in arr.
Example 3:

Input: arr = [1,3,2,3,5,0]
Output: 3
Explanation: 0, 1 and 2 are counted cause 1, 2 and 3 are in arr.
Example 4:

Input: arr = [1,1,2,2]
Output: 2
Explanation: Two 1s are counted cause 2 is in arr.
 

Constraints:

1 <= arr.length <= 1000
0 <= arr[i] <= 1000

   Hide Hint #1  
Use hashset to store all elements.

Hide Hint #2  
Loop again to count all valid elements.

*/

class Solution {
public:
    int countElements(vector<int>& arr, int K) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int prv = -INF, prv_cnt = 0;
        int before_me_value = -INF;
        for(int i = 0; i < n; ++i) {
            if(i == n - 1 || arr[i] != arr[i+1]) {
                if((i!=n-1 && arr[i+1] <= arr[i] + K) || before_me_value >= arr[i]-K) {
                    answer += prv_cnt;
                }
            }
            if(arr[i] == prv) {
                prv_cnt++;
            }
            else {
                before_me_value = prv;
                prv = arr[i];
                prv_cnt = 1;
            }
        }
        return answer;
        
        /* unordered_set<int> s;
        for(int x : arr) {
            s.insert(x);
        }
        int cnt = 0;
        for(int x : arr) {
            if(s.count(x+1) == 1) {
                cnt++;
            }
        }
        return cnt;
        */
    }
};
