/*
* Codechef PRACTICE (MEDIUM)
* Problem: COALSCAM - Coal Scam
* Author: Hariket Sukeshkumar Sheth
* Time Limit: 2 seconds
* Link: https://www.codechef.com/problems/COALSCAM
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long int
struct node
{
	int rank=0;
	int parent;
};
node nums[5005];
int findparent(int x)
{
	if(nums[x].parent==x)
		return x;
	else
	{
		nums[x].parent=findparent(nums[x].parent);
		return nums[x].parent;
	}
}
bool UnionByRank(int x,int y)
{
	int a=findparent(x);
	int b=findparent(y);
	if(a==b)
		return false;
	else
	{
		if(nums[a].rank>nums[b].rank)
		{
			nums[b].parent=a;
		}
		else if(nums[a].rank<nums[b].rank)
		{
			nums[a].parent=b;
		}
		else
		{
			nums[a].parent=b;
			nums[b].rank++;
		}
		return true;
	}

}
int32_t main()
{
	int t;
	cin>>t;
	while(t--)
	{int n,m1,m2;
	cin>>n>>m1>>m2;
	for(int i=0;i<=n-1;i++)
	{
		nums[i].parent=i;
		nums[i].rank=0;
	}
	vector<pair<int,pair<int,int> > > v1;
	vector<pair<int,pair<int,int> > > v2;
	for(int i=0;i<m1;i++)
	{
		int x;
		cin>>x;
		int y;
		cin>>y;
		int z;
		cin>>z;
		if(x>y)
			swap(x,y);
		v1.push_back(make_pair(z,make_pair(x,y)));

		
	}
	for(int i=0;i<m2;i++)
	{
		int x;
		cin>>x;
		int y;
		cin>>y;
		int z;
		cin>>z;
		if(x>y)
			swap(x,y);
		v2.push_back(make_pair(z,make_pair(x,y)));
		v1.push_back(make_pair(z,make_pair(x,y)));
		
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int tempanswer=0;
	int answer=0;
	for(int i=m2-1;i>=0;i--)
	{
		int x=v2[i].second.first;
		int y=v2[i].second.second;
		int z=v2[i].first;

			if(UnionByRank(x,y)==true)
			{
				answer+=z;

			}
		
	}
	tempanswer=answer;

	for(int i=0;i<m1+m2;i++)
	{
		int x=v1[i].second.first;
		int y=v1[i].second.second;
		int z=v1[i].first;

			if(UnionByRank(x,y)==true)
			{
				answer+=z;

			}	
	}


	set<int> s1;
	for(int i=0;i<=n-1;i++)
	{
		int x=findparent(i);
		s1.insert(x);
	}

	if(s1.size()==1)
		cout<<tempanswer<<" "<<answer<<endl;
	else
		cout<<"Impossible\n";}

}
