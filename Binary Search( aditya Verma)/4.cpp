#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/
int check(vector<int>&a){
    int ans=1;
    if(a.size()==1) 
        return ans;
    for(int i=1;i<a.size();i++)
        if(a[i]<a[i-1]){
            ans=0;
            break;
        }
    return ans;
}

int solve(vector<int>&a,int k){
    int r=check(a);
    if(r){
        int lo=0,hi=a.size()-1,mid;
        while(hi-lo>1){
            mid=lo+(hi-lo)/2;
            if(a[mid]<k)
                lo=mid+1;
            else    
                hi=mid;
        }
        int ans;
        if(a[lo]==k)ans=lo;
        if(a[hi]==k)ans=hi;
        return ans;
    }else{
        int lo=0,hi=a.size()-1,mid;
        while(hi-lo>1){
            mid=lo+(hi-lo)/2;
            if(a[mid]>k)
                lo=mid+1;
            else 
                hi=mid;
        }
        int ans;
        if(a[lo]==k)ans=lo;
        if(a[hi]==k)ans=hi;
        return ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>a{20,17,15,14,13,12,10,9,8,4};
    vector<int>b{3,4,5,5,5,8,8,9};
    int k=4,l=8;
    // cout<<solve(a,k)<<"\n";
    cout<<solve(b,l);

    return 0;
}