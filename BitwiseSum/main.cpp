#include <iostream>

int sum(int a, int b) {
	while (b) {
		int carry = (a & b) << 1;

		a ^= b;

		b = carry;
	}
	return a;
}

int main() {
	std::cout << sum(-4, -12);
	return 0;
}