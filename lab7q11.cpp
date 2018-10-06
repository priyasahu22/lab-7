// Write a C++ program to generate nth Fibonacci term using recursion.
#include<iostream>
using namespace std;

int func(int n)
{
 
 if(n==1)
{
 return 0;
}
if (n==2)
{
 return 1;
}
else 
{



return func(n-2)+func(n-1);
}

}
int main()
{
 int n;
cout<<"\n enter the term u want to print:  ";
cin>>n;

cout<<" \n the term will got:"<<
func(n);
return 0;
}
