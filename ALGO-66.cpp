#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string str;
	vector<string> vec;
	while(1)
	{
		cin >> str;
		vec.push_back(str);
		if(str[str.length()-1]=='.')break;
	}
	
	char pd;
	cin >> pd;
	
	if(pd == 'D')
	{
		char ch;
		cin >> ch;
		int flag=0;
		
		for(int i=0;i<vec.size();i++)
		{
			for(int j=0;j<vec[i].length();j++)
			{
				if(vec[i][j] == ch && flag==0)
				{
					vec[i].erase(vec[i].begin()+vec[i].find(ch));
					flag=1;
					break;
				}
			}
			if(flag==1)break;
		}
	}
	
	if(pd == ' ')
	{
		
	}
	
	
	
	
	
	
	
	
	for(int i=0;i<vec.size();i++)
	{
		cout << vec[i] <<" ";
	}
 } 
