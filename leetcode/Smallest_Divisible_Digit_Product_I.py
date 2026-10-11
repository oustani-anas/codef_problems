

class Solution:
    
    def dproduct(self, n: int) -> int:
        prod = 1
        while(n):
            prod = prod * (n % 10)
            n = n // 10
        return prod

    def smallestNumber(self, n: int, t: int) -> int:
        
        if n == 1 and t == 1:
            return 1

        for i in range(n, 101):
            prod = self.dproduct(i)
            if prod % t == 0:
                return i
        

        