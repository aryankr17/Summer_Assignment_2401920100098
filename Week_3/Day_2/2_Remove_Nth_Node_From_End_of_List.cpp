class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count = 0;
        ListNode* curr = head;

        while(curr != NULL) {
            count++;
            curr = curr->next;
        }
        
        if(n == count) {
            return head->next;
        }

        curr = head;
        for(int i = 1; i < (count - n); i++) {
            curr = curr->next;
        }

        curr->next = curr->next->next;

        return head;
    }
};
