#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

int search(int a[],int n,int k){
    int i=0;
    for(;i<n;i++)
        if(a[i]==k)
            return i;
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={1,2,3,4,5},k=3,i=0;
    cout<< search(a,5,8);

    return 0;
}