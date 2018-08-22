#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{	
	int key,i;
	string msg,enc,dec;
	cout<<"Enter the message to be encrypted"<<endl;
	getline(cin,msg);
	cout<<"Enter the key to encrypt"<<endl;
	cin>>key;
	enc=msg;
	char w=' ';
	for(i=0;i<enc.length();i++)
	{		
		if(enc.at(i)>=97 && enc.at(i)<=122){
			if(enc.at(i)+key>122)
				enc.at(i)=enc.at(i)-26;
		}
		else if(enc.at(i)>=65 && enc.at(i)<=90)
		{
			
			if(enc.at(i)+key>90)
				enc.at(i)=enc.at(i)-26;
		}
		else if(enc.at(i)==w)
			continue;
		enc.at(i)+=key;
	}
	cout<<enc<<endl;
	cout<<"----Cryptanalysis---"<<endl;
	
	for(int j=1;j<26;j++){
		dec=enc;
	for(i=0;i<dec.length();i++)
	{
		if(dec.at(i)>=97 && dec.at(i)<=122){
			if(dec.at(i)-j<97)
				dec.at(i)=dec.at(i)+26;
		}
		else if(dec.at(i)>=65 && dec.at(i)<=90)
		{
			
			if(dec.at(i)-j<65)
				dec.at(i)=enc.at(i)+26;
		}
		else if(dec.at(i)==w){
			cout<<" ";
			continue;}
		dec.at(i)-=j;
		
		cout<<dec.at(i);
	}
	cout<<""<<endl;
	}
	return 0;
}