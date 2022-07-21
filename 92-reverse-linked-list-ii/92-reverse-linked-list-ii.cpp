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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(right == left ){return head;}
         ListNode *dummy = new ListNode(0);
        ListNode* prev = dummy;
        dummy->next = head;
        ListNode*tail =NULL;
        ListNode* temp = NULL;
      
       
         for (int i = 0; i < left - 1; i++){
                prev = prev->next;
            }
          tail =prev->next;
        for(int i=0; i< right - left;i++){
            temp = prev->next;
            prev->next = tail->next;
            tail->next = tail->next->next;
            prev->next->next = temp; 
        }
        
        return dummy->next;
        
    }
};

