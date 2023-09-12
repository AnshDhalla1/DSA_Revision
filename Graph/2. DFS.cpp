// TC = O(V*2E) - Undirected graph  AS = O(V)
// TC = O(V*E) - Directed graph

private:
  void helper(int node, vector<int>& adj, vector<int>& vis, vector<int>& trav){
    vis[node] =1;
    trav.push_back(node);

    //traverse all its neighbors
    for(auto it : adj[node]){
      if(!vis[it]){
        helper(it, adj, vis, trav);
      }
    }
  }

public:
  vector<int> dfs(int v, vector<int> adj){
    vector<int> vis(0);
    vector<int> trav;
    helper(0, adj, vis, trav);    //0 is the starting point
    return trav;
  }
