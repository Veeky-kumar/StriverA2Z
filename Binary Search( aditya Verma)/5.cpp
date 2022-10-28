#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

vector<int> solve(vector<int>&a,int k){
    int lo=0,hi=a.size()-1,mid,r=-1;
    vector<int>ans(2);
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(a[mid]==k){
            hi=mid-1;
            r=mid;
        }else if(a[mid]<k)
            lo=mid+1;
        else 
            hi=mid-1;
    }ans[0]=r;
    lo=0;hi=a.size()-1;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(a[mid]==k){
            r=mid;
            lo=mid+1;
        }else if(a[mid]<k)
            lo=mid+1;
        else
            hi=mid-1;
    }ans[1]=r;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>a{3,4,5,5,5,8,8,9};
    int k=5;
    vector<int> ans=solve(a,k);
    for(auto &i:ans)cout<<i<<" ";
    return 0;
}