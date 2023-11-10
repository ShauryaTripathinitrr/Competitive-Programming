#include <iostream>
#include<vector>
#include<map>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define read(type) readInt<type>()
#define ll long long
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(),(x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))



int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
 
    vector<int>v(n);
   v[0]=2;
   v[1]=3;
  for(int i=2;i<n;i++)
  {
    v[i]=v[i-1]+1;
    while((3*v[i])%(v[i-1]+v[i-2])==0)
    {
      v[i]++;
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
   }
return 0;
}