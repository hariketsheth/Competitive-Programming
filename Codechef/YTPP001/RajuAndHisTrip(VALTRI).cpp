/*
* Codechef YTPP001
* Problem: VALTRI - Raju and his Trip
* Author: Hariket Sukeshkumar Sheth
* Time Limit: 1 second
* Link: https://www.codechef.com/YTPP001/problems/VALTRI
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin >> n;
	if (n%5 == 0 || n%6 == 0)
	    cout<<"YES";
	else
	    cout<<"NO";
	return 0;
}
