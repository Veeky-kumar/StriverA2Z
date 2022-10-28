#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={1,3,2,3,4,1,6,4,3};
    int n=sizeof(a)/sizeof(a[0]);
    int ans[n], mx=INT_MIN;
    for(auto &i:a)if(mx<i)mx=i;
    int count[mx+1]={0},possition[mx+1]={0};
// cout<<mx;
    for(int i=0;i<n;i++)
        count[a[i]]++;
    for(int i=0;i<=mx;i++)
        possition[i]=count[i];
    for(int i=1;i<=mx;i++)
        possition[i]+=possition[i-1];
// for(auto &i:possition)cout<<i<<" ";
    for(int i=n-1;i>=0;i--){
        ans[--possition[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    return 0;
}