#include<bits/stdc++.h>
using namespace std;
struct data
{
	char ch;
	int r,c;	
};
int main()
{
	char key[5][5]={{'F','G','H','I','K'},{'L','M','N','O','P'},{'A','B','C','D','E'},{'V','W','X','Y','Z'},{'Q','R','S','T','U'}};
	string msg; 
	//char z='Z';
	vector<char> m,enc,dec;
	vector<int> ev,ev1,ev2,dv,dv1,dv2;
	data tab[26],f,l,temp;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
				tab[key[i][j]-65].ch=key[i][j];
			   tab[key[i][j]-65].r=i;
			   tab[key[i][j]-65].c=j;
			   
			if(key[i][j]=='I')
			{
				tab[key[i][j]-64].ch='J';
   	   	   	   tab[key[i][j]-64].r=tab['I'-65].r;
			   tab[key[i][j]-64].c=tab['I'-65].c;
			}
			      	
		} 
//	for(int i=0;i<26;i++)
	{
//		cout<<tab[i].ch<<" "<<tab[i].r<<" "<<tab[i].c<<endl;
	}
	cin>>msg;
	for(int i=0;i<msg.length();i++)
		m.push_back(msg.at(i));
	   cout<<"\n---Encryption---\n";	
	for(int i=0;i<m.size();i++)
	{
		   //cout<<tab[m[i]-65].r;
		   //cout<<tab[m[i]-65].c;
		ev.push_back(tab[m[i]-65].r);
		ev1.push_back(tab[m[i]-65].c);
	}
	//cout<<ev1.size();
	for(int i=0;i<ev1.size();i++)
	{
		ev.push_back(ev1[i]);
	}
//		
//cout<<ev.size();
//	for(int j=0;j<ev.size();j++)
	{
//		cout<<ev[j];
	}
//cout<<"\n"<<ev.size();	
	for(int k=0;k<ev.size();k=k+2)
	{
		
		//cout<<ev[i];
	enc.push_back(key[ev[k]][ev[k+1]]);
	//cout<<key[ev[k]][ev[k+1]];
	}
	for(int i=0;i<enc.size();i++)
	{
		cout<<enc[i];
	}
	cout<<"\n---Dencryption---\n";
	for(int i=0;i<enc.size();i++)
	{
		dv.push_back(tab[enc[i]-65].r);
		dv.push_back(tab[enc[i]-65].c);
	}
	int mid=dv.size()/2;
	for(int i=0;i<mid;i++)
	{
		dec.push_back(key[dv[i]][dv[mid+i]]);
	}
	for(int i=0;i<dec.size();i++)
	{
		cout<<dec[i];
	}
	
	return 0;
}