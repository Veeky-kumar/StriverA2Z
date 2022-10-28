#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

int solve(int arr[],int n,int k){
    int lo=0,hi=n-1,mid;
    while(hi-lo>1){
        mid=lo+(hi-lo)/2;
        if(arr[mid]>k)
            lo=mid+1;
        else
            hi=mid;
    }
    int ans;
    if(arr[hi]==k)ans=hi;
    if(arr[lo]==k)ans=lo;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={20,17,15,14,13,12,10,9,8,4};
    int n=sizeof(arr)/sizeof(arr[0]),k=4;
    int ans=solve(arr,n,k);
    cout<<ans;
    return 0;
}