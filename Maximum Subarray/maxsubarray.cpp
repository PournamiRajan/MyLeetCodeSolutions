/**
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
**/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int runsum = 0, maxsum = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            runsum += nums[i];
            if (nums[i] > runsum)
                runsum = nums[i];
            if (runsum > maxsum)
                maxsum = runsum;
        }
        return maxsum;
    }
};
