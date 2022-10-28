#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

void fun(int i,int n){
    if(i>n)return;
    cout<<"vicky\n";
    fun(++i,n);
}

void f2(int n){
    if(n==0)return;
    cout<<n<<" ";
    f2(n-1);
    cout<<n<<" ";
}
void f3(int i,int n){
    if(i>n)return;
    cout<<i<<" ";
    f3(++i,n);
}

void f4(int i,int n){
    if(n<i)return;
    f4(i+1,n);
    cout<<i<<" ";
}

void f5(int i,int n){
    if(i<1)return;
    f5(i-1,n);
    cout<<i<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=5;
    // fun(1,5);

    // f2(5);
    // f3(1,n);
    // f4(1,n);
    f5(n,n);
    return 0;
}