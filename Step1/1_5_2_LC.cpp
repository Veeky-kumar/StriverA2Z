#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Solution{
public:
    int maxFrequency(vector<int>&nums, int k){
        sort(nums.begin(),nums.end());
        int cnt=0,l=0,h=nums.size()-1;
        while(l<h){
            int mid=
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution ob;
    vector<int> v={1,4,8,13};
    int k=5;
    cout<<ob.maxFrequency(v,k);
    return 0;
}