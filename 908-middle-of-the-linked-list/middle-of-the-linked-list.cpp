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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr = head;
        int size = 0;

        while(ptr != NULL){
            ptr = ptr->next;
            size++;
        }

        int n = size / 2;

        ListNode* ptrTwo = head;


        for(int i = 0; i < n; i++){
            ptrTwo = ptrTwo->next;
        }
        head = ptrTwo;

        return head;
    }
};