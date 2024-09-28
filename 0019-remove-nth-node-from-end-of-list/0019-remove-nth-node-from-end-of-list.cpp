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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* ptr = head;
        int size = 0;

        if(ptr->next == NULL){
            ptr = ptr->next;
            return ptr;
        }

        /*
        // Brute Force
        while(ptr != NULL){
            ptr = ptr->next;
            size++;
        }

        ptr = head;

        if(n == size){
            head = head->next;
        }

        for(int i = 1; i <= (size - n - 1); i++){
            ptr = ptr->next;
        }
        ListNode *temp = ptr->next->next;
        ptr->next = temp;

        return head;
        */

        // Optimised Approach
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i = 0; i < n + 1 ; i++){
            if(fast == NULL){
                return head->next;
            } 

            fast = fast->next;
        }

        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return head;
    }
};