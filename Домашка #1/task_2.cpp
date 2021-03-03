#include <iostream>
#include <cmath>

int gcd(int a, int b) {
	while (b) {
		a %= b;
		std::swap(a, b);
	}
	return a;
}

int main() {
	int x1, y1, x2, y2, result;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	std::cin >> x1 >> y1 >> x2 >> y2;

	result = (gcd(abs(x2 - x1), abs(y2 - y1)) + 1);

	std::cout << result;

	return 0;
}