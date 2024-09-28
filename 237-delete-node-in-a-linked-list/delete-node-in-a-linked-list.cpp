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
    void deleteNode(ListNode* node) {

        if(node == NULL) return;

        if(node->next == NULL){
            node = node->next;
            return;
        }

        ListNode* nxtptr = node->next;
        node->val = nxtptr->val;
        node->next = nxtptr->next;
        nxtptr->next = NULL;
    }
};