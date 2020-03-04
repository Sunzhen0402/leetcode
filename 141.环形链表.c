/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
//快慢指针
    struct ListNode *fast,*slow;
    fast = head;
    slow = head;
    if(head!=NULL)
    {
        while(fast!=NULL&&fast->next!=NULL&&slow!=NULL)
        {
            fast = fast->next->next;
            //如果要用到->next->next必须先确保->next不为NULL
            slow = slow->next;
            if(fast == slow)
            {
                return true;
            }
        }
        return false;
    }
    return false;
}
// @lc code=end

