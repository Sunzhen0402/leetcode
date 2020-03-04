/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start


int searchInsert(int* nums, int numsSize, int target){
    int i1,i2;
    for(i1=0;i1<numsSize;i1++)
    {
        if(nums[i1]>=target)
        {
            return i1;
        }
    }
    return i1;
}


// @lc code=end

