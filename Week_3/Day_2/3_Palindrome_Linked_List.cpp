class Solution {
public:
    bool isPalindrome(ListNode* head) {
     if(head==NULL && head->next==NULL) return true;
     ListNode* slow=head;
     ListNode* fast=head;

     while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
     }
     stack<int> s;

     while(slow!=NULL){
        s.push(slow->val);
        slow=slow->next;
     }

     ListNode* ptr=head;
     while(!s.empty()){
        if(ptr->val!=s.top()){
            return false;
        }
        else{
            s.pop();
            ptr=ptr->next;
        }
     }
     return true;
    }
};
