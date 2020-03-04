/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *newdigits,digitsSize1,i;
    digitsSize1 = digitsSize;
    newdigits = (int*)malloc(sizeof (int) * (digitsSize+1));
   if(digits[digitsSize-1]!=9)
   {
       *returnSize = digitsSize;
        digits[digitsSize-1] = digits[digitsSize-1] +1;
        return digits;
   }
   else 
   {
       while(digitsSize1>0 && digits[digitsSize1-1]==9)
       {
           digits[digitsSize1-1] = 0;
           digitsSize1--;
       }
       if(digits[0] != 0)
       {
           *returnSize = digitsSize;
            digits[digitsSize1-1] = digits[digitsSize1-1]+1;
            return digits;
       }
       else
       {
           *returnSize = digitsSize + 1;
           for(i=1;i<digitsSize+1;i++)
           {
               newdigits[i] = 0;
           }
           newdigits[0] = 1;
           return newdigits;
       }
   }
}


// @lc code=end

