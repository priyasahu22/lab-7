// Write a C++ program to find power of any number using recursion.
#include<iostream>
using namespace std;
// passing parameters as values so that each time function is call so new value will pass

int func(int i,int n,int a,int k)
 {
  //doing this because power raise to any number is that times it get multiplied:
  k=k*a;
  if(i==n)
 {
  cout<<k;                       
  return 1;
 //this will stop the function here
 }
 else
 {
  i++;
  func(i,n,a,k); 
 return 0;
 }

 }
int main()
{ 
  cout<<" hello :";
  int n,k=1;
  int i=1;
  int a;
  cout<<"\n Enter any number    ";
  cin>>a;
  cout<<"\n till which power you want :\n ";
  cin>>n;
  func(i,n,a,k);
 return 0;

}

   
