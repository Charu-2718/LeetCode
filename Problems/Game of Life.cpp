#include <vector>
#include <cmath>

class Solution {
public:
    bool isNeighbor(int x, int y, const vector<vector<int>>& board) {
        return (x >= 0 && y >= 0 && x < board.size() && y < board[0].size());
    }

    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int columns = board[0].size();

        vector<int> dx = {0, 1, 1, 1, 0, -1, -1, -1};
        vector<int> dy = {1, 1, 0, -1, -1, -1, 0, 1};

        for (int row = 0; row < rows; row++) {
            for (int column = 0; column < columns; column++) {

                int count_live_neighbor = 0;

                for (int i = 0; i < 8; i++) {
                    int curr_x = row + dx[i];
                    int curr_y = column + dy[i];

                    if (isNeighbor(curr_x, curr_y, board) && abs(board[curr_x][curr_y]) == 1) {
                        count_live_neighbor++;
                    }
                }

                if (board[row][column] == 1 && (count_live_neighbor < 2 || count_live_neighbor > 3)) {
                    // Mark cell to be updated to 0
                    board[row][column] = -1;
                }
                if (board[row][column] == 0 && count_live_neighbor == 3) {
                    // Mark cell to be updated to 1
                    board[row][column] = 2;
                }
            }
        }

        // Update the board based on the marked cells
        for (int row = 0; row < rows; row++) {
            for (int column = 0; column < columns; column++) {
                if (board[row][column] == -1) {
                    board[row][column] = 0;
                } else if (board[row][column] == 2) {
                    board[row][column] = 1;
                }
            }
        }
    }
};
