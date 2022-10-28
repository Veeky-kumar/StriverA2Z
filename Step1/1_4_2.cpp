#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int foo(int n){
    if(n==0)return 0;
    return foo(n-1)+n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<foo(5);

    return 0;
}