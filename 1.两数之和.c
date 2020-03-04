/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //暴力解法
    int i1,i2 ,*newnums;
    newnums = (int *)malloc(sizeof(int)*2);
    * returnSize = 0;
    for (i1 = 0;i1 < numsSize;i1++)
    {
        for (i2 = i1 + 1;i2 < numsSize;i2++)
        {
            if (nums[i1]+nums[i2] == target)
            {
                newnums[0] = i1;
                newnums[1] = i2; 
                * returnSize = 2;
                return newnums;
            }
        }
    }
    return newnums;
}


// @lc code=end

