#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>&v,int n)
{
    cout<<"enter:";
    for(int i=0;i<n;i++)
        cin>>v[i];
}

void print(vector<int>v,int n)
{
    cout<<"sorted array=";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection(vector<int>&v,int n)
{
    int mn;
    for(int i=0;i<n-1;i++)
    {
        mn=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[mn]>v[j])
                mn=j;
        }
        if(mn!=i)
            swap(&v[mn],&v[i]);
    }
}

int main()
{
    int n;
    cout<<"size=";
    cin>>n;

    vector<int>v(n);
    insert(v,n);
    selection(v,n);
    print(v,n);
    return 0;
}