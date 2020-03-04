/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *header,*target,*tem;
    if(head!=NULL)
    {
        header = head;
        target = header->next;
        while(header->next!=NULL)
        {
            header->next = target->next;
            tem = target->next;
            target->next = head;
            head = target;
            target = tem;
        } 
    }
    else
    {
        return NULL;
    }
    
    return head;
}


// @lc code=end

