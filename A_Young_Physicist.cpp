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
ll n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>a[i][j];
    }
}
int j=0;
vector<int>soum(n);
bool flag=true;
while(j<3)
{
    int sum=0;
    if(j<=2)
    {
    for(int i=0;i<n;i++)
    {
        sum+=a[i][j];
    }
    }
    if(sum!=0)
    {
        flag=false;
        break;
    }
    j++;
}
if(flag)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}