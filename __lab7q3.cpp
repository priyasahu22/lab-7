
#include<iostream>
using namespace std;
// passing parameters as values so that each time function is call so new value will pass

int func(int i,int n)
{
	//cout<<i<<endl;
	if(i==n)
	{
		return 1;
		//this will stop the function here
	}
	else
	{
		i++;
		if(i%2==0)
		{
			cout<<i;
			
		} 
		else
		{
			cout<<" ";	
		}
		func(i,n);
		return 0;
	}

}
int main()
{ 
  cout<<" hello :";
  int n;
  int i=1;
  cout<<"\n Enter any number to where you want to stop:  ";
  cin>>n;
  cout<<"\n number from 1 to n:\n ";
  func(i,n);
 return 0;

}

   

