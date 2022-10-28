#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=3;
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i!=0)flag=false;
    }
    if(flag)cout<<"P";
    else cout<<"NP";

    return 0;
}