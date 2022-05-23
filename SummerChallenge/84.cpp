// 84. Largest Rectangle in Histogram - Don't know why it's time limit exceeded

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        int res = 0;
        for (int i = 0; i < heights.size(); i++) 
        {
            if (i + 1 < heights.size() && heights[i] <= heights[i+1]) 
                continue; 
            
            int min_height = heights[i];
            
            for (int j = i; j >= 0; j--) 
            {
                min_height = min(min_height, heights[j]);
                res = max(res, min_height * (i - j + 1));
            }
        }
        return res;
    }
};

// Input: heights = [2,1,5,6,2,3]
// Output: 10
    
// Input: heights = [2,4]
// Output: 4
