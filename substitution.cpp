#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
	string k,msg;
	char w=' ';
	vector<char> enc,dec;
	int i;
	cout<<"Enter the key for plane text(only unique 26 letters)"<<endl;
	cin>>k;
	while(k.length()!=26)
	{
		cin>>k;
	}
	cout<<"Enter the message to encrypt"<<endl;
	cin>>msg;
//	cout<<k;
	
	for(i = 0; i < msg.length(); i++)
      {
         if (msg.at(i) == ' ')
         {
            enc.push_back(w);
         }   
         else
         {
            int j = int(msg.at(i)) - 97;
          enc.push_back(k.at(j));
         }
        
      }
      cout<<endl<<"---Encrypted message---"<<endl;
      
      for(i=0;i<enc.size();i++)
      cout<<enc[i];
  
  	  cout<<endl<<"---Decryption---"<<endl;
  	  for(i=0;i<enc.size();i++)
		{
			if(enc[i]== w)
			{
				printf(" ");
				continue;
			}
			else
			{
				for(int j=0;j<k.length();j++)
				{
					if(enc[i]==k.at(j))
						printf("%c",j+97);
				
				
				}
			}
			
		}
		
	return 0;
}