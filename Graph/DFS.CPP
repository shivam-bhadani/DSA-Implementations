vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    int visited[V] = {false};
    solve(V, adj, 0, ans, visited);
}
void solve(int v, vector<int> adj[], int s, int visited[]) {
    visited[s] = true;
    cout << s << " ";
    for(int adjacent: adj[s]) {
        if(visited[adjacent]==false)
            solve(v, adj, adjacent, ans, visited);
    }
}
