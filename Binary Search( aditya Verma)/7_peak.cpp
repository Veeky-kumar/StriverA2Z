#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

int peakElement(vector<int>&v){
    int lo=0,hi=v.size()-1,mid, r;
    while(lo<hi){
        mid=(hi+lo)/2;
        if(mid==0)
            return v[mid]>v[mid+1]?v[mid]:v[mid+1];
        if(mid==v.size()-1)
            return v[v.size()-1]>v[v.size()-2]?v[v.size()-1]:v[v.size()-2];
        if(v[mid]>v[mid-1] && v[mid]>v[mid+1])
            return v[mid];
        
        if(v[mid-1]>v[mid])
            hi=mid-1;
        else 
            lo=mid+1;
    }
    return mid;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v={3,2,1};
    cout<<"Peek element "<<peakElement(v);
    

    return 0;
}