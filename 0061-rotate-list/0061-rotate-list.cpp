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
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }

        /*
        // Brute Force
        ListNode* temp = head;

        for(int i = 0; i < k; i++){
            while(temp->next != NULL){
                temp = temp->next;
            }
            if(temp != NULL) temp->next = head;
            head = temp;
        }
        return head;
        */

        // Optmised approach
        ListNode* temp = head;
        int size = 1;
        while(temp->next != NULL){
            size++;
            temp = temp->next;
        }
        temp->next = head;
        k = k % size;
        
        temp = head;

        for(int i = 0; i < size - k - 1 ; i++){
            if(temp->next != NULL) temp = temp->next;
        }

        ListNode* newHead = temp->next;
        temp->next = NULL;

        return newHead;
    }
};