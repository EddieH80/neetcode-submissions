class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> no_dups;
        for (int i = 0; i< nums.size(); i++) {
            no_dups.insert(nums[i]);
        }
        return no_dups.size() != nums.size();
    }
};