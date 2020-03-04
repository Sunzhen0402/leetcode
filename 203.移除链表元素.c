/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode *header;
    header = head;
    if(header == NULL)
    {
        return NULL;
    }
    while(header!=NULL && header->val == val)
    {
        header = header->next;
        head = header;
        if(header == NULL)
        {
            return NULL;
        }
    }
    while(header!=NULL && header->next!=NULL)
    {
        if(header->next->val == val)
        {
            header->next = header->next->next;
        }
        else
        {
           header = header->next; 
        }
    }
    
    return head;
}


// @lc code=end

