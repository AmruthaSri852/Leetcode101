class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int length=nums.size();
        k=k%length;
        vector<int>arr;
        for(int i=nums.size()-k;i<nums.size();i++){
            arr.push_back(nums[i]);
        }
        for (int i=0;i<nums.size()-k;i++)
            arr.push_back(nums[i]);
        nums=arr;
    }
};
