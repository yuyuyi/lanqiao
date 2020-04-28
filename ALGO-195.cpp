#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,num=0;
	cin >> n;
	int w=n/10000;
	
	int q = n;
	if(q>9999)q%=10000;
	q/=1000; 
	
	int b = n;
	if(b>999)b%=1000;
	b/=100;
	
	int s = n;
	if(s>99)s%=100;
	s/=10;
	
	int g = n; 
	if(g>9)g%=10;
	
	
	if(n>9999)
	{
		if(w == 1)num = num+ q*1000+b*100+s*10+g;
		else
		{
			num+=10000;
		}
		cout << num << endl;
	}
	
	
	
	if(n>999)
	{	
		if(q==0)num = num+1000*(w-1);
		else if(q==1)num = num+1000*(w)+(b*100+s*10+g);
		else
		{
			num+=1000*w;
		}
		cout << num << endl;
	}
	
	
	if(n>99)
	{	
		if(b==0)num = num+100*(w*10+q-1);
		else if(b==1)num = num+100*(w*10+q)+(s*10+g);
		else
		{
			num+=100*(w*10+q);
		}
		cout << num << endl;
	}
	
	
	if(n>9)
	{	
		if(s==0)num = num+10*(w*100+q*10+b-1);
		else if(s==1)num = num+10*(w*100+q*10+b)+(g+1);
		else
		{
			num+=10*(w*100+q*10+b);
		}
		cout << num << endl;
	}
	

	if(n>0)
	{
		if(g==0)num = num+(w*1000+q*100+b*10+s);
		else num = num+(w*1000+q*100+b*10+s+1);
		cout << num << endl;
	}
	
	cout << num << " " <<w<<" " <<q<<" " <<b<<" " <<s<<" " <<g;
}
