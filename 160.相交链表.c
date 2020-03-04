/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *newheadA,*newheadB;
    newheadA = headA;
    newheadB = headB;
    if(headA!=NULL && headB!=NULL)
    {
        while(newheadA != newheadB)
        {
            newheadA = newheadA == NULL? headB:newheadA->next;
            newheadB = newheadB == NULL? headA:newheadB->next;
        }
        return newheadA;
    }
    else return NULL;
}
// @lc code=end

