#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

void zerosToEnd(int a[],int n){
    int temp[n],k=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp[k++]=a[i];
        }
    }
    while(k<n){
        temp[k++]=0;
    }
    for(int i=0;i<n;i++)a[i]=temp[i];
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}

void solve(int a[],int n){
    int k=0;
    while(k<n)
        if(a[k]==0)break;
        else ++k;
    int i=k,j=k+1;
    while(i<n&&j<n){
        if(a[j]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
        }
        j++;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n=sizeof(a)/sizeof(a[1]);

    // zerosToEnd(a,n);
    
    //Using two pointer
    solve(a,n);

    return 0;
}