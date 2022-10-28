#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

void solve(int a[],int n){
    int cur=a[0],j=1;
    while(j<n){
        a[j-1]=a[j];
        j++;
    }
    a[n-1]=cur;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"\n";
}
void solve2(int a[],int n){
    int temp[n];
    for(int i=1;i<n;i++)
        temp[i-1]=a[i];
    temp[n-1]=a[0];
    for(auto &i:temp)cout<<i<<" ";
}
void solve3(int a[],int n){
    int cur=a[0];
    for(int i=0;i<n-1;i++)
        a[i]=a[i+1];
    a[n-1]=cur;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    solve3(a,n);
    // for(auto &i:a)cout<<i<<" ";

    return 0;
}