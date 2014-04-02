#include <iostream>
#include <algorithm>
using namespace std;

const int N = 110;
const int WMAX = N * N * 20;
int adj[N][N];

void warshallFloyd(const int n)
{
	for (int i=0; i < n; ++i)
    {
		for (int j=0; j < n; ++j)
        {
			for (int k=0; k < n; ++k)
            {
				adj[j][k] = min(adj[j][k], adj[j][i] + adj[i][k]);
			}
		}
	}
}

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0) break;
        fill(&adj[0][0], &adj[n-1][n], WMAX);

        for (int i=0; i < n; ++i)
        {
            int m;
            cin >> m;
            for (int j=0; j < m; ++j)
            {
                int to, cost;
                cin >> to >> cost;
                adj[i][to-1] = cost;
            }
        }

        warshallFloyd(n);

        int ansN = -1;
        int ans = WMAX;
        for (int i=0; i < n; ++i)
        {
            int t = -1;
            for (int j=0; j < n; ++j)
            {
                if (i == j) continue;
                t = max(t, adj[i][j]);
            }
            if (t < ans)
            {
                ans = t;
                ansN = i;
            }
        }

        if (ans == WMAX) cout << "disjoint" << endl;
        else cout << ansN+1 << " " << ans << endl;
    }
    
    return 0;
}
