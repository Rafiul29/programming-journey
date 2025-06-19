class Solution:
    def countPrimes(self, n: int) -> int:
        if n <= 2:
            return 0

        is_prime = [1] * n
        is_prime[0] = is_prime[1] = 0
        count_prime_numbers = []

        for j in range(2, n):
            if is_prime[j]:
                count_prime_numbers.append(j)
                for i in range(j * j, n, j):
                    is_prime[i] = 0
                    
        return len(count_prime_numbers)
    
print(Solution.countPrimes(2,10))
    



