#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
int main(){
  ll t,n,i;
  cin>>t;
  while(t--){
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
      int min = 100000000000;


    sort(a,a+n);
    for(i=0;i<n-1;i++){
      if(a[i+1]-a[i]<min)
        min=a[i+1]-a[i];
    }
    cout<<min<<endl;
  }

return 0;
}
