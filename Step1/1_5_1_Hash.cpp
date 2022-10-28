#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

void freq(int n,int a[]){
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)map[a[i]]++;
    for(auto &i:map)
        cout<<i.first<<" "<<i.second<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={10,5,10,15,10,5};
    int n=sizeof(a)/sizeof(a[0]);

// M-1
    // bool chk[n]={false};
    // for(int i=0;i<n;i++){
    //     if(chk[i]==true)
    //         continue;
    //     int cnt=1;
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]==a[j]){
    //             cnt++;
    //             chk[j]=1;
    //         }
    //     }
    //     cout<<a[i]<<" "<<cnt<<"\n";
    // }

// M-2
    freq(n,a);

    return 0;
}