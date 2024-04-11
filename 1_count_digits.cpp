#include<iostream>
using namespace std;
int count_digits(int n)
{int count =0;
while(n>0)
{
n=n/10;
count++;}
return count;
}
int main()
{cout<<"enter a number to count = ";
int a ;
cin>>a;
cout<<"total digits are = "<<count_digits(a);}