/*
* Codechef YTPP001
* Problem: LSTSEV - Not Last
* Author: Hariket Sukeshkumar Sheth
* Time Limit: 1 second
* Link: https://www.codechef.com/YTPP001/problems/LSTSEV
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin >> n;
    int temp, count = 0;
    
    while(n!=0 && count<2){
        temp = n%10;
        n = n/10;
        count+=1;
    }
    
    if(temp==7)
      cout << 1 << endl;
    else
      cout << 0 << endl;
}
