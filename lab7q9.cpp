// Write a C++ program to find factorial of any number using recursion.
#include<iostream>
using namespace std;
int func(int i, int p )
{
   p=p*i;// multlying the no. by previous stored result
         // that is 4 factorial 4*3*2*1

 
  if(i==1)
{
  cout<<p;
  return 1;
}
else
{
  i--;
 func(i,p);
  
return 0;
}
}
int main()
{
   int i,p=1,n;
  
  cout<<"enter the number of which factorial you want: ";
  cin>>n;
  i=n;
  cout<<"\nFactorial of the number is: ";
  func(i,p);
return 0;
}
