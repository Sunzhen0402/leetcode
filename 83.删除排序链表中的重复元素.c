/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *l,*header;
    header = head;
    while (header!=NULL && header->next != NULL)
    {
        if(header->val == header->next->val)
        {
            l=header->next;
            header->next = l->next;
        }
        else
        {
            header = header->next;
        }
    }
    return head;
}


// @lc code=end

