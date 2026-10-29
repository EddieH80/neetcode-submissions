class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hTable;
        for (int i = 0; i < nums.size(); i++) {
            if (hTable.find(nums[i]) != hTable.end()) {
                return true;
            } else {
                hTable.insert({nums[i], 1});
            }
        }
        return false;
    }
};