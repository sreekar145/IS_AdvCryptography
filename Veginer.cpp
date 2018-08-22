#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
	int i,j=0;
	string msg,key,dec,enc;
	cout<<"Enter the key for vegenier cipher"<<endl;
	cin>>key;
	cout<<"Enter the text to encrypt"<<endl;
	cin>>msg;
	enc=msg;
	
	for(i=0;i<enc.length();i++)
	{
		j=j%(key.length());
		if(enc.at(i)-96+key.at(j)-96>26)
		{
			enc.at(i)-=26;
		}
		enc.at(i)=enc.at(i)-96+key.at(j);
		j++;
	}
	cout<<"---Encrypted message---"<<endl;
	cout<<enc<<endl;
	cout<<"---Decrypting---"<<endl;
	dec=enc;
	
	j=0;
	for(i=0;i<dec.length();i++)
	{
		j=j%(key.length());
		if(dec.at(i)-key.at(j)<=97)
		{
			dec.at(i)+=26;
		}
		dec.at(i)=dec.at(i)+96-key.at(j);
		j++;
	}
	cout<<msg;
	return 0;
}