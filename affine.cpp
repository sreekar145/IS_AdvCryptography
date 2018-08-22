#include<bits/stdc++.h>
using namespace std;

int modInverse(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
}

int main(int argc, char** argv)
{
	int a,b;
	vector<char> enc,dec;
	string msg;
	cout<<"Enter the values of keys(a,b) to encrypt the plane text:";
	cin>>a>>b;
	while(__gcd(a,26)!=1)
	{
		cout<<"\nReenter value of 'a' such that gcd(a,26)==1"<<endl;
		cin>>a;
	}
	b=b%26;
	cout<<"\n Enter the plane text";
	cin>>msg;
	cout<<"\n---Encryption---\n";
	for(int i=0;i<msg.length();i++)
	{
		char c;
		c=((((a*(msg.at(i)-65))+b)%26)+65);
		//cout<<(a*(msg.at(i)-65))+b<<" ";
		enc.push_back(c);
	}
	for(int i=0;i<enc.size();i++)
		cout<<enc[i];
	cout<<"\n---Decryption---\n";
		int ainv=modInverse(a, 26);
	for(int i=0;i<enc.size();i++)
	{
		char c;
		c=((ainv*(enc[i]-65-b)%26)+65);
		//c=((ainv*(enc[i]+65-b)%26)+65);
		cout<<(ainv*(enc[i]+65-b)%26)<<" ";
		dec.push_back(c);
		
	}
	for(int i=0;i<enc.size();i++)
		cout<<dec[i];
	
	return 0;
}