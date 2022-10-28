#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

bool searchMatrix(vector<vector<int>> &v,int t){
    bool ans=false;
    for(vector<int> vect1d:v){
        for(int x:vect1d){
            if(x==t)ans=true;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>v{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int t=3;
    // for(int i=0;i<v.size();i++){
    //     for(int j=0;j<v[i].size();j++)
    //         cout<<v[i][j]<<" ";
    //     cout<<"\n";
    // }
    
    // for(vector<int> vect1D:v){
    //     for(int x:vect1D)
    //         cout<<x<<" ";
    //     cout<<"\n";
    // }

    // for(auto vv:v){
    //     for(int x:vv)
    //         cout<<x<<" ";
    //     cout<<"\n";
    // }
    bool ans=searchMatrix(v,t);
    cout<<(ans?"true":"false");
    return 0;
}