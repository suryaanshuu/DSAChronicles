class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* a = head;

        while(a != NULL && a->next != NULL){
            while(a->next != NULL && a->val == a->next->val){
                a->next = a->next->next;
            }
            a = a->next;
        }
        return head;
    }
};