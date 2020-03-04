/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    //双指针：从后往前插，这样可以减少O（m）的空间复杂度来存放nums1的已排序数据
    int a,b,c;
    a = m-1;
    b = n-1;
    c = m+n-1;
    //如果m == 0，交换两个数组；如果n == 0，以下while均无效，返回nums1，符合要求
    if(m == 0)
    {
        while(b>=0)
        {
            nums1[c--] = nums2[b--];
        }
        return;
    }
    b = n-1;
    while(a>=0 && b>=0)
    {
        nums1[c--] = nums1[a]<=nums2[b]?nums2[b--]:nums1[a--];
    }
    //此处巧妙的是如果b先减到0，不用再进行任何操作，因为nums1中的剩余值位置不变
    while(b>=0)
    {
        nums1[c--] = nums2[b--];
    }
}


// @lc code=end

