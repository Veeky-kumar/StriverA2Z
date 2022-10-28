#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int solve(vector<int>nums){
    int l=0,mx=0;
    // I took a wrong approach
    // vector<int>ans(nums.size()); 
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1)l++;
        else{
            // ans.push_back(l);
            l=0;
        }
        mx=max(mx,l);
    }
    // ans.push_back(l);
    // int x=-1;
    // for(auto &i:ans)if(x<i)x=i;
    return mx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums={1,1,0,1,1,1};
    int ans=solve(nums);
    cout<<ans;

    return 0;
}