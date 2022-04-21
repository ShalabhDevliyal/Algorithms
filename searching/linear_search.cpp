// q1=Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)

#include<iostream>
#include<vector>
using namespace std;

int linear_search(vector<int>v,int key)
{
    int i;
    int f=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==key)
        {
            f=1;
            break;
        }
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

    int key;
    cout<<"enter key:";
    cin>>key;
    int f=linear_search(v,key);

    if(f==1)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
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