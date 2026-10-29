class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> no_dups;
        for (int i = 0; i< nums.size(); i++) {
            if (no_dups.find(nums[i]) == no_dups.end()) {
                no_dups.insert({nums[i], i});
            } else{
                return true;
            }
        }
        return false;
    }
};