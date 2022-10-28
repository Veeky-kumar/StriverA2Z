#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

int search(vector<int> &v, int target){
    int n=v.size();
    int lo=0,hi=n-1,mid;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(v[mid]==target)return mid;
        //if left half is sorted
        if(v[lo]<=v[mid])
            if(v[lo]<=target&&target<=v[mid])
                hi=mid-1;
            else 
                lo=mid+1;
        //if right half is sorted
        else
            if(v[mid]<=target&&target<=v[hi])
                lo=mid+1;
            else
                hi=mid-1;
    } 
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;cin>>t;
    // vector<int> v={4,5,6,7,0,1,2};
    // cout<<search(v,t);

    cout<<(1>>1);
    return 0;
}