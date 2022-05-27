// 7. Reverse Integer

class Solution {
public:
    int reverse(int x) {
        if(x == INT_MIN) return 0;
        long a = x< 0 ? -1*x : x;
        long b = 0;
        
        while(a > 0){
            b = b *10 + a%10;
            if(b > INT_MAX) return 0;
            a/=10;
        }
        if(x<0){
            b=-1*b;
        }
        return b;
    }
};

// Input: x = 123
// Output: 321

// Input: x = -123
// Output: -321

// Input: x = 120
// Output: 21
