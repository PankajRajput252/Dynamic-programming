#include<bits/stdc++.h>
using namespace std;
int a[1000];
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1; 
    }
    if(a[n]!=-1)
    {
        return a[n];  //this wil save the previous calculated value
    }
    return (a[n]=n*fact(n-1));
     
}
int main()
{ 
    int n;
    cout<<"Enter number."<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        a[i]=-1;
    }
     cout<<fact(n);
}    