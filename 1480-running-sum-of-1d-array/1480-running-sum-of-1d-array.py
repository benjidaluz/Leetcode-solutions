class Solution(object):
    def runningSum(self, nums):
        i = 0
        arr=[0]*len(nums)
        while i < len(nums):
            if i == 0:
                arr[i] = nums[i]
                i = i + 1
            arr[i] = arr[i-1] + nums[i]
            i = i + 1
        else:
            return arr