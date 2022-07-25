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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // first make the dummy node
            ListNode* dummyNode = new ListNode();
            
            dummyNode->next = head;
            //make two pointers and initialy assign it to the first
            ListNode* fast = dummyNode;
            ListNode* slow = dummyNode;
            
            // move the fast pointer n steps
            for(int i=1;i<=n;i++){
                    fast = fast->next;
            }
            // now again start till f reaches NULL
            while(fast->next!=NULL){
                    fast =fast->next;
                    slow = slow-> next;
            }
            // now move one step further
            slow->next = slow->next->next;
            return dummyNode->next;
            
            
    }
};