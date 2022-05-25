// 168.Excel Sheet Column Title

class Solution {
public:
    string convertToTitle(int columnNumber)
    {
        string ans = "";
        while (columnNumber)
        {
            char I ='A'+(columnNumber-1)%26;
            ans = I + ans;
            columnNumber=(columnNumber-1)/26;  
        }
        
        return ans;
    }
};

// Input: columnNumber = 1
// Output: "A"
    
// Input: columnNumber = 28
// Output: "AB"

// Input: columnNumber = 701
// Output: "ZY"
