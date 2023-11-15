#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<math.h>
#include<climits>
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
ll n,m,a;
cin>>n>>m>>a;

if(n%a==0)
{
    n=n/a;
}
else
{
n=n/a +1;
}
if(m%a==0)
{
    m=m/a;
}
else
{
m=m/a +1;
}
cout<<n*m<<endl;

return 0;
}