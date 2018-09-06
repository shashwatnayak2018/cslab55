/*
*****
*   *
*   *
*   *
*****
*/ 
//library
#include<iostream>
using namespace std;
//function
int main()
{
	//print stars
	for(int i=0;i<5;i++)
	{
		//print stars
		if(i==0 || i==4)
		{
			//cout<<"*****";
			for(int j=0;j<5;j++)
			{
				cout<<"*";
			}
		}
		//print star spaces star
		else
		{
			//print star
			cout<<"*";
			//print spaces
			for(int k=0;k<3;k++)
			{
				cout<<" ";
			}
			//print stars
			cout<<"*";
		}
		cout<<endl;
	} 
	return 0;
}
