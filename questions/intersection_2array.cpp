#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void intersection(vector<int>v1,vector<int>v2)
{
    int n=v1.size(),m=v2.size();
    int i=0,j=0;

    while(i<n && j<m)
    {
        if(v1[i]<v2[j])
            i++;
        else if(v1[i]>v2[j])
            j++;
        else
        {
            cout<<v1[i];
            i++;
            j++;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;

    vector<int>v1(n),v2(m);

    for(int i=0;i<n;i++)
        cin>>v1[i];

    for(int i=0;i<m;i++)
        cin>>v2[i];

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    intersection(v1,v2);

}