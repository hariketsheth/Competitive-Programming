"""
* Codechef MISC2021
* Problem: MCQ7 - Matching Sets
* Author: Hariket Sukeshkumar Sheth
* Time Limit: 5 seconds
* Link: https://www.codechef.com/MISC2021/problems/MCQ7
"""

num = int(input())
for i in range (num):
    n = int(input())
    s = list(map(int, input().split(' ')))
    count = 0
    for j in range(len(s)):
        for k in range (j+1, len(s)):
            k1, k2 = bin(s[j])[2:], bin(s[k])[2:]
            m = max (len(k1), len(k2))
            k1, k2 = k1.zfill(m), k2.zfill(m)
            sw = []
            for l in range(m):
                sw.append(str(int(k1[l]) or int(k2[l])))
                res = int(''.join(sw),2)
            if(res==max(s[j],s[k])):
                count += 1 
    print(count)
