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
        string s;
        cin>>s;
        int ans=0;
        int j=0;
       
        
         for(int i=0;i<3;i++)
        {
                int k=s[i]-'0';
                j=s[i+1]-'0';
                if(j==-48)
                {
                    j=1;
                }
 
                if(i==0 && s[i]=='0')
                {
                ans+=9;
                }
                else if(i==0 && s[i]!='0')
                {
                ans+=(s[i]-'0')-1;
                }
             
                int diff=j-k;
                
                if(diff>0 && s[i]!='0')
                {
                ans+=diff;
                }
                else if(diff>0 && s[i]=='0')
                {
                      ans+=10-diff;
                }
                else if(diff==0)
                {
                ans+=0;
                }
                else if(diff<0)
                {
                if(s[i+1]=='0')
                {
                    ans+=diff+10;
                }
                else
                {
                    ans+=abs(diff);
                }
            }
        }
        ans+=4;
        cout<<ans<<endl;   
        
    }
return 0;
}