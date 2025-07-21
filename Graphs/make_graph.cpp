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

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

pivvi make_graph()
{
    int v = 8; // vertex set complete
    vvi edges({{0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}});
    pair<int, vvi> graph(make_pair(v, edges));
    return graph;
}

pivvi make_undirected_weighted_graph(){
    int v = 8; // vertex set complete
    vvi edges({{0, 1,2}, {0, 2,3}, {0, 3,5}, {1, 4,7}, {1, 5,11}, {2, 5,17}, {3, 4,23}, {6, 6,13}});
    pair<int, vvi> graph(make_pair(v, edges));
    return graph;
}
{
    int v = 8; // vertex set complete
    vvi edges({{0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}});
    pair<int, vvi> graph(make_pair(v, edges));
    return graph;
}

vvb get_adj_matrix_undirected(pivvi &graph)
{
    vvb mat_undirected;
    int size = graph.first;
    vvi hello = graph.second;
    for(int i = 0;i<size;i++){
        vi element = hello[i];
        mat_undirected[element[0]][element[1]] = true;
        mat_undirected[element[1]][element[0]] = true;
    }

    return mat_undirected;
}

vvb get_adj_matrix_directed(pivvi &graph)
{
    vvb mat_undirected;
    int size = graph.first;
    vvi hello = graph.second;
    for(int i = 0;i<size;i++){
        vi element = hello[i];
        mat_undirected[element[0]][element[1]] = true;
    }

    return mat_undirected;
}

void solve()
{
    pivvi graph = make_graph();
    vvb adj_undirected = get_adj_matrix_directed(graph);
    vvb adj_directed = get_adj_matrix_directed(graph);

}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
