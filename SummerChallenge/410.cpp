// 410. Split Array Largest Sum

class Solution {
public:
    int splitArray(vector<int>& nums, int m) 
    {
        int low=0;
        int high=0;
        for(int i=0;i<nums.size();i++)
            {
                low=max(low,nums[i]);
                high+=nums[i];
            } 
        
        int ans=0;
        
        while(low<=high)
            {
                int mid=low+(high-low)/2;
                int subarraySum=0;
                int subarrayCount=1;
                for(int i=0; i<nums.size();i++)
                    {
                        subarraySum+=nums[i];

                        if(subarraySum>mid)
                            {
                                subarrayCount++;
                                subarraySum=nums[i];
                            }
                    }
                if(subarrayCount<=m)
                    {
                        ans=mid;
                        high=mid-1;
                    } 
                else  {low=mid+1;}
            
            }
        return ans;
    }
};

// Input: nums = [7,2,5,10,8], m = 2
// Output: 18
    
// Input: nums = [1,2,3,4,5], m = 2
// Output: 9
    
// Input: nums = [1,4,4], m = 3
// Output: 4
