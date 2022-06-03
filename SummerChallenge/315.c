// 315. Count of Smaller Numbers After Self


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* countSmaller(int* nums, int numsSize, int* returnSize){
    
    int* a=malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;
    int count;
    int i,j;
       
    for(i=0;i<numsSize;++i)
    {
        count=0;
        for( j=i+1;j<numsSize;++j)
        {
            if(nums[j]<nums[i])
            {
                count++;
            }
            
        }
          a[i]=count;  
    }
    return a;
}

// Input: nums = [5,2,6,1]
// Output: [2,1,1,0]

// Input: nums = [-1]
// Output: [0]

// Input: nums = [-1,-1]
// Output: [0,0]
