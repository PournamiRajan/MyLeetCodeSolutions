/**
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
**/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> result;
        int i, x;
        
        for (i = 0; i < nums.size(); i++)
        {
            x = target - nums[i];
            if (map.count(x) > 0 && map[x] != i)
            {
                result.push_back(map[x]);
                result.push_back(i);
                break;
            }
            map[nums[i]] = i;   
        }
        return result;
    }
};
