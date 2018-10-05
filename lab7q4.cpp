// Write a C++ program to print all natural numbers between 1 to n using recursion.
#include<iostream>
using namespace std;
// passing parameters as values so that each time function is call so new value will pass

int func(int i,int n,int sum)
 {

   sum=sum+i;
  if(i==n)
 {
  cout<<" "<<sum;
  return 1;
 //this will stop the function here
 }
 else
 {
  i++;
  func(i,n,sum); 
 return 0;
 }
 
 }
int main()
{ 
  cout<<" hello :";
  int n,sum=0;
  int i=1;
  cout<<"\n Enter any number till where you want the sum:  ";
  cin>>n;
  cout<<"\n sum of number from 1 to n:\n ";
  func(i,n,sum);
 return 0;

}
