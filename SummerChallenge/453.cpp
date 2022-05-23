//453. Minimum Moves to Equal Array Elements

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = INT_MAX, res=0;
        
        for (int n: nums) m = min(m,n);
        for (int n: nums) res+=n-m;
        
        return res;
    }
};

// Input: nums = [1,2,3]
// Output: 3
    
// Input: nums = [1,1,1]
// Output: 0
