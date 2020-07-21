class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *fin;
        if(l1==nullptr)return l2;
        else if(l2==nullptr) return l1;
        if(l1->val<=l2->val){fin=l1;fin->next=mergeTwoLists(l1->next,l2);}
        else if(l1->val>=l2->val){fin=l2;fin->next=mergeTwoLists(l1,l2->next);}
        return fin;
    }
};
