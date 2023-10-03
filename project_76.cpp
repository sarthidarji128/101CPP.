#include <iostream>
#include <stack>

using namespace std;

const int MAX_ROWS = 100; // Maximum number of rows in the maze
const int MAX_COLS = 100; // Maximum number of columns in the maze

// Define possible moves (up, down, left, right)
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

// Function to check if a given cell is valid and within the maze boundaries
bool isValid(int x, int y, int rows, int cols, int maze[MAX_ROWS][MAX_COLS]) {
    return x >= 0 && x < rows && y >= 0 && y < cols && maze[x][y] == 0;
}

// Function to find the shortest distance in the maze using DFS
int shortestDistance(int maze[MAX_ROWS][MAX_COLS], int rows, int cols, int startX, int startY, int endX, int endY) {
    // Create a 2D array to store visited cells
    bool visited[MAX_ROWS][MAX_COLS] = {false};

    // Create a stack for DFS
    stack<pair<int, int>> s;

    // Push the start position onto the stack
    s.push({startX, startY});

    // Initialize the distance to 0
    int distance = 0;

    while (!s.empty()) {
        pair<int, int> current = s.top();
        s.pop();
        int x = current.first;
        int y = current.second;

        // Mark the current cell as visited
        visited[x][y] = true;

        // Check if we have reached the end position
        if (x == endX && y == endY) {
            return distance;
        }

        // Explore all four possible moves (up, down, left, right)
        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            // Check if the new position is valid and has not been visited
            if (isValid(newX, newY, rows, cols, maze) && !visited[newX][newY]) {
                // Push the new position onto the stack
                s.push({newX, newY});

                // Increase the distance by 1
                distance++;
            }
        }
    }

    // If we reach this point, there is no path to the end position
    return -1;
}

int main() {
    int maze[MAX_ROWS][MAX_COLS] = {
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {1, 1, 0, 1, 1},
        {0, 0, 0, 0, 0}
    };

    int rows = 5;
    int cols = 5;
    int startX = 0;
    int startY = 0;
    int endX = 4;
    int endY = 4;

    int shortestDist = shortestDistance(maze, rows, cols, startX, startY, endX, endY);

    if (shortestDist == -1) {
        cout << "No path found to the end!" << endl;
    } else {
        cout << "Shortest distance to the end: " << shortestDist << endl;
    }

    return 0;
}
