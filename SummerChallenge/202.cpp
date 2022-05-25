//202. Happy Number

class Solution {
public:
    int findSqr(int n) {
        int a = 0;
        while(n) 
        {
            int x = n%10;
            a += x*x;
            n /= 10;
        }
       return a;
    }
    bool isHappy(int n) {
        int a = 81;
        while(a--) 
        {
            n = findSqr(n);
            if(n == 1) return true;
        }
        return false;
    }
};

// Input: n = 19
// Output: true

// Input: n = 2
// Output: false
