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

    ListNode* swapNodes(ListNode* head, int k) {
        // 1 2 3 4 5 6 7 , k=2, 0-based 
        // 3->5
        // 1 2 5 4 3 6 7
            
        
        ListNode* copyToArray =  head;
            ListNode* res = head;
            vector<int>v;
            int count =0;
        while(copyToArray){
                v.push_back(copyToArray->val);
                copyToArray=copyToArray->next;
                count++;
        }
            swap(k-1, count-k, v);
            int i=0;
            
            while(res){
                    res->val = v[i];
                    i++;
                    res=res->next;
            }
            return head;
    }
        void swap(int i, int j, vector<int> &v){
                int temp= v[i];
                v[i]= v[j];
                v[j]= temp;
        }
};