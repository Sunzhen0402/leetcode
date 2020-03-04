/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    int i1,i2;
    for(i1=0;i1<numsSize;i1++)
    {
        if(nums[i1]==val)
        {
            numsSize--;
            for(i2=i1;i2<numsSize;i2++)
            {
                nums[i2] = nums[i2+1];
            }
            i1--;
        }
    }
    return numsSize;
}


// @lc code=end

