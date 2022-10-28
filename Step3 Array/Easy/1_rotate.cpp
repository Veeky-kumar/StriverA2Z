#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Solution{
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        // for(int i=0;i<k;i++){
        //     int cur=nums[n-k+i];
        //     int j=n-k+i;
        //     while(j>0){
        //         nums[j]=nums[j-1];
        //         j--;
        //     }
        //     nums[i]=cur;
        // }
        // for(int i=0;i<nums.size();i++)cout<<nums[i]<<" ";

        // vector<int>v(n);
        // for(int i=0;i<k;i++){
        //     v[i]=nums[n-k+i];
        // }
        // for(int i=k,j=0;i<n;j++,i++)
        //     v[i]=nums[j];
        // for(int i=0;i<nums.size();i++)cout<<v[i]<<" ";
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution ob;
    vector<int>v{1,2,3,4,5,6,7};
    int k=3;
    ob.rotate(v,k);

    return 0;
}