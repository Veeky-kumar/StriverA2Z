#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int gcd(int a,int b){
    if(a%b==0)return b;
    return gcd(a,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a=4,b=8;
    cout<<gcd(b,a);

    return 0;
}