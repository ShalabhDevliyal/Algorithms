#include<iostream>
using namespace std;

void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int maximum(int *arr,int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}

void count(int *arr,int n)
{
    int max=maximum(arr,n);
    max++;

    int b[max];
    for(int i=0;i<max;i++)
        b[i]=0;
    cout<<"initialised b array with 0=";
    print(b,max);
    for(int i=0;i<n;i++)
    {
        b[arr[i]]++;
    }
    cout<<"using original array element as index and storing freq. there=";
    print(b,max);
    for(int i=1;i<max;i++)
    {
        b[i]+=b[i-1];
    }
    cout<<"cumulative addition=";
    print(b,max);
    int c[n];
    for(int i=n-1;i>=0;i--)
    {
        c[b[arr[i]]-1]=arr[i];
        b[arr[i]]--;
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=c[i];
    }
}

int main()
{
    int n=10;
    cout<<"enter size=";
    cin>>n;

    int arr[n];
    cout<<"enter elements=";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"original array=";
    print(arr,n);
    count(arr,n);
    cout<<endl<<"final sorted array=";
    print(arr,n);
}