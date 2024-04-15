#include<iostream>
using namespace std;
bool palindrome(int n)
{int rev=0;
int res=n;
while(res>0)
{
rev=rev*10+(res%10);
res/=10;
}
    if(rev==n)
    return true;
    else
    return false;
}
int main()
{
    cout<<"enter a number = ";
    int a;
    cin>>a;
    if(palindrome(a))
    cout<<"yes it is palindrome";
    else
    cout<<"no it is not a palindrome";
}
