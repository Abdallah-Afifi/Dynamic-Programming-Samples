#include <iostream>
#include <vector>

// Recursive solution
int fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Dynamic programming solution using memoization
int fibonacciDP(int n, std::vector<int>& memo) {
    if (n <= 1) return n;

    if (memo[n] != -1) return memo[n];

    memo[n] = fibonacciDP(n - 1, memo) + fibonacciDP(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 10;
    std::cout << "Recursive Fibonacci(" << n << "): " << fibonacciRecursive(n) << std::endl;

    std::vector<int> memo(n + 1, -1);
    std::cout << "DP Fibonacci(" << n << "): " << fibonacciDP(n, memo) << std::endl;

    return 0;
}

