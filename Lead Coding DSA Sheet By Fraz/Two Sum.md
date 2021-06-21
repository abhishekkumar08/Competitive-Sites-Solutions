**Ques Name:** Two Sum

**Source:** Leetcode

**Link:** https://leetcode.com/problems/two-sum/

**Ques:** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

**Explanation:** We have given an array where we have to find two nos whose sum is equal to the given target and return their indices. And it is given that there is an exactly one solution. So a brute force approach would be to use two loops to find the nos. For the first loop we would set a no `int i=0;` to search from the start of the array to one less of the ending(n-1); and for the next loop we would move through the array to find the required no. to get the target sum. and if found we would break from the loop and return their indices.

For the efficient approach, we can use a HashMap. In the Hashmap we would find the required element that is `target-nums[i]` and if that element is not there we would store the element in the map as array element as value and its index as key. If found we would return the indices (see the code).

**Time Complexity:** Brute Force: O(n^2) Efficient: O(n)

**Space Complexity:** Brute Force: O(1) Efficient: O(n)

**Code for the efficient approach:**

```c++
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
```

**With ❤ By Abhishek**
