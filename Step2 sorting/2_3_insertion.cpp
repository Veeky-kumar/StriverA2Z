#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={13,46,24,52,20,9};
    int n=sizeof(a)/sizeof(a[0]);
    insertion_sort(a,n);
    for(auto &i:a)cout<<i<<" ";

    return 0;
}