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
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int countA = 0;
        int countB = 0;

        while(tempA != NULL){
            countA++;
            tempA = tempA->next;
        }

        while(tempB != NULL){
            countB++;
            tempB = tempB->next;
        }

        int diff = abs(countA - countB);

        if(countA > countB){
            for(int i = 0; i < diff; i++){
                headA = headA->next;
            }
        } else {
            for(int i = 0; i < diff; i++){
                headB = headB->next;
            }
        }

        tempA = headA;
        tempB = headB;

        while(tempA != NULL && tempB != NULL){

            if(tempA == tempB){
                return tempA;
            }
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return NULL;
    }
};