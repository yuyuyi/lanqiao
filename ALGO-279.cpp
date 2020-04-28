#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n,num=0,x;
	cin >> n;
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		vec.push_back(x);
	}
	sort(vec.begin(),vec.end());
	
	for(int i=0;i<vec.size()-1;i++)
	{
		if(vec[i]-vec[i+1] == -1)num++;
	}
	
	cout << num;
}
