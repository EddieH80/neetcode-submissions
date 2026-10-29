class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        longest = 0
        h_set = set(nums)
        for i in range(len(nums)):
            if nums[i] - 1 not in h_set:
                length = 1
                while nums[i] + length in h_set:
                    length +=1
                longest = max(length, longest)
        return longest
        