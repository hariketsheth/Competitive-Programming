"""
Pick ith Ball after Arranging
Given the radius and color of ‘n’ balls and an index ‘i’, write a C++ program to arrange them in ascending order as per their volume and when volumes of two balls are same arrange them as per their name. After arranging, print the details of the ith ball. For example, when five balls are given with radius and color as below:

2 red
1 blue
1 red
2 blue
3 red

and index is given as 1, then after arranging in ascending order the balls will be:
1 blue
1 red
2 blue
2 red
3 red

therefore print 1 blue.
Note: Input can be very large

Hint:
This problem can be quickly solved using list in STL.

1. Design a class for ball overload < and > operator to decide about the realtionship between two balls
2. #include<list> includes list
3. list<int> l is used to create an integer list
4. l.sort() - will sort the list, provided < and > operators are overloaded for user defined data types
5. Random access is not possible in list
6. list<int>::iterator it=l.begin(); - creates an iterator for integer list and initializes to first element
7. Iterator can be moved by it++
8. value of an element by iterator it can be retrieved as *it

Input Format

First line contains the number of balls, n
Next ‘n’ lines contain the details of the balls radius and color separated by a space
Next line contains the value of ‘i’

Output Format:
Print the radius and color of ith ball after arrangement
"""

n = int(input())
ele, res =[], []
for i in range(n):
    k1, k2 = input().split()
    if int(k1) not in ele:
        ele.append(int(k1))
    res.append((int(k1),k2))
ele.sort()
res.sort()
final=[]
for i in range(len(ele)):
    kk = []
    for j in res:
        k1, k2 = j
        if k1 == ele[i]:
            kk.append(k2)
    for m in range(len(kk)):
        final.append((ele[i],kk[m]))
q = int(input())
print(*final[q-1])
