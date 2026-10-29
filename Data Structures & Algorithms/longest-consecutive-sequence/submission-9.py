class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        hs_set = set(nums)
        longest = 0
        for i in range(len(nums)):
            if nums[i] - 1 not in hs_set:
                length = 1
                while (nums[i] + length) in hs_set:
                    length += 1
                longest = max(length, longest)
        return longest

            
        