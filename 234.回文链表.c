/*
 * @lc app=leetcode.cn id=234 lang=c
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    struct ListNode *newhead,*first,*temp,*target;
    newhead = head;
    if(newhead!=NULL)
    {
        first = newhead;
        target = newhead->next;
        while (first->next!=NULL)
        {
            first->next = target->next;
            target->next = newhead;
            newhead = target;
            target = first->next;
        }
    }
    return head;
    // return newhead;
    // while(head == newhead )
    // {
    //     head = head->next;
    //     newhead = newhead->next;
    // }
    // if(newhead == head)
    // {
    //     return true;
    // }
    // else 
    // {
    //     return false;
    // }
}


// @lc code=end

