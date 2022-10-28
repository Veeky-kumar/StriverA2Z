#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
typedef long long ll;
const int N=1e7;


auto clk = clock();
mt19937_64 rang(high_resolution_clock::now().time_since_epoch().count());
void run_time()
{
    cerr << endl;
    cerr << "Time elapsed: " << (double)(clock() - clk) / CLOCKS_PER_SEC << endl;
    return;
}
// =================
class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;


int binarySearch(vector<int>&v,int element){
    int lo=0,hi=v.size()-1,mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(v[mid]<element)
            lo=mid+1;
        else 
            hi=mid;
    }
    if(v[lo]==element)return lo;
    if(v[hi]==element)return hi;
    return -1;
}

int lower_bound(vector<int>&v,int element){
    int lo=0,hi=v.size()-1,mid;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(v[mid]<element)
            lo=mid+1;
        else 
            hi=mid;
    }
    if(v[lo]>=element)return lo;
    if(v[hi]>=element)return hi;
    return -1;
}
int upper_bound(vector<int>&v,int element){
    int lo=0,hi=v.size()-1,mid;
    while(hi-lo>1){
        mid=(lo+hi)/2;
        if(v[mid]<=element)
            lo=mid+1;
        else 
            hi=mid;
    }
    if(v[lo]>element)return lo;
    if(v[hi]>element)return hi;
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    int element;cin>>element;
    int lb=lower_bound(v,element);
    cout<<lb<<" "<<(lb!=-1?v[lb]:-1)<<endl;
    int up=upper_bound(v,element);
    cout<<up<<" "<<(up!=-1?v[up]:-1)<<endl;

    run_time();
    return 0;
}