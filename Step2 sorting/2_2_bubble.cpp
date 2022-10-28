#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={13,46,24,52,20,9};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){swap(a[j+1],a[j]);}
        }
    }
    for(auto &i:a)cout<<i<<" ";

    return 0;
}