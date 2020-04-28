#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int>vec;
	int n,m;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> m;
		vec.push_back(m);
	}
	sort(vec.begin(),vec.end());
	cout << vec[0];
	for(int i=0;i<n;i++)
	{
		cout <<" " <<  vec[i];
	}
}
