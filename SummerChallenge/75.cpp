//75. Sort Colors

class Solution {
public:
    
    void sortColors(vector<int>& nums) 
        {
            // 0 red 1 white 2 blue 
        
            int i = 0, j = 0, k = nums.size() - 1;
        
                while(j <= k)
                    
                {
                        switch(nums[j])
                            
                        {
                                case 0: swap(nums[i++], nums[j++]); 
                                    break;

                                case 1: j++; 
                                    break;

                                case 2: swap(nums[j], nums[k--]); 
                                    break;
                        }
                }
        }
};

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

// Input: nums = [2,0,1]
// Output: [0,1,2]

// Input: nums = [1,1,0,1,0,1]
// Output: [0,0,1,1,1,1]
