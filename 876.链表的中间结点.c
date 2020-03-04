/*
 * @lc app=leetcode.cn id=876 lang=c
 *
 * [876] 链表的中间结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *header;
    //middleNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    header = head;
    int i=1,a;

    if(header!= NULL)
    {
        while(header->next!=NULL)
        {
            header=header->next;
            i++;
        }
        i = i/2 + 1;
        for(a = 1;a < i; i--)
        {
            head = head->next;
        }
        return head;
    }
    else return NULL;
}



// @lc code=end

