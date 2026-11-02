class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        out = []
        hTable = {}
        for i in range(len(nums)):
            if target - nums[i] in hTable.keys():
                out.append(hTable[target - nums[i]])
                out.append(i)
                return out;
            hTable[nums[i]] = i
            