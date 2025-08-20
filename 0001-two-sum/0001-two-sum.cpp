class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size();i++){
            if(nums[i] > 0 && target >0 && nums[i] > target) continue;
            for(int j=0;j<nums.size();j++){
                if (i == j) continue;
                if(nums[i]+nums[j] == target) return {i,j};
            }
        }
        return {};
    }
};