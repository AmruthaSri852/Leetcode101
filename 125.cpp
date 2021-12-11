class Solution {
public:
    
    bool isPalindrome(string s) {  
    int n = 0, h = s.length() - 1;
    
    for(int i=0;i<=h;i++)
        s[i]=tolower(s[i]);
    
        while(n<=h){
            
        if(!((s[n]>='a' && s[n]<='z') || (s[n]>='0' && s[n]<='9'))) 
        { n++;}
        else if(!((s[h]>='a' && s[h]<='z') || (s[h]>='0' && s[h]<='9'))) 
        {h--;}
        else if(s[n]==s[h]) 
        {n++; h--;}
        else
            return 0;
                    }
    
 return 1;
}

    
};
