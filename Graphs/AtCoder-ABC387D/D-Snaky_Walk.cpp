#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

struct Node {
    int id;
    vector<Node*> neighbors;
    vector<int> movements;  // 1 for horizontal, 0 for vertical
    int parent_vertical = -1, parent_horizontal = -1;
    int explored_vertical = 0, explored_horizontal = 0;
};

void BFS(vector<Node> &graph, int origin) {
    queue<Node*> queue_nodes;
    queue<int> movement_types;
    queue_nodes.push(&graph[origin]);
    movement_types.push(-1);
    graph[origin].explored_horizontal = 1;
    graph[origin].explored_vertical = 1;

    while (!queue_nodes.empty()) {
        Node *current = queue_nodes.front();
        int movement_type = movement_types.front();
        movement_types.pop();
        queue_nodes.pop();

        for (size_t i = 0; i < current->neighbors.size(); ++i) {
            Node *neighbor = current->neighbors[i];
            if (current->movements[i] != movement_type) {
                if ((current->movements[i] && !neighbor->explored_horizontal) ||
                    (!current->movements[i] && !neighbor->explored_vertical)) {
                    queue_nodes.push(neighbor);
                    movement_types.push(current->movements[i]);
                    if (current->movements[i]) {
                        neighbor->explored_horizontal = 1;
                        neighbor->parent_horizontal = current->id;
                    } else {
                        neighbor->explored_vertical = 1;
                        neighbor->parent_vertical = current->id;
                    }
                }
            }
        }
    }
}

int main() {
    int height, width, start_i = 0, start_j = 0, goal_i = 0, goal_j = 0;
    cin >> height >> width;
    vector<string> matrix(height);
    for (auto &row : matrix) cin >> row;

    vector<Node> graph(height * width);

    // Build the graph
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (matrix[i][j] == 'S') {
                start_i = i;
                start_j = j;
            }
            if (matrix[i][j] == 'G') {
                goal_i = i;
                goal_j = j;
            }
            if (matrix[i][j] != '#') {
                int pos = j + i * width;
                int address;
                graph[pos].id = pos;

                if (i > 0 && matrix[i - 1][j] != '#') {
                    address = j + (i - 1) * width;
                    graph[pos].neighbors.push_back(&graph[address]);
                    graph[address].neighbors.push_back(&graph[pos]);
                    graph[pos].movements.push_back(0);  // Vertical
                    graph[address].movements.push_back(0);
                }
                if (j > 0 && matrix[i][j - 1] != '#') {
                    address = j - 1 + i * width;
                    graph[pos].neighbors.push_back(&graph[address]);
                    graph[address].neighbors.push_back(&graph[pos]);
                    graph[pos].movements.push_back(1);  // Horizontal
                    graph[address].movements.push_back(1);
                }
            }
        }
    }

    BFS(graph, start_j + start_i * width);

    int destination = goal_j + goal_i * width;
    if (graph[destination].explored_vertical == 0 && graph[destination].explored_horizontal == 0) {
        cout << -1 << endl;
    } else {
        int count_vertical = 0, count_horizontal = 0;
        int aux_vertical = graph[destination].parent_vertical;
        int aux_horizontal = graph[destination].parent_horizontal;
        int flag = 0;

        while (aux_vertical != -1) {
            aux_vertical = flag ? graph[aux_vertical].parent_vertical : graph[aux_vertical].parent_horizontal;
            flag = !flag;
            count_vertical++;
        }

        flag = 0;
        while (aux_horizontal != -1) {
            aux_horizontal = flag ? graph[aux_horizontal].parent_horizontal : graph[aux_horizontal].parent_vertical;
            flag = !flag;
            count_horizontal++;
        }

        count_horizontal = count_horizontal ? count_horizontal : INF;
        count_vertical = count_vertical ? count_vertical : INF;

        cout << min(count_horizontal, count_vertical) << endl;
    }

    return 0;
}
