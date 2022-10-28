#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=36;
    // M-1 O(n)
    // for(int i=1;i<=n;i++){
    //     if(n%i==0)cout<<i<<" ";
    // }

    // M-2
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n%i)cout<<n/i<<" ";
        }
    }
    return 0;
}