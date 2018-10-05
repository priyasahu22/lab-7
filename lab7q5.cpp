
#include<iostream>
using namespace std;
// passing parameters as values so that each time function is call so new value will pass

int func(int i,int n,int sum)
{
	//cout<<i<<endl;
	if(i==n)
	{
        cout<<"\n EVEN SUM: ";
        cout<<sum;
		return 1;
		//this will stop the function here
	}
	else
	{
		i++;
		if(i%2==0)
		{
            sum=sum+i;
			cout<<i;
			
		} 
		else
		{
			cout<<" ";	
		}
		func(i,n,sum);
		return 0;
	}

}
int main()
{ 
  cout<<" hello :";
  int n,sum=0;
  int i=1;
  cout<<"\n Enter any number to where you want to stop:  ";
  cin>>n;
  cout<<"\n sum of number from 1 to n:\n ";
  func(i,n,sum);
 return 0;

}

