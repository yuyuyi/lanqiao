#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	bool bo[102][102]={false};
	int n,maxnumx=0,maxnumy=0,acc=0;
	
	int a,b,c,d;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a >> b >> c >> d;
		maxnumx = (c>maxnumx)?c:maxnumx;
		maxnumy = (d>maxnumy)?d:maxnumy;
		for(int j=a;j<c;j++)
			for(int k=b;k<d;k++)
			{
				bo[j][k]=true;
			}
	}
	
	for(int i=0;i<=maxnumx;i++)
		for(int j=0;j<=maxnumy;j++)
		{
			if(bo[i][j]==true)acc++;
		}
		
		cout << acc;
}


