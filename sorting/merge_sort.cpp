#include<iostream>
#include<vector>
using namespace std;

void input(vector<int>&v,int n)
{
    cout<<"enter:";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
}

void print(vector<int>v,int n)
{
    cout<<"sorted vector using merge sort:";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
void merge(vector<int>&v,int l,int h,int mid)
{
    int i=l,j=mid+1;
    vector<int>v1;
    
    while(i<=mid && j<=h)
    {
        if(v[i]<=v[j])
            v1.push_back(v[i++]);
        else
            v1.push_back(v[j++]);
    }
    while(i<=mid)
        v1.push_back(v[i++]);
    while(j<=h)
        v1.push_back(v[j++]);
    
    j=0;
    for(i=l;i<=h;i++)
    {
        v[i]=v1[j++];
    }

}
void mergesort(vector<int>&v,int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=l+(h-l)/2;
        mergesort(v,l,mid);
        mergesort(v,mid+1,h);
        merge(v,l,h,mid);
    }
}
int main()
{
    cout<<"enter size of vector:";
    int n;
    cin>>n;
    vector<int>v(n);
    
    input(v,n);
    mergesort(v,0,n-1);
    print(v,n);
}