//q2= Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int binary_search(vector<int>v,int key,int &comp)
{
    int l=0,h=v.size()-1,mid;
    int f=0;
    while(l<=h)
    {
        mid=(l+(h-l)/2);
        if(v[mid]==key){
            f=1;
            comp++;
            break;
        }
        else if (v[mid]<key)
            l=mid+1;
        else
            h=mid-1;
        comp++;
    }
    return f;
}  

void solve()
{
    int n;
    cout<<"no of elements:";
    cin>>n;
    vector<int>v(n);
    int i;

    cout<<"enter:";
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int key;
    cout<<"enter key:";
    cin>>key;

    int comp=0;
    int f=binary_search(v,key,comp);

    if(f==1)
    {
        cout<<"found\ncomparisons="<<comp;
    }
    else
    {
        cout<<"not found\ncomparisons="<<comp;
    }
    cout<<endl;
}

int main()
{
    int t;
    cout<<"no of testcases:";
    cin>>t;
    while(t--)
    {
        solve();
    }
}