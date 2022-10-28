#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

void right_solve(int a[],int n,int k){
    if(k>n)k%=n;
    for(int i=0;i<k;i++){
        int cur=a[n-k+i];
        for(int j=n-k+i;j>i;j--){
            a[j]=a[j-1];
        }
        a[i]=cur;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    //Time= O(n^2)
}
void Rotateright(int a[],int n,int k){
    if(n==0)return;
    k%=n;
    if(k>n)return;
    int temp[n];
    for(int i=n-k;i<n;i++)
        temp[i-n+k]=a[i];
    for(int i=n-k-1;i>=0;i--)
        a[i+k]=a[i];
    for(int i=0;i<k;i++)
        a[i]=temp[i];
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    // Time= O(n)
}
void Rotateleft(int a[],int n,int k){
    if(n==0)return;
    k%=n;
    if(k>n)return;
    int temp[n];
    for(int i=0;i<k;i++)
        temp[n-k+i]=a[i];
    for(int i=0;i<n-k;i++)
        a[i]=a[i+k];
    for(int i=n-k;i<n;i++)
        a[i]=temp[i];
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
// M-2---------------------
void Reverse(int a[],int i,int j){
    while(i<=j){
        swap(a[i],a[j]);
        i++;j--;
    }
}
void rotateright(int a[],int n,int k){
    Reverse(a,0,n-k-1);
    Reverse(a,n-k,n-1);
    Reverse(a,0,n-1);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
void rotateleft(int a[],int n,int k){
    Reverse(a,0,k-1);
    Reverse(a,k,n-1);
    Reverse(a,0,n-1);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    // right_solve(a,n,8);
    // left_solve(a,n,2);

    // Rotateleft(a,n,2);

    // rotateright(a,n,2);
    rotateleft(a,n,2);

    return 0;
}