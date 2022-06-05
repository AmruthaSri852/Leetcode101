// 150. Evaluate Reverse Polish Notation

class Solution {
public:
    int evalRPN(vector<string>& t) 
    {
        stack<int> s;
        int i=0,l,r;
        while(i<t.size())
        {
            if(t[i]!="+"&&t[i]!="-"&&t[i]!="*"&&t[i]!="/")
                s.push(stoi(t[i]));
            else
            {
                r=s.top();
                s.pop();
                l=s.top();
                s.pop();
                
                if(t[i]=="+") s.push(l+r);
                else if(t[i]=="-") s.push(l-r);
                else if(t[i]=="*") s.push(l*r);
                else if(t[i]=="/") s.push(l/r);
            }
            
            i++;
        }
        
        return s.top();
    }
};

// Input: tokens = ["2","1","+","3","*"]
// Output: 9

// Input: tokens = ["4","13","5","/","+"]
// Output: 6

// Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
// Output: 22
