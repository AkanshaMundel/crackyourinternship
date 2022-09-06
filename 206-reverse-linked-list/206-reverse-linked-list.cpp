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
    ListNode* reverseList(ListNode* head) {
        ListNode* dumm= NULL;
        while(head){               //head!=null
            ListNode* next = head->next;
            head->next= dumm;//breaking the bond nd assign with null 
            dumm= head;
            head =next;
        }
        return dumm;
    }
};
