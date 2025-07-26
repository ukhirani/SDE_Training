#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef pair<int, vvi> pivvi;
typedef map<int, vector<int>> mivi;
typedef map<int, map<int, int>> mimii;
#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back

vi input_vector() {
  int n;
  cin >> n;
  vi v(n);
  forn(i, n) { cin >> v[i]; }
  return v;
}

void print_vec(vi &v) {
  forn(i, v.size()) { cout << v[i] << " "; }
  cout << "\n";
}

pivvi make_graph_unweighted() {
  int v = 8; // vertex set complete
  vvi edges({{0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}});
  pair<int, vvi> graph(make_pair(v, edges));
  return graph;
}
pivvi make_graph_weighted() {
  int v = 8; // vertex set complete
  vvi edges({{0, 1, 2},
             {0, 2, 3},
             {0, 3, 4},
             {1, 4, 5},
             {1, 5, 6},
             {2, 5, 6},
             {3, 4, 5},
             {6, 6, 7}});
  pair<int, vvi> graph(make_pair(v, edges));
  return graph;
}
mivi adj_list_ud_uw(pivvi graph_unweighted) {
  int v = graph_unweighted.first;
  vvi edges = graph_unweighted.second;
  mivi answer;
  for (int i = 0; i < v; i++) {
    vi element = edges[i];
    answer[element[0]].push_back(element[1]);
    if (element[0] == element[1])
      continue;
    answer[element[1]].push_back(element[0]);
  }

  return answer;
}

mimii adj_list_ud_w(pivvi graph_weighted) {
  int v = graph_weighted.first;
  vvi edges = graph_weighted.second;
  mimii answer;
  for (int i = 0; i < v; i++) {
    vi element = edges[i];
    answer[element[0]][element[1]] = element[2];
    answer[element[1]][element[0]] = element[2];
  }

  return answer;
}

mimii adj_list_d_w(pivvi graph_weighted) {
  int v = graph_weighted.first;
  vvi edges = graph_weighted.second;
  mimii answer;
  for (int i = 0; i < v; i++) {
    vi element = edges[i];
    answer[element[0]][element[1]] = element[2];
  }

  return answer;
}

mivi adj_list_d_uw(pivvi graph_unweighted) {
  int v = graph_unweighted.first;
  vvi edges = graph_unweighted.second;
  mivi answer;
  for (int i = 0; i < v; i++) {
    vi element = edges[i];

    answer[element[0]].push_back(element[1]);
  }

  return answer;
}
vvb unweigted_adj_list_to_matrix(mivi unweighted_list) {
  vvb answer;
  for (auto [first, second] : unweighted_list) {
    for (int i = 0; i < second.size(); i++) {
      answer[first][second[i]] = true;
    }
  }

  return answer;
}
vvi weigted_adj_list_to_matrix(mimii weighted_list) {
  vvi answer;
  for (auto [first, second] : weighted_list) {
    for (int i = 0; i < second.size(); i++) {
      answer[first][second[i]] = weighted_list[first][second[i]];
    }
  }
  return answer;
}
mivi unweighted_adj_matrix_to_adj_list(vvb unweighted_adj_matrix) {
  mivi answer;
  int rows = unweighted_adj_matrix.size();//no cols required as rows==cols.
  for (int i = 0; i < rows; i++) {
    for (int j = 0; i < rows; j++) {
      if (unweighted_adj_matrix[i][j]) {
        answer[i].push_back(j);
      }
    }
  }
  return answer;
}
mimii weighted_adj_matrix_to_adj_list(vvi weighted_adj_matrix) {
  mimii answer;
  int rows = weighted_adj_matrix.size();
  int columns = weighted_adj_matrix[0].size();

  for (int i = 0; i < rows; i++) {
    for (int j = 0; i < columns; j++) {
      if (weighted_adj_matrix[i][j] != 0) {
        answer[i][j] = weighted_adj_matrix[i][j];
      }
    }
  }
  return answer;
}
void solve() {
  pivvi graph_unweighted = make_graph_unweighted();
  mivi adj_l_ud_uw = adj_list_ud_uw(graph_unweighted); // undirected unweighted
  mivi adj_l_d_uw = adj_list_d_uw(graph_unweighted);   // directed weighted

  pivvi graph_weighted = make_graph_weighted();
  mimii adj_l_ud_w = adj_list_ud_w(graph_weighted); // undirected weighted
  mimii adj_l_d_w = adj_list_d_w(graph_weighted);   // directed weighted

  // unweighted undirected and directed adj_list converter to adj_matrix (both
  // the cases can be handled basically)
  vvb adj_mat_made_from_adj_l_ud_uw = unweigted_adj_list_to_matrix(adj_l_ud_uw);
  vvb adj_mat_made_from_adj_l_d_uw = unweigted_adj_list_to_matrix(adj_l_d_uw);

  // weighted undirected and directed adj_list  converter to adj_matrix (both
  // the cases can be handled basically)
  vvi adj_mat_made_from_adj_l_ud_w = weigted_adj_list_to_matrix(adj_l_ud_w);
  vvi adj_mat_made_from_adj_l_d_w = weigted_adj_list_to_matrix(adj_l_d_w);

  // unweighted undirected and directed adj_matrix converter to adj_list (both
  // the cases can be handled basically)
  mivi adj_list_made_from_adj_mat_ud_uw =
      unweighted_adj_matrix_to_adj_list(adj_mat_made_from_adj_l_ud_uw);
  mivi adj_list_made_from_adj_mat_d_uw =
      unweighted_adj_matrix_to_adj_list(adj_mat_made_from_adj_l_d_uw);

  // weighted undirected and directed adj_matrix converter to adj_list (both the
  // cases can be handled basically)
  mimii adj_list_made_from_adj_matrix_ud_w =
      weighted_adj_matrix_to_adj_list(adj_mat_made_from_adj_l_ud_w);
  mimii adj_list_made_from_adj_matrix_d_w =
      weighted_adj_matrix_to_adj_list(adj_mat_made_from_adj_l_d_w);
}

int main() {
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
}
