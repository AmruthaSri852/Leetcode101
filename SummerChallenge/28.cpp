//28. Implement strStr()

//Explanation: Here we have to search for a substring in another string 

// So in this problem we have to search needle in a haystack 

// let's look at the examples given 
// Input: haystack = "hello", needle = "ll"
// Output: 2

// here we have to locate ll in haystack where it's present in the string and what we will be returning is the starting index, as ll starts from 2 we return 2 as output. 
// so here we have to trace the size of the needle and check in haystack 

// simialrly at next example 
// Input: haystack = "aaaaa", needle = "bba"
// Output: -1

// bba is not actually present in the haystack, so we return -1 as the output

// and with the conversion what if the needle is a empty string, what we should return -1 or 0, and we have to return 0 as specified.


class Solution {
public:
    int strStr(string hs, string nl) {  // two strings haystack(hs) needle(nl)
        int i=0;
        while (i<hs.size())
        {
            
            if (hs[i]==nl[0])
            {
                
                if (hs.substr(i,nl.size()) == nl)
                    return i;
            } 
           
            i++;
        }
        
       return -1;
        
    }
    
};
