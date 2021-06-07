#include<bits/stdc++.h>
using namespace std;
int a[1000];
int fib(int n)
{
    if(n==1)
    {
        return 0; 
    }
    if(n==2)       
    {
        return 1;
    }
    if(a[n]!=-1)
    {
        return a[n];  //this wil save the previous calculated value
    }
    return (a[n]=fib(n-1)+fib(n-2));
     
}
int main()
{ 
    int n;
    cout<<"Enter positon of fibnocii  "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)   //assigning array with -1 value
    {
        a[i]=-1;
    }
     cout<<fib(n);
}    