#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

int count(vector<int>&v,int k){
    int lo=0,hi=v.size()-1,mid,f,l,r;//l->last, f->first
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(v[mid]==k){
            r=mid;
            hi=mid-1;
        }else if(v[mid]>k)
            hi=mid-1;
        else 
            lo=mid+1;
    }
    if(v[lo]==k)f=lo;
    else f=r;
    lo=0;hi=v.size()-1;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(v[mid]==k){
            r=mid;
            lo=mid+1;
        }else if(v[mid]>k)
            hi=mid-1;
        else lo=mid+1;
    }
    if(v[lo]==k)l=lo;
    else l=r;
    int result=abs(l-f);
    return result+1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v{2,4,10,10,10,18,20};
    int k;cin>>k;
    cout<<count(v,k);
    return 0;
}