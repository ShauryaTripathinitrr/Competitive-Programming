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
ll a,b;
cin>>a>>b;
if(a==b)
{
    cout<<1<<endl;
}
else{
    int count=0;
    while(a<b)
    {
        count++;
        a=a*3;
        b=b*2;
    }
    if(a==b)
    {
        ++count;
    }
    cout<<count<<endl;
}
return 0;
}