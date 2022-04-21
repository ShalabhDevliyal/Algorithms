#include<iostream>
#include<vector>
using namespace std;
void insert(vector<int>&v,int n)
{
    cout<<"enter:";
    for(int i=0;i<n;i++)
        cin>>v[i];
    
}

void print(vector<int>v)
{
    cout<<"array=";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort(vector<int>&v)
{
    int k,j;
    for(int i=1;i<v.size();i++)
    {
        k=v[i];
        j=i-1;
        while(j>=0)
        {
            if(v[j]>k)
            {
                v[j+1]=v[j];
                j--;
            }
            else
                break;
        }
        if(v[j+1]!=k)
            v[j+1]=k;
        
    }
}

int main()
{
    int n;
    cout<<"size=";
    cin>>n;
    vector<int>v(n);
    insert(v,n);
    insertion_sort(v);
    print(v);
}