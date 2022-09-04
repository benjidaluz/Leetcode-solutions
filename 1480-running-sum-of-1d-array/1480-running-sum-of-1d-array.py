class Solution(object):
    def runningSum(self, nums):
        i = 0
        x = 0
        arr=[0]*len(nums)
        while i < len(nums):
            if i == 0:
                x = nums[i]
                arr[i] = nums[i]
                i = i + 1
            x = x + nums[i]
            arr[i] = x
            i = i + 1
        else:
            return arr