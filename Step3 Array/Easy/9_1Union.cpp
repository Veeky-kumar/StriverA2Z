#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

vector<int> solve(int a[],int n,int b[],int m){
    // set<int>s;
    // for(int i=0;i<x;i++)
    //     s.insert(a[i]);
    // for(int i=0;i<y;i++)
    //     s.insert(b[i]);
    // for(int i:s)cout<<i<<" ";

    map<int,int>freq;
    vector<int>Union;
    for(int i=0;i<n;i++)
        freq[a[i]]++;
    for(int i=0;i<m;i++)
        freq[b[i]]++;
    for(auto &i:freq)
        Union.push_back(i.first);
    return Union;
}
//Using 2 pointer
vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
    int i=0,j=0;
    vector<int>Union;
    while(i<n&&j<m){
      if(arr1[i]<=arr2[j]){
        if(Union.size()==0 ||Union.back()!=arr1[i])
          Union.push_back(arr1[i]);
        i++;
      }
      else{
        if(Union.size()==0|| Union.back()!=arr2[j])
          Union.push_back(arr2[j]);
        j++;
      }
    }
    while(i<n){
      if(Union.back()!=arr1[i])
        Union.push_back(arr1[i]);
        i++;
    }
    while(j<m){
      if(Union.back()!=arr2[j])
        Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int arr2[]={2,3,4,4,5,11,12};
    int s1=sizeof(arr1)/sizeof(arr1[1]),s2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> Union=FindUnion(arr1,arr2,s1,s2);
    for(auto &i:Union)
        cout<<i<<" ";
    return 0;
}