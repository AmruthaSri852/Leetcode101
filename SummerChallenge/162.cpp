// 162. Find Peak Element 

class Solution {
public:
    
    int findPeakElement(vector<int>& nums) { 
    int i = 0;
    int n = nums.size()-1;
    
    while(i < n){
        int mid = i + (n-i)/2;
        
        if(nums[mid] > nums[mid+1])
            n = mid;
        else
            i = mid + 1;
    }
    return i;
  }
};

// Input: nums = [1,2,3,1]
// Output: 2
    
// Input: nums = [1,2,1,3,5,6,4]
// Output: 5
