/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
    int i1,i2;
    for(i1 = 1;i1 < numsSize; i1++)
    {
        if(nums[i1]==nums[i1-1])
        {
            numsSize--;
            for(i2 = i1;i2<numsSize;i2++)
            {
                nums[i2] = nums[i2+1];
            }
            i1--;
        }
    }
    return numsSize;
}


// @lc code=end

