
class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> ref;
        ListNode* a = head;

        while(a != NULL) {
            ref.push_back(a);
            a = a->next;
        }
        int n = ref.size();
        a = head;
        for(int i = n-1; i >= n/2; i--) {
            if(a == ref[i]) {
                a->next = NULL;
                return;
            }

            ListNode* tp = a->next;
            a->next = ref[i];

            if(ref[i] == tp) {
                ref[i]->next = NULL;
                return;
            }

            ref[i]->next = tp;
            a = tp;
        }
    }
};
