#include <iostream>
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
int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    int count=0;
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    if(!(n&1))
    {
        for(auto i:mp)
        {
            if(i.second&1)
            {
                k--;
            }
        }
    }
    else
    {
      if(mp.size()==1)
      {
        for(auto i:mp)
        {
         if(k-i.second>=0)
         {
            cout<<"yes"<<endl;
         }
        }
      }
      else
      {
        for(auto j:mp)
        {
           if(j.second&1)
           {
            k--;
           }
        }
      }
    }
    if(k>0)
    {
        cout<<"no"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;
    }
}
return 0;
}