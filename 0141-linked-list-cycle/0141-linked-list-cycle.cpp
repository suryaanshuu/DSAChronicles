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
    bool hasCycle(ListNode *head) {

        /*
        // Brute Force
        ListNode* ptr;
        ptr = head;
        vector<ListNode*> add;

        while(ptr != NULL){
            ptr = ptr->next;

            for(int i = 0; i < add.size(); i++){
                if(ptr == add[i]) return true;
            }

            add.push_back(ptr);
        }
        return false;
        */

        // Tortoise and Hare Algorithm
        ListNode* s = head;
        ListNode* f = head;

        while(f != NULL && f->next != NULL){
            s = s->next;
            f = f->next->next;
            if(s == f){
                return true;
            }

        }
        return false;
    }
};