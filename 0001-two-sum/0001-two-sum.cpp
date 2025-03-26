class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int x = target - nums[i];
            if (umap.contains(x)) {
                return{umap[x], i};
            }
            umap[nums[i]] = i;
        }
        return {};
    }
};