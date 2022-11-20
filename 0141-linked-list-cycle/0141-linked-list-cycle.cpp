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
        if(head == NULL )return  false; 
        unordered_map<ListNode* , int>mp;
        //brute app is to create the map and store the node if cycle node aldredy prnt
        while(head!= NULL){
           if(mp.count(head)>0)return true;
            else{
                mp[head] = 1;
                head = head->next;
            }
        }
        return false;
    }
};