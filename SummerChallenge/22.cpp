//22. Generate Parentheses

class Solution {
public:
    vector<string>res;
    
    void peru(int on,int oe,int n,string current) //open (on) close (oe)
        {
            if(current.length()==n*2)
                {
                    res.push_back(current);
                    return;
                }
            if(on<n)  peru(on+1,oe,n,current+"(");
            if(oe<on)  peru(on,oe+1,n,current+")");
        }
    
    vector<string> generateParenthesis(int n) 
        {
            peru(0,0,n,"");
            return res;
        }
     };
    

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]

// Input: n = 1
// Output: ["()"]
