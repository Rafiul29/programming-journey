class Solution {
public:

    void insert_head(ListNode* &newHead, int val){
        ListNode* newNode=new ListNode(val);
        if(newHead==NULL){
            newHead=newNode;
            return;
        }
        newNode->next=newHead;
        newHead=newNode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* newHead=NULL;

        ListNode* tmp=head;

        while(tmp!=NULL){
            insert_head(newHead,tmp->val);
            tmp=tmp->next;
        }

        while(head!=NULL){
            if(head->val!=newHead->val) return false;
            head=head->next;
            newHead=newHead->next;
        }
        return true;

    }
};