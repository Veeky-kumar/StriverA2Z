#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,d;
    cin >> n >> d;
    
    vector<int> days(n);
    for (auto& e : days)
        cin >> e;
    
    vector<int> freq(201);
    int i = 0;
    for (; i < d; ++i)
        ++freq[days[i]];
    for (int j = 1; j < freq.size(); ++j)
        freq[j] += freq[j-1];

    int cnt = 0;
    double tmp;
    
    int j;
    while(i < n) {
        for (j = 0; j < freq.size() && freq[j] < d/2; ++j);
        
        //  freq[j] >= d/2
        if (freq[j] == d/2) {
            tmp = j+1;
            if (d % 2 == 0) {
                tmp += j;
                tmp /= 2;
            }
        } else {
            tmp = j;
            if (d % 2 == 0) {
                tmp += freq[j-1] + 1 == freq[j] ? j-1 : j;
                tmp /= 2;
            }
        }
        tmp *= 2;
        
        cnt += days[i] >= tmp;

        for (j = days[i-d]; j < freq.size(); ++j)
            --freq[j];
        for (j = days[i]; j < freq.size(); ++j)
            ++freq[j];
        
        ++i;
    }
    
    cout << cnt << '\n';
    
    return 0;
}