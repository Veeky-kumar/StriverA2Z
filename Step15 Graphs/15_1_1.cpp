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
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n+1;i++){
        for(auto j=adj[i].begin();j!=adj[i].end();j++){
            cout<<*j<<"->";
        }
        cout<<"\n";
        // cout<<adj[i][adj[i].size()-1]<<endl;
    }
    return 0;
}