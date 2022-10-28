#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int findMissing(int a[],int n){
    // int h[n+2]={0},ans;
    // for(int i=0;i<n;i++)h[a[i]]++;
    // for(int i=1;i<n+2;i++)
    //     if(h[i]==0){
    //         ans=i;break;
    //     }
    // return ans;

    int h[n]={0},ans;
        for(int i=0;i<n;i++)
            h[a[i]-1]=1;
        for(int i=0;i<n;i++)
            if(h[i]==0)ans=i+1;
        return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]= {1, 2, 4, 6, 3, 7, 8};
    int n=sizeof(a)/sizeof(a[0]);
    int ans=findMissing(a,n+1);
    cout<<ans;

    return 0;
}