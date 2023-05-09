#include <iostream>
#include<vector>
#include<cmath>

int main() {//I will add notes with a Git branch merge to test this feature

	int to;
	std::cout << "Run prime sieve to:";
	std::cin >> to;

	std::vector<int> primes{ 1,2, };

	int on{ 3 };

	while (on <= to) {

		bool is_prime{ true };

		for (int count{ 1 }; (count < primes.size() && primes[count] < on / primes[count - 1]) && is_prime == true; ++count) {

			if (on % primes[count] == 0) {
				is_prime = false;
			}
		}

		if (is_prime == true) {
			primes.emplace_back(on);

		}

		++on;


	}

	for (int count{ 0 }; count < primes.size(); ++count) {

		std::cout << primes[count] << '\t';

		if ((count + 1) % 10 == 0) {
			std::cout << '\n';

		}
	}
}
//don't worry, notes are on the way! I will add notes with a branch merge to test this feature
//this file and ones like it have v1 in their names only temporarily for complicated reasons related to trouble renaming/deleting files with a failing SSD