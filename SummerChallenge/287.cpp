//287. Find the Duplicate Number

class Solution {
public:
    
    int findDuplicate(vector<int>& nums) {
        
        int i;
        int slow = 1; 
        int fast = nums.size()-1;
        
        while(slow<=fast)
        {
            int j = slow + (fast - slow) / 2;
            i = 0;   // i number less than equal to j
            for(int n : nums)
            {
                if(n <= j)
                    ++i;
            }
            // binary search on left
            if(i <= j)
                slow = j + 1;
            else
            // binary search on right
                fast = j - 1;
        }
        return slow;
    }
};

// Input nums = [1,3,4,2,2]
// Output 2

// Input nums = [3,1,3,4,2]
// Output 3

// Input nums = [3,1,5,4,2]
// Invalid Testcase Input must contain of values from 1 to 4 only 

// Input nums = [3,1,3,1,4,2]
// Invalid Input array
