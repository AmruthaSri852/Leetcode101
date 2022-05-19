//974. Subarray Sums Divisible by K

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count = 0, curr = 0;
        unordered_map<int, int> m = {{0, 1}};
        
        for (int i = 0; i < nums.size(); i++) {
            curr = (curr + nums[i] % k + k) % k;
            count += m[curr];
            m[curr]++;
        }
        
        return count;
    }
};

// Input: nums = [4,5,0,-2,-3,1], k = 5
// Output: 7

// Input: nums = [5], k = 9
// Output: 0
