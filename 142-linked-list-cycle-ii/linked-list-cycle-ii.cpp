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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp;
        int size = 0;
        while(fast != NULL && fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
            size++;

            if(slow == fast){
                temp = head;
                    while(temp != slow){
                        slow = slow->next;
                        temp = temp->next;
                    }
                    return temp;
            }
        }
        return NULL;
    }
};