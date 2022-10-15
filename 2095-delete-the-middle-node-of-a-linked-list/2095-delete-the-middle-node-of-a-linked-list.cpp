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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)return NULL;
        ListNode* temp = new ListNode();
        temp = head;
        int cnt= 0;
        while(temp!=NULL){
            temp = temp->next;
            cnt++;
        }
        int n = (cnt/2)-1;
        temp = head;
        while(n--){
            temp= temp->next;
        }
        temp->next= temp->next->next;
        return head;
    }
};