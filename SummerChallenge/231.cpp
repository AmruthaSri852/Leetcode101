// 231. Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
       long t=1;
        while(t<n)
        {
            t*=2;
        }
        return t==n;
    }
};

// Input: n = 1
// Output: true
    
// Input: n = 16
// Output: true
    
// Input: n = 3
// Output: false
