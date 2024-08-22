#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"ENTER THE THE SIZE OF ARRAY=";cin>>a;cout<<"\n";
	int arr1[a];

	for(int q=0;q<a;q++)
	{
		cout<<"enter value number "<<q+1<<'=';cin>>arr1[q];
	}
	cout<<"\nValue you entered :)"<<endl;
	for(int w=0;w<a;w++)
	{
		cout<<arr1[w];
	}
	
}