#include <bits/stdc++.h>
using namespace std;
#include <vector>
void dfs_for_adj_matrix_unweighted(vector<vector<bool>> &graph, int node, vector<bool> &flags) {
  flags[node] = true;
  cout << node << " ";
  for (int i = 0; i < graph.size(); i++) {
    if (graph[node][i] == true && flags[i] == false) {
      dfs_for_adj_matrix_unweighted(graph, i, flags);
    }
  }
}

int main() {
      vector<vector<bool>> graph = {
          {false, true, false, false, false, false, false, false, false, false},
          {true, false, true, false, false, false, false, false, false, false},
          {false, true, false, true, false, false, false, false, false, false},
          {false, false, true, false, true, false, false, false, false, false},
          {false, false, false, true, false, true, false, false, false, false},
          {false, false, false, false, true, false, true, false, false, false},
          {false, false, false, false, false, true, false, true, false, false},
          {false, false, false, false, false, false, true, false, true, false},
          {false, false, false, false, false, false, false, true, false, true},
          {false, false, false, false, false, false, false, false, true,
           false}};
      vector<bool> flags(graph.size(), false);
      dfs_for_adj_matrix_unweighted(graph, 4, flags);
      cout << endl;
      for (int i = 0; i < graph.size(); i++) {
        if (!flags[i]) {
          dfs_for_adj_matrix_unweighted(graph, i, flags);
        }
      }

  return 0;
}
