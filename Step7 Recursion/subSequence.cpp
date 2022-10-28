#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

void fun(int ind, vector<int>&ds, int arr[], int n){
    if(ind>=n){
        for(auto i:ds)
            cout<<i<<" ";
        if(ds.size()==0)
            cout<<"{}";
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    fun(ind+1, ds, arr, n);

    ds.pop_back();
    fun(ind+1, ds, arr, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={3,1,2};
    int n=3;
    vector<int>ds;
    fun(0, ds, arr, n);
    return 0;
}