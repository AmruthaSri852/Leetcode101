// 33. Search in Rotated Sorted Array

int search(int* nums, int numsSize, int target)
{
    int a=0,b=numsSize-1,mid;
    while(a<=b)
    {
        mid=(a+b)/2;
        if(target==nums[mid])
            {
                return mid;
            }
        if(nums[a]<=nums[mid])
            {
                if(target>=nums[a]&&target<=nums[mid])
                    {
                        b=mid-1;
                    }
                else{a=mid+1;}
            }
        else
            {
                if(target>=nums[mid]&&target<=nums[b])
                {
                    a=mid+1;
                }
                else{b=mid-1;}
            }
    }
    return -1; 
}

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

// Input: nums = [1], target = 0
// Output: -1
