#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }

    n++;

    int pos;
    cin>>pos;

    int val;
    cin>>val;

    for(int i=n; i>=pos; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=val;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";

    }



}