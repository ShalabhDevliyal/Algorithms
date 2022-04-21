// q3=Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on. Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key. (Complexity < O(n), where n is the number of elements need to be scanned for searching):      Jump Search

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int jump_search(vector<int>v,int key)
{
    int i,j,temp;
    
    if(v[0]==key||v[1]==key)
        return 1;
    
    else if((key<v[0]) && (key>v[v.size()-1]))
        return 0;
    
    else
    {
        for(i=2;i<v.size();i*=2)
        {
            // cout<<i<<" "; 
            if(v[i]==key)
                return 1;
            else 
            {
                temp=i*2;
                if(v.size()<=(i*2))
                    temp=v.size();
                
                if((key<=v[temp-1]))
                {
                    // cout<<endl;
                    for(j=i+1;j<temp;j++)
                    {
                        // cout<<j<<" ";
                        if(v[j]==key)
                            return 1;
                    }
                }
            }
        }
        return 0;
    
    }
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
    int f=jump_search(v,key);

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
