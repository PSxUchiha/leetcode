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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* empty = nullptr;
        if(head->next == nullptr && n==1)
            return empty;
        ListNode* temp = head;
        int count = 0;
        while(temp){
            count++;
            temp = temp->next;
        }
        if(count == n){
            head = head->next;
            return head;
        }
        count-=n+1;
        temp = head;
        while(count-- && temp->next){
            temp = temp->next;
        }
        if(temp->next)
            temp->next = temp->next->next;
        return head;
    }
};