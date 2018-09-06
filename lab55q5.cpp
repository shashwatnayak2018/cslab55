/*
*****
 *****
  *****
   *****
    *****
*/
//library 
#include<iostream>
using namespace std;
//function
int main()
{
	int n=5;
	for(int i=0;i<n;i++)
	{
		//print k spaces
		for(int k=0;k<i;k++)
		{
			cout<<" ";
		}	
		//print n stars
		for(int k=0;k<n;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
