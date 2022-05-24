// 628. Maximum Product of Three Numbers

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        return max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
    }
};

// Input: nums = [1,2,3]
// Output: 6

// Input: nums = [1,2,3,4]
// Output: 24
