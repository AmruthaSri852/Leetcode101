// 1492. The kth Factor of n 

class Solution {
public:
        int kthFactor(int n, int k) 
        {
            vector< int >vec;
                for(int i=1;i<=sqrt(n);i++)
                {
                    if(n%i==0)
                    {
                         vec.push_back(i);
                         if((n/i)!=i)vec.push_back(n/i);
                    }
                }
             
            sort(vec.begin(),vec.end());
                
            if(vec.size()<k)return -1;
                else return vec[k-1];
        }
    };

// Input: n = 12, k = 3
// Output: 3
    
// Input: n = 7, k = 2
// Output: 7
    
// Input: n = 4, k = 4
// Output: -1
