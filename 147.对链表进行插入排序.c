/*
 * @lc app=leetcode.cn id=147 lang=c
 *
 * [147] 对链表进行插入排序
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* insertionSortList(struct ListNode* head){
    struct ListNode *header;
    header = head;
    while (header->next != NULL)
    {
        tmp = header->val;
        while (header->next->val < header->val)
        {
            header->next = header->next->next;
            header->next->next = header;
        }
        

        header = header->next;
    }

}


// @lc code=end

