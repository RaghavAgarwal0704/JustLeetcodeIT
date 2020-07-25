class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* t=head;
        int n=-1,s=0;
        while(t!=nullptr){
            n++;
            t=t->next;
        }
        t=head;
        while(t!=nullptr){
            s+=t->val*pow(2,n--);
            t=t->next;
        }
        return s;
    }
};
