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
    ListNode *detectCycle(ListNode *head) {
        //using two pointer approach 
        //tc o(n)
        //sc o(1)
        // if(head==NULL || head->next ==NULL )return NULL;
        // ListNode *slow= head;
        // ListNode *fast = head;
        //  ListNode *entry= head;
        // while(fast ->next && fast->next->next ){ //CHECKING IF THER IS COLLOSION POINT 
        //     slow = slow->next;
        //     fast = fast->next->next;
        //     if( slow ==fast){            //IF HAVE THEN CHEKING THE CYCLE 
        //         while(entry !=slow){
        //             slow= slow->next;
        //               entry= entry ->next;
        //              }
        //         return entry;
        //        }
        // }
        // return NULL;
        // using hash map tc = sc = O(n)
        unordered_map<ListNode*,int>mp;
        while(head){
            if(mp.find(head)!=mp.end())return head; //has cycle
            else{
                mp[head]= 1;
                head= head->next;
                
            }
        }
        return NULL;
    }
};