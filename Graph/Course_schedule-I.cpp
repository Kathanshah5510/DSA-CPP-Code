#include <bits/stdc++.h>
using namespace std;

bool hasCycle(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& inStack){
    visited[node] = true;
    inStack[node] = true;

    for(int neighbour : adj[node]){
        if(!visited[neighbour]){
            if(hasCycle(neighbour, adj, visited, inStack)){
                return true;
            }
        }
        else if(inStack[neighbour]){
            return true;
        }
    }
    inStack[node] = false;
    return false;
}

bool canFinish(int n, vector<vector<int>>& prerequisites){
    vector<vector<int>> adj(n);
    for(auto &p : prerequisites){
        adj[p[1]].push_back(p[0]);
    }
    vector<bool> visited(n, false), inStack(n, false);

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            if(hasCycle(i, adj, visited, inStack)){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n = 4;
    vector<vector<int>> prerequisites = {{1,0},{2,0},{3,1},{3,2},{0,3}};
    cout << (canFinish(n, prerequisites) ? "No cycle" : "Cycle detected") << endl;

    return 0;
}