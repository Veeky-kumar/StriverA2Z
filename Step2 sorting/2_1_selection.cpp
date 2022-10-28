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
        int mini=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[mini])mini=j;
        swap(a[mini],a[i]);
    }
    for(auto &i:a)cout<<i<<" ";
    return 0;
}