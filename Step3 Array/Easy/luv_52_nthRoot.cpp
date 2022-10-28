#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "ms\n"; } } T;
/*===================================================================================================*/
double eps=1e-6;//here if we want accuracy upto y=2 decimal then eps= 10^-(y+1) i.e 10^-(2+1)=>10^-(3) 



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x;
    cin>>x;
    double lo=1,hi=x,mid;
    // while(hi-lo>eps){
    //     mid=(hi+lo)/2;
    //     if(mid*mid>x)
    //         hi=mid;
    //     else
    //         lo=mid;
    //     cout<<lo<<" "<<hi<<"\n";
    // }
// Time- O(logn)
    
// for nth root like cube root or what
    int n; cin>>n;  
    while(hi-lo>eps){
        mid=(hi+lo)/2;
        if(pow(mid,n)<x)
            lo=mid;
        else 
            hi=mid;
    }
    cout<<lo<<" "<<hi<<"\n";

    return 0;
}