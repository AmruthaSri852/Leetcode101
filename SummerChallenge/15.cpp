//15. 3Sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++)
        {
            int src=0-nums[i];
            int  left=i+1, right=n-1;
            while(left<right)
            {
                if(src<nums[left]+nums[right]) right--;
                else if(src>nums[left]+nums[right]) left++;
                else
                {
                    vector<int>temp(3, 0);
                    temp[0]=nums[i];
                    temp[1]=nums[left];
                    temp[2]=nums[right];
                    ans.push_back(temp);
                    while(left<n-1 and temp[1]==nums[left]) left++;
                    while(right>1 and temp[2]==nums[right]) right--;
                }
            }
            while(i+1<n-2 and nums[i]==nums[i+1]) i++;
        }
        return ans;  
    }
};
