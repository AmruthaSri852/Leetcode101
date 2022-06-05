// 844. Backspace String Compare

class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        int a = s.length();
        int b = t.length();
        
        if(a == 0 and b == 0) 
            return 1;
        
        int a1 = 0, b1 = 0;
        
        for(int i = 0; i < a; i++)
        {
            if(s[i] == '#')
                {
                    a1--;
                    a1 = max(0, a1);
                }
            else 
                {
                    s[a1] = s[i];
                    a1++;
                }
        }
        
        for(int i = 0; i < b; i++)
        {
            if(t[i] == '#')
                {
                    b1--;
                    b1 = max(0, b1);
                }
            else 
                {
                    t[b1] = t[i];
                    b1++;
                }
        }
        
        if(a1 != b1) 
            return 0;
        
        for(int i = 0; i < a1; i++)
            {
                if(t[i] != s[i]) 
                    return 0;
            }
        return 1;
    }
};

// Input: s = "ab#c", t = "ad#c"
// Output: true

// Input: s = "ab##", t = "c#d#"
// Output: true

// Input: s = "a#c", t = "b"
// Output: false
