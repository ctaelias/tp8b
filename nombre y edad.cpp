#include<iostream>
using namespace std;

int main()
{
	string nom[4];
	int edad[4],i;
	for(i=0;i<4;i++)
	{
		cout<<"Ingrese su nombre:"<<endl;
		cin>>nom[i];
		cout<<"Ingrese su edad: "<<endl;
		cin>>edad[i];
	}
	for(i=0;i<4;i++)
	{
		cout<<"la edad de "<<nom[i]<<" es "<<edad[i]<<endl;
	}
	
	return 0;
}
