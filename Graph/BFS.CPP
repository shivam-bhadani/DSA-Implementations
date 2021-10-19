void bfs(vector<int> adj[], int v, int s)
{
    bool visited[v] = {false};
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for(int adjacent: adj[curr]) {
            if(visited[adjacent]==false) {
                q.push(adjacent);
                visited[adjacent] = true;
            }
        }
    }
}
