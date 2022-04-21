#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>&v,int n)
{
    cout<<"enter:";
    for(int i=0;i<n;i++)
        cin>>v[i];
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble(vector<int>&v,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
                swap(&v[j],&v[j+1]);
        }
    }
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

int main()
{
    int n;
    cout<<"size=";
    cin>>n;

    vector<int>v(n);
    insert(v,n);
    bubble(v,n);
    print(v,n);
    return 0;
}