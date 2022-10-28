#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int fact(int n){
    if(n==0)return 1;
    return fact(n-1)*n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=5;
    for(int i=1;i<=n;i++)
        cout<<fact(i)<<" ";

    return 0;
}