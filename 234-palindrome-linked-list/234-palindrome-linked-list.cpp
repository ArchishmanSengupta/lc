class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        if(!head->next)  return true;
        while(fast->next && fast->next->next){               
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*prev=NULL,*curr=slow->next,*temp;
        while(curr!=NULL){                                 
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        slow->next=prev;                                   
        ListNode *start=head,*mid=slow->next;
        while(mid){                                        
            if(start->val!=mid->val) return false;
            start=start->next;
            mid=mid->next;
        }
        return true;
    }
};