#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t>0)
 {
    int n,i;
    cin>>n;
    int key,c=0,d;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            c++;
            d=i;
        }

    }
    cout<<arr[d]<<"-"<<c<<endl;
    t--;
 }
}
