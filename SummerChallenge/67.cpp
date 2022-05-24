//67. Add Binary

class Solution {
public:
    string addBinary(string a, string b) {
    string add;
    int carry=0, count = 0, aLength=a.length(), bLength=b.length();    
    while(count < aLength || count < bLength || carry != 0){
        
        int x = 0;
        if(count<aLength&&a[aLength-1-count]=='1') x=1; 
        
        int y = 0;
        if(count<bLength&&b[bLength-1-count]=='1') y=1;
     
        add = to_string((x+y+carry)%2) +add;
        carry = (x+y+carry)/2;
        count++;
        
    }
        return add; 
  }
    //o(n) o(1)
};

// Input: a = "11", b = "1"
// Output: "100"

// Input: a = "1010", b = "1011"
// Output: "10101"
