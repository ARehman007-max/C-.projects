#include<iostream>
using namespace std;
int main()
{
	int array[6];
	cout<<"Please enter 6 nubers :)\n";
	for(int a=0;a<6;a++)
	{
		cin>>array[a];
	}
	cout<<array[0]<<"|"<<array[1]<<"|"<<array[2]<<"|"<<array[3]<<"|"<<array[4]<<"|"<<array[5]<<"|";
}