class Solution {
public:
    vector twoSum(vector& nums, int target) {
        unordered_mapm;
        for(int i = 0; i < nums.size(); i++){
            if(m.count(target - nums[i])) return {m[target - nums[i]], i};
            m[nums[i]] = i;
        }
    }
};
