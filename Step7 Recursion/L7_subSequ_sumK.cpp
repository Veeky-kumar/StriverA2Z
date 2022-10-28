#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

void fun(int ind, vector<int>&ds, int s, int sum, int arr[], int n){
    if(ind==n){
        if(s==sum){
            for(auto i:ds)
                cout<<i<<" ";
            cout<<"\n";
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    fun(ind+1, ds, s, sum, arr, n);

    s-=arr[ind];
    ds.pop_back();
    fun(ind+1, ds, s, sum, arr, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    int sum=2;
    fun(0, ds, 0, sum, arr, n);

    return 0;
}