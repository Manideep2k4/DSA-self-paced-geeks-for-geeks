class Solution:
    def grayToBinary(self, n):
        binary = 0
        while n:
            binary ^= n
            n >>= 1
        return binary
        
        
        
        
        
        python code
        
