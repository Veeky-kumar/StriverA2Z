#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=153,sum=0;
    int s=floor(log10(n)+1),nn=n,temp;
    while(nn){
        temp=nn%10;
        sum+=pow(temp,s);
        nn/=10;
    }
    if(sum==n)cout<<"T "<<sum;
    else cout<<"N "<<sum;

    return 0;
}