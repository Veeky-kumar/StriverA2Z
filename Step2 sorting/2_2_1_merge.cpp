#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

class solution{
    public:
    void merge(int arr[], int l, int mid, int r){
        int i=l, j=mid+1, k=l;
        vector<int> temp;
        while(i<=mid&&j<=r){
            if(arr[i]<arr[j]){
                temp[k]=arr[i];
                i++;
            }else{
                temp[k]=arr[j];
                j++;
            }
            k++;
        }
        while(i<mid)
    }

    void mergeSort(int arr[], int l, int r){
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid+1, r);
            merge(arr, l, mid, r);
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={9, 4, 7, 6, 3, 1, 5};
    int n=sizeof(arr)/sizeof(int);
    
    solution obj;
    obj.mergeSort(arr, 0, n-1);
    for(auto &i:arr)cout<<i<<" ";
    return 0;
}