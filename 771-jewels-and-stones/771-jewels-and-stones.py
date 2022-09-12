class Solution(object):
    def numJewelsInStones(self, jewels, stones):
        """
        :type jewels: str
        :type stones: str
        :rtype: int
        """
        counter = 0
        i = 0
        j = 0
        while i < len(jewels):
            while j < len(stones):
                if jewels[i] == stones[j]:
                    counter = counter + 1
                j = j + 1
            i = i + 1
            j = 0
            
        return counter