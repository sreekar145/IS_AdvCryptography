#include<bits/stdc++.h>
using namespace std;
struct data
{
	char ch;
	int r,c;	
};

int main(int argc, char** argv)
{
	
	char key[5][5]={{'A','B','C','D','E'},{'F','G','H','I','K'},{'L','M','N','O','P'},{'Q','R','S','T','U'},{'V','W','X','Y','Z'}};
	string msg; 
	char z='Z';
	vector<char> m,enc,edc;
	//key[4][4]=(char)90;
/*	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			printf("%d ",key[i][j]);*/
	data tab[26],f,l,temp;
	int k=0;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
				tab[k].ch=key[i][j];
			   tab[k].r=i;
			   tab[k].c=j;
			   k++;	
			if(key[i][j]=='I')
			{
				tab[k].ch='J';
   	   	   	   tab[k].r=i;
			   tab[k].c=j;
			   k++;	
			}
			      	
		}
		cout<<"Enter the message to encrypt"<<endl;
		cin>>msg;
	//	cout<<msg.length();
		for(int i=0;i<msg.length();i++)
		{
			char temp=msg.at(i);
			m.push_back(temp);
			if((i+1<msg.length())&&(msg.at(i+1)==msg.at(i)))
				m.push_back('X');
		}
		if(m.size()%2==1)
			m.push_back(z);
		//for(int i=0;i<m.size();i=i+1)
		//	cout<<m[i];
		cout<<"---Encryption---\n";
		for(int i=0;i<m.size();i=i+2)
		{
			f.ch=m[i];
			l.ch=m[i+1];
			for(int j=0;j<26;j++)
			{
				if(tab[j].ch==f.ch)
				{
					f.r=tab[j].r;
					f.c=tab[j].c;
				}
				else if((tab[j].ch==l.ch))
				{
					l.r=tab[j].r;
					l.c=tab[j].c;
				}
			}
			if(f.r!=l.r && f.c!=l.c)
			{
				temp=f;
				f=l;
				l=temp;
				if(m[i]==f.ch)
				{
					   cout<<key[f.r][l.c]<<key[l.r][f.c];	
				}
				else
				{
					 cout<<key[l.r][f.c]<<key[f.r][l.c];
				}
				
			}
			if(f.r==l.r)
			{
				cout<<key[(f.r+1)%5][f.c]<<key[(l.r+1)%5][l.c];
			}
			if(f.c==l.c)
			{
				cout<<key[f.r][(f.c+1)%5]<<key[l.r][(l.c+1)%5];
			}
			
		}
/*	for(int i=0;i<26;i++)
		cout<<tab[i].ch<<" "<<tab[i].r<<" "<<tab[i].c<<endl;*/
	return 0;
}