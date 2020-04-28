#include<iostream>
#include<algorithm>

using namespace std;
int findnum(int n);
int main()
{
	int n;
	cin >> n;
	cout << findnum(n);
}

int findnum(int n)
{
	if(n<=2)return 1;
	int num1=1,num2=1,num3=2;
	for(int i=2;i<n;i++)
	{
		num1=num2;
		num2=num3;
		num3=num1+num2;
		if(num3>10007)num3-=10007;
	}
	return num2;
}
