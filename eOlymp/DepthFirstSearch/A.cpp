#include <iostream>
#include <string>
#include <vector>

using namespace std;

int dfs(int node, vector<bool> &visited, const vector<vector<int>> &tree) {
  if (!visited[node]) {
    visited[node] = true;
    for (int i = 0; i < (int)tree[node].size(); ++i) {
      if (tree[node][i])
        dfs(i, visited, tree);
    }
  }
}


int main() {
  int size; cin >> size;
  vector<vector<int>> tree(size, vector<int>(size));
  int total_edges{0};
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      cin >> tree[i][j];
      total_edges += tree[i][j];
    }
  }

  vector<bool> visited(size, false);
  dfs(0, visited, tree);

  string answer = "NO";
  if (tree.size() == size) {
    bool all_visited = true;
    for (const auto &visit : visited) {
      all_visited &= visit;
    }
    if (total_edges == 2*size - 2 && all_visited)
      answer = "YES"; 
  }
 
  cout << answer << endl;

  return 0;
}
