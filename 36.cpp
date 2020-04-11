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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode * res = new ListNode(0), * p = new ListNode(0);
        p = res;
        while (l1 || l2) {
            p -> next = new ListNode(0);
            p = p -> next;
            int val_ = 0;
            bool flag = false;
            if (l1 && l2) {
                if (l1 -> val > l2 -> val) {
                    flag = false;
                    val_ = l2 -> val;
                }
                else {
                    flag = true;
                    val_ = l1 -> val;
                }
           
            }
            else if (l1) {
                val_ = l1 -> val;
                flag = true;
            }
            else {
                val_ = l2 -> val;
                flag = false;
            }
            p -> val = val_;
            if (l1 && flag)
                l1 = l1 -> next;
            if (l2 && !flag)
                l2 = l2 -> next;
        }
        return res -> next;
    }  
};
