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
           //Store everything in a hashSet 
        unordered_map<ListNode*,int> s;
            
            // IF THE current head is pointing towards a previous node, there is a loop
            while(head!=NULL){
                    if(s.find(head) == s.end()){
                            s[head]++;
                    }
                    else{
                            return true;
                    }
                   head = head->next;
            }
            return false;
    }
};