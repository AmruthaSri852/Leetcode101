//73. Set Matrix Zeroes

class Solution {
public:
    
void setZeroes(vector<vector<int>>& a) 
    {
        int r=a.size(),c=a[0].size();
        vector <int> ind;
        int l=0,m=0;

        while (l<r)
               
        {
           if (m<c) 
            {
                if (a[l][m]==0) 
                  {
                    ind.push_back(l);
                    ind.push_back(m);
                  }
                    m++;
            }
                else
                  { m=0;l++; }
        }

            int K=ind.size();
                for (int k=0;k<K-1;k+=2)
                {
                    for (int i=ind[k],j=0;j<c;j++)
                        {
                            a[i][j]=0;
                        }
                    for (int i=0,j=ind[k+1];i<r;i++)
                        {
                            a[i][j]=0;
                        }
                }
    }
};

// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

