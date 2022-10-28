#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int longestArraySum(int a[],int n,int k){
    int ans=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==k)
                ans=max(ans,j-i+1);
        }
    }
    return ans;
// O(n^2)
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={7,1,6,0},k=7;
    int n=sizeof(a)/sizeof(a[1]);
    int ans= longestArraySum(a,n,k);
    cout<<ans<<" \n";
    return 0;
}