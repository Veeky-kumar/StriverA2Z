#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

// vector<int> 

vector<int> rev(vector<int> &v,int i,int j){
    if(i>j)return v;
    swap(v[i],v[j]);
    rev(v,i+=1,j-1);
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v{5,4,3,2,1};
    v=rev(v,0,v.size()-1);
    for(auto &i:v)cout<<i<<" ";
    return 0;
}