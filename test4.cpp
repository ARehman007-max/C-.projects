#include<iostream>
using namespace std;
void sum(int ,int);
int main()
{
	cout<<"sum of two number :)"<<endl;
    int a;
    int b;
    cout<<"enter first value =";cin>>a;
    cout<<"enter secand value =";cin>>b;
    sum(a,b);
    
}
void sum(int i,int j)
{
	int add;
	add=i+j;
	cout<<"sum of two numbers="<<add;
	
}