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
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* dummy = new ListNode ;
//         dummy->next = head;
//         ListNode* fast = dummy;
//         ListNode* slow = dummy;
//         for(int i = 1;i<=n;i++){
//             fast= fast->next;
//         }
//         while(fast->next!=NULL){
//             slow= slow->next;
//             fast= fast->next;
//         }
//         slow->next = slow->next->next;
//         return slow->next;
//     }
// };
// //tc o(n )-- max fast pointer move max n length

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++) fast = fast->next;
        if (!fast) return head->next;
        while (fast->next) fast = fast->next, slow = slow->next;
        slow->next = slow->next->next;
        return head;
    }
};