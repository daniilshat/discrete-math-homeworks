#include <iostream>

int main() {
    int a, b;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    std::cin >> a >> b;

    do {
        a %= b;
        std::swap(a,b);
    } while (b);

    std::cout << b;

    return 0;
}