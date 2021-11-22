class Solution {
public:
    void sortColors(vector<int>& nums) {
        int swapC=0;
        for(int i=0;i<nums.size()-1;i++){
            swapC=0;
            for(int j=0;j<nums.size()-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                    swapC=1;
                }
            }
            if(swapC==0)
                break;
        }
    }
};

// we could use any inplace sorting algo here, like here we used bubble sort. Time complexity is O(n^2), Space complexity is O(1). A more efficient approach is to use counting sort. Time complexity is O(n) and Space complexity is O(1). In counting sort we will count the no of time the values 0, 1, 2 are occuring in the array. We will then place the values in the array in the right order. This will require to two pass the array. 


class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0, mid=0, high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0)
                swap(nums[low++],nums[mid++]);
            else if(nums[mid]==1)
                mid++;
            else if(nums[mid]==2)
                swap(nums[mid], nums[high--]);
        }
    }
};
// For a single pass we will use Dutch National Flag Algorithm. Time complexity is O(n) and Space complexity is O(1). In this we will use three pointers low, mid, high. The algo is like this: a[0....low-1] would be for all the 0's and a[high+1 to last] would be for all the 2's. and if we find a 0 we will swap the low and mid point values and increment them. When we would find 1 we will just increase the mid pointer. When we will find 2 we will swap the mid and high pointer values and decrement the high pointer.