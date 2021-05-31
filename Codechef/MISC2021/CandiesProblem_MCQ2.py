"""
* Codechef MISC2021
* Problem: MCQ2 - Candies Problem
* Author: Hariket Sukeshkumar Sheth
* Time Limit: 5 seconds
* Link: https://www.codechef.com/MISC2021/problems/MCQ2
"""

def distribution (rating):
    count, candy = 1, [1]
    for i in range(1, len(rating)):
        if rating[i] > rating[i - 1]:
            count += 1
        else:
            count = 1
        candy.append(count)
        
    return candy
num = int(input())
rating = []
for i in range(num):
    rating.append(int(input()))

sol_1 = distribution (rating)
rating.reverse()
sol_2 = distribution (rating)
result = map(max, zip(sol_1, reversed(sol_2)))
print(sum(result))
