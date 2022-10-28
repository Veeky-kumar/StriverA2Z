#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s="abdeba";
    for(int i=0,j=s.size(),k=0;k<(s.size()+1)/2;k++,i++,j--){
        if(s[i]!=s[j]&&i>j){
            cout<<"N";
            break;
        }cout<<"Y";
        break;
    }

    return 0;
}