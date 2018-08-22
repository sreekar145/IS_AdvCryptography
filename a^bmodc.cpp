#include<bits/stdc++.h>
using namespace std;
void ModCalc(long a,long b,long c)
{
	long n=b,res=1;
    vector<int> bin,store;
    int i = 0;
    while (n > 0) {
        bin.push_back(n % 2);
        n = n / 2;
        i++;
    }
  //  for(int i=0;i<bin.size()/2;i++)
	{
	//	int t= bin[i];
	//	bin[i]=bin[bin.size()-1-i];
	//	bin[bin.size()-1-i]=t;
			
	}
    
	store.push_back(a);
	
    for (int j =1 ; j<bin.size() ; j++)
	{
		store.push_back((store[j-1]*store[j-1])%c);
	}
	
 	for (int j =0 ; j <store.size(); j++)
	 {
	 	if(bin[j]==1)
	 	res=(res*store[j])%c;
	 }
	 cout<<res<<endl;
}
int main(int argc, char** argv)
{
	long a,b,c;
	cout<<"enter values of A,B,C to compute A^B mod C:"<<endl;
	cin>>a>>b>>c;
	ModCalc(a,b,c);
	return 0;
}