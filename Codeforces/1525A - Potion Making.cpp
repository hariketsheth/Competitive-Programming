#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const int M=1e9+7;
ll pow(ll n1,ll n2)
{
    if(n2==0)
       return 1;
      if(n2==1)
      return n1;
   
     if(!(n2&1))
     return (pow(n1,n2/2)%M)*(pow(n1,n2/2)%M);
     else
     return ((n1)*(pow(n1,n2/2)%M)%M)*(pow(n1,n2/2)%M);

}
int main()
{
   int num;
   cin>>num;
   while(num--)
   {
       int num2;
       cin>>num2;
       
       cout<<(100/(__gcd(100,num2)))<<endl;
   }
}
