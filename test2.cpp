#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout<<"enter the size of rows =";cin>>a;
	cout<<"enter the size of column =";cin>>b;
	int wild[a][b];
	cout<<"\n Enter values in array :)"<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cin>>wild[i][j];
		}
		cout<<endl;
	}
	cout<<"\n  values in array :)"<<endl;
	cout<<"|---------|"<<endl;
	for(int k=0;k<a;k++)
	{
		for(int l=0;l<b;l++)
		{
			cout<<"|";cout<<wild[k][l];cout<<"  |";
			
		}
			cout<<endl;			
	}
	cout<<"|---------|"<<endl;

	
}