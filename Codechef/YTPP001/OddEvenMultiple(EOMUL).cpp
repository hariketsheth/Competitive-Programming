/*
* Codechef YTPP001
* Problem: EOMUL - Odd Even Multiple
* Author: Hariket Sukeshkumar Sheth
* Time Limit: 1 second
* Link: https://www.codechef.com/YTPP001/problems/EOMUL
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	if(n%3!=0)
	    cout << -1 << endl;
	else{
	    if((n/3)%2==0)
	      cout << 0<< endl;
	    else
	      cout << 1 << endl;
	}
}
