#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int linear(int arr[],int n,int key)
{

    for(int i=0;i<n;i++)
    {

        if(arr[i]==key)
            return 1;
    }
    return n;
}
int main()
{

  int t;
  cin>>t;
  while(t--)
  {
    int key,n,flag;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>key;
    flag=linear(arr,n,key);
    if(flag==1)
        cout<<"key found";
    else
        cout<<"not found";

  }
  return 0;
}
