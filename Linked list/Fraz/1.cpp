#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next=NULL;
    }
};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    struct Node* head;
    cout<<(7>>1);

    return 0;
}