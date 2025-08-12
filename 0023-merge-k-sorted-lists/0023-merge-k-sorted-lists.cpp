class Solution {
public:
    ListNode* sortedVectorToList(vector<int> nums) {
        sort(nums.begin(), nums.end());
        if (nums.empty()) return nullptr;

        ListNode* head = new ListNode(nums[0]);
        ListNode* current = head;
        for (size_t i = 1; i < nums.size(); ++i) {
            current->next = new ListNode(nums[i]);
            current = current->next;
        }
        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vals;

        // Collect all values
        for (auto node : lists) {
            while (node) {
                vals.push_back(node->val);
                node = node->next;
            }
        }

        // Convert sorted vector to linked list
        return sortedVectorToList(vals);
    }
};
