class Solution(object):
    def runningSum(self, nums):
        i = 0
        arr=[nums[0]]*len(nums)
        while i < len(nums):
            if i == 0:
                i = i + 1
            arr[i] = arr[i-1] + nums[i]
            i = i + 1
        else:
            return arr