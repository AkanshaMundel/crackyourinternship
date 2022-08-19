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
    bool isPalindrome(ListNode* head) {
        if(head ==NULL ||head->next==NULL)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL&& fast->next->next!=NULL){
            slow= slow->next;
            fast = fast->next->next;
        }
     
        slow->next = reverse(slow->next);//reverse the linst list
        slow= slow->next;
        
        //checking palidrom
        while(slow!= NULL){
            if(slow->val != head->val)
                return false;
            head= head->next;
            slow= slow->next;
        }
        return true;
    }
        ListNode* reverse(ListNode* head){
            ListNode* dummy = NULL;
            while(head!= NULL){
                ListNode* next= head->next;
                head->next= dummy;
                dummy = head;
                head = next;
            }
            return dummy;
        }
    
};