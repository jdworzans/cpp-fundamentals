#pragma once
#include <string>

std::string divide(int first, int second) {
    if (second == 0) {
        return "Division by 0";
    }
    else {
        return std::to_string(first / second);
    }
}

std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
        return std::to_string(first + second);
    } else if (command == "subtract") {
        return std::to_string(first - second);
    } else if (command == "multiply") {
        return std::to_string(first * second);
    } else if (command == "divide") {
        return divide(first, second);
    }
    return "Invalid data";
}
