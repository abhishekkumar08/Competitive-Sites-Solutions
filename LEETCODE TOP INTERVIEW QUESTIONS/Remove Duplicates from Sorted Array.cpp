class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        int count = 1, i = 0, j = 1;
        for (; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                nums[++i] = nums[j];
                count++;
            }
        }
        return count;
    }
};

// The naive approach would be to store the array in a hashset and then copy the elements back to the original array. The time complexity of this approach would be O(nlogn). O(n) for traversing the array and O(logn) for storing in hashset and space complexity would be O(n).

// Technique 2: Two pointers approach - The idea is to use two pointers to traverse the array. The first pointer starts from the beginning and the second pointer starts from the second element.The first pointer will be incremented only when the second pointer finds a different element. The time complexity of this approach would be O(n). Space complexity would be O(1).