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

    vector<bool> vis(V+1, false);
    vector<int> bfs;

    for(int i = 1; i <= V; i++) {
        if(!vis[i]) {
            queue<int> q;
            vis[i] = true;
            q.push(i);
            while(!q.empty()) {
                int nodeVal = q.front();
                q.pop();
                bfs.push_back(nodeVal);
                for(auto it : adjList[nodeVal]) {
                    if(!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
        }
    }

    for(auto it = bfs.begin(); it != bfs.end(); it++) {
        cout << *it << ", ";
    }

    return 0;
}

