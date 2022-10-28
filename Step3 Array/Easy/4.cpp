#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;
int hash[N];

int dup(int a[],int n){
    set<int>s;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    int k=s.size();
    int j=0;
    for(int x:s)
        a[j++]=x;
    return k;
}
int removeDup(int a[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(a[i]!=a[j])
            a[++i]=a[j];
    }
    return i+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={1,1,2,2,2,3,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    // int k=dup(a,n);
    // for(auto &i:a)cout<<i<<" ";

    // M-2 two pointer
    int unique= removeDup(a,n);
    cout<<unique<<"\n";
    for(int i:a)cout<<i<<" ";

    return 0;
}