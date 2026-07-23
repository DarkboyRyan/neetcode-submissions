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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nodes;
        for(ListNode* n : lists){
            while(n){
                nodes.push_back(n->val);
                n = n->next;
            }            
        }

        sort(nodes.begin(),nodes.end());

        ListNode* cur = new ListNode(0);
        ListNode* res = cur;

        for(int node : nodes){
            cur->next = new ListNode(node);
            cur = cur->next;
        }

        return res->next;
    }
};
