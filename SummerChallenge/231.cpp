// 231. Power of Two

// Explaination:  So, first kindly identify the powers of 2 like 1,2,4,8,16 etc 
// and return true or false if the satisies the case or not satisfies 

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
