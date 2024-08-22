#include<iostream>
using namespace std;
int main()
{
	int base ,exp,power=1;
	cout<<"ENTER THE VALUE OF BASE=";
	cin>>base;
	cout<<"ENTER NO FOR EXP=";
	cin>>exp;
	for(int a=1;a<=exp;a++)
	{
		power=power*base;
	
	}
	cout<<"power of base="<<power<<endl;
}
