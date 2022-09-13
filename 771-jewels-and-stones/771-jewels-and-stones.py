class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        counter = 0
        x=0
        while x < len(stones):
            if stones[x] in jewels:
                counter = counter +1
            x = x +1
        return counter
        