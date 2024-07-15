class Solution:
    def isSparse(self,n):
        binary = bin(n)[2:]
        for i in range(len(binary) - 1):
            if binary[i] == '1' and binary[i + 1] == '1':
                return 0
        return 1
        
        
 python code
