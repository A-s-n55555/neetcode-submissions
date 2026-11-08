class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* in = nullptr;
        int count = 1;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nxt = head->next;

        while (curr != nullptr) {
            if (count + 1 == left) in = curr;

            while (count >= left && count <= right) {
                if (count == left) {
                    prev = curr;
                    curr = nxt;
                    nxt = nxt ? nxt->next : nullptr;
                    count++;
                    continue;
                }

                curr->next = prev;

                if (count == right) {
                    ListNode* ab = in ? in->next : head;

                    if (in) in->next = curr;
                    else head = curr;

                    ab->next = nxt;
                    return head;
                }

                prev = curr;
                curr = nxt;
                nxt = nxt ? nxt->next : nullptr;
                count++;
            }

            prev = curr;
            curr = nxt;
            nxt = nxt ? nxt->next : nullptr;
            count++;
        }

        return head;
    }
};