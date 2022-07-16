/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> s;
        ListNode* curr=headA;
        while(curr!=nullptr){
            s.insert(curr);
            curr=curr->next;
        }
        curr=headB;
        while(curr!=nullptr){
            if(s.find(curr)!=s.end())
                return curr;
            curr=curr->next;
        }
        return nullptr;
    }
};
// @lc code=end

