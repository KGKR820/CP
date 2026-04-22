#include <iostream>
#include <string>
#include <vector>

std::string convert(std::string s, int numRows) {
    if (numRows == 1 || numRows >= s.length()) return s;

    std::vector<std::string> rows(numRows);
    int currRow = 0;
    bool goingDown = false;

    for (char c : s) {
        rows[currRow] += c;
        if (currRow == 0 || currRow == numRows - 1) goingDown = !goingDown;
        currRow += goingDown ? 1 : -1;
    }

    std::string output;
    for (const std::string& row : rows) {
        output += row;
    }
    return output;
}

int main() {
    std::cout << convert("PAYPALISHIRING", 4);
    return 0;
}