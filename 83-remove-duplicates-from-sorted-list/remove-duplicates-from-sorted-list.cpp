class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;

        while(temp != NULL && temp->next != NULL){
            if(temp->next->val == temp->val){
                while(temp->next != NULL && temp->next->val == temp->val){
                    temp->next = temp->next->next;
                }
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};