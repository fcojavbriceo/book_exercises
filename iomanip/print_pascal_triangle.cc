#include <iostream>
#include <iomanip>
using namespace std;

const int const_width = 5;

int main()
{
	int p = 0;
	cout << "Enter p: ";
	cin >> p;

	for (int i = 0; i < p; i++) {
		int out = 1;
		int width = (p - i) * const_width;
		cout << setw(width);
		for (int j = 0; j <= i; j++) {
			cout << out << setw(2 * const_width);
			out = out * (i - j) / (j + 1);
		}

		cout << endl;
	}


	return 0;
}