#include <iostream>
#include<vector>
#include<algorithm>
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
tc()
{
    ll n;
    cin>>n;
    int a[n];
    vector<int>lam;
    map<int,int>mp;
    bool check=true;
    int count=0;
    int eve=0;
    for(ll i=0;i<n;i++)
     {
        cin>>a[i];
        mp[a[i]]++;
     }
     if(mp.size()==1)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         for(auto i:mp)
         {
             lam.push_back(i.second);
         }
         if(lam.size()==2)
         {
             if(abs(lam[0]-lam[1])<=1)
             {
                 cout<<"YES"<<endl;
             }
             else
             {
                 cout<<"NO"<<endl;
             }
         }
         else
         {
             cout<<"NO"<<endl;
         }
     }
}
return 0;
}