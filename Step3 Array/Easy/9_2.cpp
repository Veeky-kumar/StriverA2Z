#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector < int > a {1,2,3,3,4,5,6,7};
    vector < int > b {3,3,4,4,5,8};
// M-1 O(n);
    // int i=0,j=0;
    // while(i<a.size()&&j<b.size()){
    //     if(a[i]<b[j]){
    //         ++i;
    //     }
    //     else if(a[i]==b[j]){
    //         ans.push_back(b[j]);
    //         ++i;++j;
    //     }else{
    //         j++;
    //     }
    // }
    // for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";

// M-2 
    vector<int>ans;
    vector<int>visited(b.size(),0);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]&&visited[i]==0){
                ans.push_back(b[j]);
                visited[j]=1;
                break;
            }else if(b[j]>a[i]){
                break;
            }
        }
    }
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";


    return 0;
}