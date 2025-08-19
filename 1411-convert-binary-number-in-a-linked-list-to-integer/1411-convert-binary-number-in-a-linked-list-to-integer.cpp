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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head; int count = -1, val = 0;
        while(temp){
            if(count<=30)
                count++;
            temp = temp->next;
        }
        while(head){
            val+= head->val * pow(2, count--);
            head = head->next;
        }
        return val;
    }
};