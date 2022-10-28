#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=122;
    int nn=n,temp=0;
    while(nn){
        temp=temp*10+nn%10;
        nn/=10;
    }
    if(temp==n)cout<<"T"<<temp;
    else cout<<"N"<<temp;
    return 0;
}