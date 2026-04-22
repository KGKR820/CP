#include <iostream>
#include <vector>

void Arrange(const std::string &digits, int idx, std::vector<std::string> &output, const std::string arr[10], std::string current) {
    if (idx == static_cast<int>(digits.length())) {
        if (!current.empty()) output.push_back(current);
        return;
    }
    int digit = digits[idx] - '0';
    for (char ch : arr[digit]) {
        Arrange(digits, idx + 1, output, arr, current + ch);
    }
}

std::vector<std::string> letterCombinations(const std::string &digits) {
    std::string arr[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    std::vector<std::string> output;
    if (!digits.empty())
        Arrange(digits, 0, output, arr, "");
    return output;
}

int main() {
    std::vector<std::string> output = letterCombinations("23");
    for (const std::string &str : output) {
        std::cout << str << " ";
    }
    return 0;
}