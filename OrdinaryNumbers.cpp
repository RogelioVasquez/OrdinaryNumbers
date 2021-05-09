#include <iostream>


// Returns the amount of ordinary numbers from 1 - n
int check(int n) {

	// Get's the amount of digits in n
	int len = (int)log10(n) + 1;

	if (n <= 9)
		return n;

	int x = 0;
	int y = 1;

	for (int i = 0; i < len; i++) {

		// Loops through integer and looks for repeating values
    // (1 - 9, 11 - 99, 111 - 999 etc.)
		for (int j = 1; j <= 9; j++) {

			if ((j * y) > n)
				break;

			x++;
		}

		y = (y * 10) + 1;
	}

	return x;
}

int main() {

	int t;
	std::cin >> t;
  
	for (int x = 0; x < t; x++) {

		int n;
		std::cin >> n;
		std::cout << check(n) << std::endl;
	}
}
