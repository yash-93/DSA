#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, E;
    cin >> V >> E;

    vector<int> adjList[V+1];

    for(int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i = 1; i <= V; i++) {
        cout << i << " : ";
        for(auto it = adjList[i].begin(); it != adjList[i].end(); it++) {
            cout << *it << ", ";
        }
        cout << endl;
    }

    return 0;
}
