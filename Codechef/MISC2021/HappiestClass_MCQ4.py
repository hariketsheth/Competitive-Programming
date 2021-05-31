"""
* Codechef MISC2021
* Problem: MCQ4 - Happiest Class
* Author: Hariket Sukeshkumar Sheth
* Time Limit: 5 seconds
* Link: https://www.codechef.com/MISC2021/problems/MCQ4
"""

def happy1(final, fav, k, happy):
    h_c, count, done= 0, 0, []
    for i in range(k,0,-1):
        for j in range(len(fav)):
            if(j not in done):
                if(final.count(fav[j])>=i):
                    count += 1
                    ind = final.index(fav[j])
                    final = final[:ind] + final [ind+k:]
                    done.append(j)
        h_c += count*happy[i-1]
        count = 0
    return h_c
n , k = map(int, input().split())
final = list (map (int, input().split()))
fav = list(map(int, input().split()))
happy = list(map(int, input().split()))
final.sort()
ans = happy1(final, fav, k , happy)
print(ans)
