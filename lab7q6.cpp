 //Write a C++ program to find reverse of any number using recursion.
 #include<iostream>
 using namespace std;
 // passing parameters as values so that each time function is call so new value will pass

 int func(int i,int n,int k)
 {
	k=n%10;// for remainder
   
  if(n==0)
 {
   return 1;
 }
 
 else
 {
  i++;
  cout<<k;
  n=n/10; 
  func(i,n,k);
  
 return 0; 
 }
 }
 int main()
 { 
  cout<<" hello :";
  int n,i=0,k;
  
  cout<<"\n Enter any number to which you want to reverse:  ";
  cin>>n;
  cout<<"\n the reverse of the number  is:  ";
  func(i,n,k);
  
  
 return 0;


 }

