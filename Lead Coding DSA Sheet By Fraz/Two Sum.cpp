// Ques Name: Two Sum
// Source: Leetcode
// Link: https://leetcode.com/problems/two-sum/

// Ques: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> arr;
        for(int i=0;i<nums.size();i++)
        {
            if(arr.find(target-nums[i])!=arr.end())
               return {i, arr[target-nums[i]]};
            else
               arr[nums[i]]=i;
        }
        return {0, 0};
    }
};
