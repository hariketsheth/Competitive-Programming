"""
* Codechef MISC2021
* Problem: MCQ3 - Cross The Buildings
* Author: Hariket Sukeshkumar Sheth
* Time Limit: 5 seconds
* Link: https://www.codechef.com/MISC2021/problems/MCQ3
"""

import sys
num, green = map(int, sys.stdin.readline().split(' '))
height = list(map(int, sys.stdin.readline().split(' ')))
red, flag = 0, True
for i in range (len(height)-1):
    if(height[i]!=height[i+1]):
        if(red==0):
            if(height[i]<height[i+1]):
                while(green>0 and height[i]!=height[i+1]):
                    height[i] += 1
                    green -= 1
            else:
                red, height[i] = height[i]-height[i+1], height[i+1]
            if(height[i]!=height[i+1]): 
                flag = False 
                break
        else:
            if(height[i]!=height[i+1]):
                height[i] += red
                if(height[i] > height[i+1]):
                    red,  height[i]= height[i]-height[i+1], height[i+1]
                else:
                    while(green>0 and height[i]!=height[i+1]):
                        height[i] += 1
                        green -= 1
            if(height[i]!=height[i+1]): 
                flag = False 
                break
if(flag == False): print("NO")
else: print("YES")
                    
