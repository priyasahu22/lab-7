 //Write a C++ program to find sum of digit of number using recursion.
 #include<iostream>
  using namespace std;
 // passing parameters as values so that each time function is call so new value will pass

 int func(int i,int n,int k,int sum)
 {
  k=n%10; // remainder of the numbers
   
  if(n==0)
 { 
   cout<<"sum of the digit is:  "<<sum;
   return 1;
 }
 else
 {
  i++;
  sum=sum+k;
  n=n/10;
  func(i,n,k,sum);
  
 return 0; 
 }
 }
 int main()
 { 
  cout<<" hello :";
  int n,i=0,k,sum=0;
  
  cout<<"\n Enter any number to which you want the sum of the digit: ";
  cin>>n;
  
  func(i,n,k,sum);
  
  
 return 0;


 }

