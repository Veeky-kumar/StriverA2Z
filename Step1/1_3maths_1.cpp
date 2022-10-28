#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=12345,cnt=0;
    // M-1 O(n)
    // while(n){
    //     n/=10;
    //     cnt++;
    // }
    // cout<<cnt;

    // // M-2 O(1)
    // string x=to_string(n);
    // cout<<x.length();

    cout<<floor(log10(n)+1);
    return 0;
}