//14. Longest Common Prefix

// Explanation: So here the input will be given as 3 strings and we have to 
// find the longest common prefix.i.e. the longest flow of characters in the string 

// like the example 
// flower 
// flow 
// flight

// output should be fl 

// so we have to check all 3 string simultaneously and if any one in 3 string 
// is not matching we have to return till there. and this is also like the substring
// problem (haystrack and the needle)

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) 
    {
        if (str.size()==0)
          {
              return ""; //if the character dont match then return null. for reference have a look at example 2
          } 
        else 
        {
            string pfx = str[0]; 
            int size = str.size();
            for (int i = 1; i < size; I++) 
            {
                for (int j = 0; j < pfx.size(); j++) 
                {
                    if (j == str[i].size() || pfx[j] != str[i][j]) 
                    {
                        pfx = pfx.substr(0, j);
                        break;
                    }
                }
            }
           return pfx; 
       }
    }
};


