 //Write a C++ program to find  any number is palindrome or not
 #include<iostream>
 using namespace std;
 // passing parameters as values so that each time function is call so new value is passing within the same function.

 int func(int i,int n,int k,int &c/*this call by reference because this c we have to use again in the main)*/)
 {
	k=n%10;
   
  if(n==0)
 {
   return 1;
 }
 else
 {
  
  i++;
  cout<<k;
  c=c*10+k;//storing the number in c
  n=n/10;
  func(i,n,k,c);
  
 return 0; 
 }
 }
 int main()
 { 
  cout<<" hello :";
  int n,i=0,k,c=0;
  
  cout<<"\n Enter any number to which you want to reverse:  ";
  cin>>n;
  cout<<"\n the reverse of the number  is:";
  
  func(i,n,k,c);
  cout<<"  "<<c;
 if(c==n)
 {
  cout<<"\n yes the number is palindrome:";
  
 }
 else
 {
   cout<<"no. is not palindrome:";
 }

  
  
 return 0;



 }

