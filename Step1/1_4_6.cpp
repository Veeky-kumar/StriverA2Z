#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int fibo(int n){
    if(n<=1)return n;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=4;
    // M-1
    // int f[n+1];f[0]=0,f[1]=1;
    // if(n==0)cout<<f[0]<<" ";
    // else if(n==1)
    // cout<<f[0]<<" "<<f[1]<<" ";
    // else{ 
    // for(int i=2;i<=n;i++){
    //     f[i]=f[i-1]+f[i-2];
    // }
    // for(int i=0;i<=n;i++)cout<<f[i]<<" ";
    // }

    // M-2
    // if(n==0)cout<<0;
    // else{
    //     int last=1,slast=0,cur;
    //     cout<<slast<<" "<<last<<" ";
    //     for(int i=2;i<=n;i++){
    //         cur=last+slast;
    //         slast=last;
    //         last=cur; 
    //         cout<<cur<<" ";
    //     }
    // }

    // M-3
    cout<<fibo(n);
    // getchar();

    return 0;
}