#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e7;

class Timer { private: chrono::time_point <chrono::steady_clock> Begin, End;
public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); }
~Timer () { End = chrono::steady_clock::now();
cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
/*===================================================================================================*/

template <class myType> 
myType GetMax(myType a,myType b){
  return (a>b?a:b);
}
// template<class T>
// class mypair{
//   T v[2];
//   public:
//   mypair(T a,T b){
//     v[0]=a; v[1]=b;
//   }
// };
// template<class T>
// T mypair<T>::getmax(){
//   T result;
//   result=(v[0]>v[1]?v[0]:v[1]);
//   return result;
// }

template<class T>
class mypair{
  T a,b;
public:
  mypair(T x,T y){
    a=x;b=y;
  }
  T getMax();
};
template<class T>
T mypair<T>:: getMax(){
  return (a>b?a:b);
}

int lower_bound(int arr[],int n,int x){
    int lo=0,hi=n-1,mid;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(arr[mid]==x)
            hi=mid-1;
        else if(arr[mid]<x)
            lo=mid+1;
        else
            hi=mid-1;
    }
    return lo;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // int a=3,b=1;
  // cout<<GetMax<int>(a,b);
  // cout<<"\n";
  // string s="abc",s2="abcd";
  // cout<<GetMax<string>(s,s2);

  // mypair<double> ob(23.4,23.5);
  // cout<<ob.getMax();

  int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
  cout<<lower_bound(arr,9,5);
  return 0;
}