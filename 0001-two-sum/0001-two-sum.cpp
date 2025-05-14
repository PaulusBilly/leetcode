class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;

        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (hashmap.count(x)) {
                return {hashmap[x], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};