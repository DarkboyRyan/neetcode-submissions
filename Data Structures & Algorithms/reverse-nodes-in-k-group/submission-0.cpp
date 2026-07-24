/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int group = 0;
        ListNode* cur = head;
        while(cur!=nullptr && group < k){
            cur = cur->next;
            group++;
        }

        if(group == k){
            cur = reverseKGroup(cur,k);
            while(group-- > 0){
                ListNode* tmp = head->next;
                head->next = cur;
                cur = head;
                head = tmp;            
            }
            head = cur;
        }

        return head;       
    }
};
