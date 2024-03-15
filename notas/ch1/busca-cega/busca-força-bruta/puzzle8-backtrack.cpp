#include <iostream>
#include <vector>
#include <unordered_set>
#include <utility>

typedef std::vector<std::vector<int>> matrix;
typedef std::pair<int, int> coord;

enum Dir {
    d_UP, d_DOWN, d_RIGHT, d_LEFT, d_NONE
};

class Puzzle8 {
private:
    matrix state;

    size_t rows(){
        return state.size();
    }

    size_t cols(){
        return state[0].size();
    }

public:
    Puzzle8(matrix initial_state) {
        state = initial_state;
    }

    matrix get_state() {
        return state;
    }

    void move(Dir direction) {
        coord empty_pos = find_empty();

        switch (direction) {
            case d_UP:
                if (empty_pos.first > 0)
                    std::swap(state[empty_pos.first][empty_pos.second], state[empty_pos.first - 1][empty_pos.second]);
                break;
            case d_DOWN:
                if (empty_pos.first < 2)
                    std::swap(state[empty_pos.first][empty_pos.second], state[empty_pos.first + 1][empty_pos.second]);
                break;
            case d_LEFT:
                if (empty_pos.second > 0)
                    std::swap(state[empty_pos.first][empty_pos.second], state[empty_pos.first][empty_pos.second - 1]);
                break;
            case d_RIGHT:
                if (empty_pos.second < 2)
                    std::swap(state[empty_pos.first][empty_pos.second], state[empty_pos.first][empty_pos.second + 1]);
                break;
            default:
                break;
        }
    }

    coord find_empty() {
        for (int i = 0; i < rows(); ++i) {
            for (int j = 0; j < cols(); ++j) {
                if (state[i][j] == 0) {
                    return std::make_pair(i, j);
                }
            }
        }
        return std::make_pair(-1, -1); // Indicando que não encontrou a posição vazia
    }

    bool is_goal() {
        int goal_state[3][3] = {
            {0, 1, 2}, 
            {3, 4, 5}, 
            {6, 7, 8}
        };
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (state[i][j] != goal_state[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }

    std::string str() {
        std::string str_rep = "";
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                str_rep += std::to_string(state[i][j]) + " ";
            }
            str_rep += "\n";
        }
        return str_rep;
    }

    std::vector<Dir> get_possible_moves() {
        std::vector<Dir> possible_moves;
        coord empty_pos = find_empty();
        if (empty_pos.second > 0) {
            possible_moves.push_back(d_LEFT);
        }
        if (empty_pos.first > 0) {
            possible_moves.push_back(d_UP);
        }
        if (empty_pos.first < 2) {
            possible_moves.push_back(d_DOWN);
        }
        if (empty_pos.second < 2) {
            possible_moves.push_back(d_RIGHT);
        }
        return possible_moves;
    }

    Dir get_inverse(Dir dir) {
        switch (dir) {
            case d_UP:
                return d_DOWN;
            case d_DOWN:
                return d_UP;
            case d_LEFT:
                return d_RIGHT;
            case d_RIGHT:
                return d_LEFT;
        }
        return d_NONE;
    }
};

class BacktrackingSolver {
private:
    Puzzle8 puzzle;
    std::unordered_set<std::string> visited;

public:
    BacktrackingSolver(Puzzle8 puzzle) : puzzle(puzzle) {}

    matrix solve() {
        return backtrack();
    }

    matrix backtrack() {
        std::string state_str = puzzle.str();
        if (visited.find(state_str) != visited.end()) {
            return {};
        }

        visited.insert(state_str);

        if (puzzle.is_goal()) {
            return {puzzle.get_state()};
        }

        for (Dir move : puzzle.get_possible_moves()) {
            puzzle.move(move);
            auto solution = backtrack();
            if (!solution.empty()) {
                return {puzzle.get_state()};
            } else {
                Dir reverse = puzzle.get_inverse(move);
                puzzle.move(reverse);
            }
        }

        return {};
    }
};

int main() {
    matrix initial_state = {
        {1, 2, 3}, 
        {4, 0, 5}, 
        {6, 7, 8}
    };
    Puzzle8 puzzle(initial_state);
    std::cout << "Estado inicial:\n" << puzzle.str() << std::endl;

    puzzle.move(d_UP);
    std::cout << "Após mover para cima:\n" << puzzle.str() << std::endl;

    BacktrackingSolver solver(puzzle);
    auto solution = solver.solve();

    if (!solution.empty()) {
        std::cout << "Solução encontrada:\n";
        for (auto& row : solution) {
            for (int num : row) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Não foi possível encontrar uma solução." << std::endl;
    }

    return 0;
}
