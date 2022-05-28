// 7. Reverse Integer

// Explaination: for this program, I think many has done this in c programing where division (a/b) is the quotient and modulus (a%b) gives reminder. 
//     where lets say i be a number 1437, the process goes like j and k, 
// with 
// j= 7 while k =143
//     j=73 while k =14
//         j=734 while k=1
//             j=7341 then this the reversed number we need so return j
    

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
