#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <sstream>

using namespace std;

class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<bool>> isVisit(n, vector<bool>((1 << n), false));
        queue<pair<int, int>> q;
        int last = (1 << n) - 1;

        for (int i = 0; i < n; i++) {
            int travel = 1 << i;
            q.push({i, travel});
            isVisit[i][travel] = true;
        }

        int first = 0;
        while (!q.empty()) {
            int s = q.size();

            for (int i = 0; i < s; i++) {
                auto [node, mask] = q.front();
                q.pop();

                if (mask == last) {
                    return first;
                }

                for (auto near : graph[node]) {
                    int travels = mask | (1 << near);
                    if (!isVisit[near][travels]) {
                        isVisit[near][travels] = true;
                        q.push({near, travels});
                    }
                }
            }
            first++;
        }
        return first;
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter the adjacency list as a string (e.g., [[1,2,3],[0],[0],[0]]): ";
    getline(cin, input);

    // Parse the input string to create the graph
    vector<vector<int>> graph;
    input = input.substr(1, input.size() - 2); // Remove outer brackets
    stringstream ss(input);
    string node;

    while (getline(ss, node, ']')) {
        if (node.size() > 0 && node[0] == ',') {
            node = node.substr(2); // Remove ",[" or ", " at the start
        } else if (node.size() > 0 && node[0] == '[') {
            node = node.substr(1); // Remove "[" at the start
        }

        stringstream ns(node);
        string num;
        vector<int> neighbors;

        while (getline(ns, num, ',')) {
            if (!num.empty()) {
                neighbors.push_back(stoi(num));
            }
        }
        graph.push_back(neighbors);
    }

    cout << "Shortest Path Length: " << sol.shortestPathLength(graph) << endl;
    return 0;
}

