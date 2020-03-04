/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
int carry = 0;
struct ListNode *header,*cur,*next;
header = (struct ListNode *)malloc(sizeof (struct ListNode ));
header->next = NULL;
cur = header;
while(l1!= NULL||l2!=NULL||carry)
{
    next = (struct ListNode *)malloc(sizeof(struct ListNode ));
    next->next = NULL;
    cur->next = next;
    cur = next;
    l1 != NULL?(carry+=l1->val,l1 = l1->next):(carry+=0);
    l2 != NULL?(carry+=l2->val,l2 = l2->next):(carry+=0);
    cur->val = carry%10;
    carry = carry/10;
}
struct ListNode *del=header;
header = header->next;
free(del);
return header;
}


// @lc code=end

