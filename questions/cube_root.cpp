#include<iostream>
using namespace std;

int cube(int l,int h,int n)
{
    int mid;
    while(l<=h)
    {
        mid=l+(h-l)/2;
        if((mid*mid*mid)<=n && ((mid+1)*(mid+1)*(mid+1))>n)
            return mid;
        else if((mid*mid*mid)<n)
        {
            return cube(mid+1,h,n);
        }
        else
        {
            return cube(l,mid,n);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<cube(0,n,n);
}
