// 733. Flood Fill

class Solution {
public:
  void helper(int i, int j, vector<vector<int>> &image, int oldColor, int newColor, int n, int m)
    {

        if(i < 0 || j < 0 || i == n || j == m || image[i][j] != oldColor) return;

        image[i][j] = newColor;

        helper(i+1,j,image,oldColor,newColor,n,m);
        helper(i-1,j,image,oldColor,newColor,n,m);
        helper(i,j+1,image,oldColor,newColor,n,m);
        helper(i,j-1,image,oldColor,newColor,n,m);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        
            int oldColor = image[sr][sc];
        int m = image[0].size();
        int n= image.size();

        if(oldColor == newColor) return image;
        helper(sr,sc,image,oldColor,newColor,n,m);
        return image;
    }
};

// Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
// Output: [[2,2,2],[2,2,0],[2,0,1]]

// Input: image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, color = 0
// Output: [[0,0,0],[0,0,0]]
