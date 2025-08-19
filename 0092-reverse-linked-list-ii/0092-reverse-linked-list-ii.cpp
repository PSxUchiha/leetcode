class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* temp = head;
        ListNode* prev = nullptr;

        for (int i = 1; i < left; i++) {
            prev = temp;
            temp = temp->next;
        }

        ListNode* subHeadPrev = prev;
        ListNode* subTail = temp;

        ListNode* curr = temp;
        ListNode* next = nullptr;
        ListNode* prevReversed = nullptr;

        for (int i = left; i <= right; i++) {
            next = curr->next;
            curr->next = prevReversed;
            prevReversed = curr;
            curr = next;
        }
        if (subHeadPrev) {
            subHeadPrev->next = prevReversed;  
        } else {
            head = prevReversed;  
        }

        subTail->next = curr; 

        return head;
    }
};
