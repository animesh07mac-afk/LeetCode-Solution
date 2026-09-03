class Solution {
public:
    void bfs(int row, int col, vector<vector<int>>& image, int color) {
        queue<pair<int, int>> q;
        int n = image.size();
        int m = image[0].size();
        int originalColor = image[row][col];
        if (originalColor == color)
            return;
        q.push({row, col});
        image[row][col] = color;
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];

                if (nrow >= 0 && nrow < n &&
                    ncol >= 0 && ncol < m &&
                    image[nrow][ncol] == originalColor) {

                    image[nrow][ncol] = color;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                   int sr, int sc, int color) {
        bfs(sr, sc, image, color);
        return image;
    }
};