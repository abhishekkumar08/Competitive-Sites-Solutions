class Solution
{
public:
    void reverse(vector<int> &arr, int start, int end)
    {
        while (start < end)
        {
            swap(arr[start++], arr[end--]);
        }
    }

    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        if (nums.size() > 1)
        {
            reverse(nums, 0, nums.size() - 1);
            reverse(nums, 0, k - 1);
            reverse(nums, k, nums.size() - 1);
        }
    }
};

// By observation, the array is to be rotated by k times. so if we first reverse the whole array and then reverse the first k elements and then reverse the last n-k elements. then we get the desired result.