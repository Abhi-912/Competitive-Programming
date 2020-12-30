#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define int long long
#define fi(i,j,n) for(int i=j;i<n;i++)
#define fd(i,j,n) for(int i=j;i>n;i--)
#define fa(i,a) for(auto &i : a)
#define pe(v) for(auto &i:v){cout<<i<<' ';}cout<<endl;
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pb push_back
using namespace std;
const int mod=1e9+7;
const int lim = 100010;
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}

bool dfs(vector<int> adj[], int u, vector<bool> &vis, vector<bool> &recstack) 
{
	if(!vis[u]) 
	{
		vis[u] = recstack[u] = true;
		for(auto v : adj[u]) 
		{
			if(!vis[v] && dfs(adj, v, vis, recstack))
			return true;
			else if(recstack[v])
			return true;
		}
	}

	recstack[u] = false;
	return false;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fast;
	int t = 1;
	cin >> t;
	while (t--)
	{
		int n,m;
		cin >> n >> m;

		vector<pair<int, int>> v(m);
		fi(i, 0, m) cin >> v[i].first >> v[i].second;

        int ans = 0;
		vector<int> adj[n+1];
		
		fi(i, 0, m) 
		{
            if(v[i].first != v[i].second)
			{
				adj[v[i].first].pb(v[i].second);
				ans++;
			}
		}

		vector<bool> vis(n+1, false), recstack(n+1, false);
		fi(i, 0, n)
	    {
           if(vis[i] == false && dfs(adj, i, vis, recstack)) 
		   ans++;
		}

		cout << ans << endl;
	}
	return 0;
}
