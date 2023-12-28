#include<bits/stdc++.h>
using namespace std;

vector<char> printLeafNodes(char a, const vector<vector<char>>& graph) {
    vector<char> ans;
    queue<char> bfs;
    vector<int> visited(26, 0);
    bfs.push(a);
    visited[a - 'A'] = 1;

    while (!bfs.empty()) {
        char curr = bfs.front();
        bfs.pop();
        bool flag = true;

        for (char neighbor : graph[curr - 'A']) {
            int index = neighbor - 'A';

            if (visited[index] == 0) {
                flag = false;
                bfs.push(neighbor);
                visited[index] = 1;
            }
        }

        if (flag && curr != a ) {
            ans.push_back(curr);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}



int main() {
    int t;
    cin >> t;
    char x;
    cin >> x;
    int line;
    cin >> line;

    vector<vector<char>> graph(26);
    vector<pair<char, char>> graph2;
    vector<bool> deleted(26, false);

    for (int i = 0; i < line; i++) {
        char x, y;
        cin >> x >> y;
        graph[x - 'A'].push_back(y);
        graph[y - 'A'].push_back(x);
        graph2.push_back({x, y});
    }

    vector<char> ans = printLeafNodes(x, graph);
    // cout << "Leaf Nodes: ";
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << endl;

    // Making newGraph
    vector<vector<char>> newGraph(26);
    for (int i = 0; i < graph2.size(); i++) {
        bool flag = true;
        for (auto &leaf : ans) {
            if (leaf == graph2[i].first || leaf == graph2[i].second) {
                flag = false;
            }
        }
        if (flag) {
            newGraph[graph2[i].first - 'A'].push_back(graph2[i].second);
            newGraph[graph2[i].second - 'A'].push_back(graph2[i].first);
        }
    }
    vector<char>answerfinal=printLeafNodes(x,newGraph);
    for(auto &it:answerfinal){
        cout << it <<" ";
    }
    cout << endl;
}