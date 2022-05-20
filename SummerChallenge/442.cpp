//442. Find All Duplicates in an Array

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result; //result type is a vector
        for(int n:nums){
            n=abs(n);
            if (nums[n-1]>0) nums[n-1]*=-1;
            else result.push_back(n);
        }
        return result;
    }
};

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]

// Input: nums = [1,1,2]
// Output: [1]

// Input: nums = [1]
// Output: []
