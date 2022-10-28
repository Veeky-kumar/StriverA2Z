#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=234;
    int s=floor(log10(n)+1);
    int p1=0,p2=s-1,temp=0;
    while(n){

       temp= temp*10+n%10;
        n/=10;
    }
    cout<<temp;
    return 0;
}