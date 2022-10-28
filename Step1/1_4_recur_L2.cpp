#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

//Parameterised Recursion
int fun(int i,int sum){
    if(i<1)return sum;
    return fun(i-1,sum+i);
}
//Functional recursion
int f2(int n){
    if(n==0)return 0;
    return f2(n-1)+n;
}

int fact(int n){
    if(n==0)return 1;
    return fact(n-1)*n;
}

void rev(int i,int j,int a[]){
    if(i>j)return;
    swap(a[i],a[j]);
    rev(i+1,j-1,a);
}
void rev2(int i,int n,int a[]){
    if(i>=n/2)return;
    swap(a[i],a[n-i-1]);
    rev2(i+1,n,a);
}

bool p(int i,string s){
    if(i>=s.size()/2)return true;
    if(s[i]!=s[s.size()-i-1])return false;
    return p(i+1,s);
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int n=5;

    // cout<< fun(n,0); 

    // cout<<f2(n);

    // cout<<fact(n);

    // Reverse
    // M-1
    int a[]={5,4,3,2,1};
    int len=sizeof(a)/sizeof(a[0]);
    // rev(0,4,a);
    // for(auto &i:a)cout<<i<<" ";
    // M-2-using one pointer
    // rev2(0,len,a);
    // for(auto &i:a)cout<<i<<" ";
    
    string s="abcba";
    cout<< p(0,s);
   
    return 0;
}