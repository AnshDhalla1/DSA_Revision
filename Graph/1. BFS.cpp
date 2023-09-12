// TC = O(V + 2E) - Undirected graph    AS = O(V)
// TC = O(V + E) - Directed graph

vector<int> BFS(int v, vector<int> adj){
  vector<int> vis(0);
  vector<int> trav;
  vis[0] =1;
  queue<int> q;
  q.push(0);

  while(!q.empty()){
    int node = q.front();
    q.pop();
    trav.push_back(node);
    for(auto it : adj[node]){
      if(!vis[it]){
        vis[it] =1;
        q.push(it);
      }
    }
  }
  return trav
}
