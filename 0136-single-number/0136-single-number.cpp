class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            index = index ^ nums[i]; //all numbers that appear twice
        }                           //cancel each other out through XOR
        return index;
    }
};