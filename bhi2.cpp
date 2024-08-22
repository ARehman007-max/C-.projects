#include<iostream>
using namespace std;
int main()
{
	int a,fact=1;
	cout<<"ENTER ANY NO FOR FACTOR=";
	cin>>a;
	for(int b=1; b<=a ; b++)
{
	fact=fact*a;
}
cout<<"factor="<<fact<<endl;
}
