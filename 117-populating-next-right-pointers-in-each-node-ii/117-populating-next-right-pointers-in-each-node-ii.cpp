class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return root;
        Node *head=NULL,*tail=NULL;
        Node *curr=root;
        curr->next=NULL; //Make right of root as NULL
        
        //For each level, we will update the next pointers of next level
        while(curr){
            if(curr->left){ //only if left child exists
                if(head==NULL){
                    head=tail=curr->left;
                    tail->next=NULL;
                }
                else{
                    tail->next=curr->left;
                    tail=tail->next;
                }
            }
            if(curr->right){ //only if right child exists
                if(head==NULL){
                    head=tail=curr->right;
                    tail->next=NULL;
                }
                else{
                    tail->next=curr->right;
                    tail=tail->next;
                }
            }
            curr=curr->next; //Going to next node at same level.
            if(NULL == curr and head){ //Level completed now, update curr to next level head.
                tail->next=NULL;
                curr=head; //update root 
                head=tail=NULL;
            }
        }
        return root;
    }
};