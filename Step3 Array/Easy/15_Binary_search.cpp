#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int binarySearch(vector<int>&v,int l,int h,int k){
     while(l<=h){
        int mid=(l+h)/2;
        if(k==v[mid])
            return mid;
        else if(k<v[mid])
            h=mid-1;
        else 
            l=mid+1;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    int k;cin>>k;
// M-1
    // int l=0,h=n-1;
    // int result=binarySearch(v,l,h,k);
    // (result==-1)?cout<<"Not found":cout<<"index ="<<result;

// M-2
    int hi=n-1,lo=0,mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(v[mid]<k)
            lo=mid+1;
        else
            hi=mid;
    }
    if(v[hi]==k)cout<<hi;
    else if(v[lo]==k)cout<<lo;
    else cout<<"Not found";
    return 0;
}