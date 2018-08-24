#include<bits/stdc++.h>
using namespace std;
int main()
{
	//vector <int> q,r,r1,r2,t,t1,t2;
	int q,r,r1,r2,t,t1=0,t2=1;
	int a,b;
	cout<<"Enter the values of a,b to computer a^(-1) mod b"<<endl;
	cin>>a>>b;
	r1=b;
	r2=a;
	/*r1.push_back(b);
	r3.push_back(a);
	t1.push_back(0);
	t2.push_back(1);
	while(r1.end()!=1 && r2.end()!=0)
	{
		q.push_back(r1.end()/r2.end());
		r.push_back(r1.end()%r2.end());
		t.push_back(t1.end()-(q.end()*t2.end()));
		
	}*/
	
	while(r1!=1&&r2!=0)
	{
		q=r1/r2;
		r=r1%r2;
		t=t1-q*t2;
		r1=r2;
		r2=r;
		t1=t2;
		t2=t;
		
	}
	while(t1<0)
	{
		t1=t1+b;
	}
	cout<<"\n"<<t1;
}