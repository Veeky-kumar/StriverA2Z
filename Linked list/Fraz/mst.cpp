#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

ll power(ll a, ll b){
    if (b == 0)
        return 1;
    ll res = power(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
ll power2(ll a,ll b){
    if (b == 0)
        return 1;
    else 
        return (a *power(a, b-1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=4,m=2;
    cout<<power2(n,m)<<endl;
    cout<<pow(n,m);
    return 0;
}