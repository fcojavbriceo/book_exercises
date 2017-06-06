#include <iostream>
#include <iomanip>
using namespace std;

const int const_width = 5;

int main()
{
	int p = 0;
	cout << "Enter p: ";
	cin >> p;
	int *row_odd = new int[p+1];
	int *row_even = new int[p+1];

	for (int i = 1; i <= p; i++) {
		int width = (p - i) * const_width;
		((i % 2) ? row_odd[0] : row_even[0]) = 1;
		((i % 2) ? row_odd[i-1] : row_even[i-1]) = 1;
		((i + 1 < p) ? row_odd[i+1] = row_even[i+1] = 0 : 0);
		cout << setw(width);
		for (int j = 0; j < i; j++) {
			cout << ((i % 2) ? row_odd[j] : row_even[j]);
			cout << setw(2 * const_width);	
			if (j - 1 >= 0) {
				int a = ((i % 2) ? row_odd[j] : row_even[j]);
				int b = ((i % 2) ? row_odd[j-1] : row_even[j-1]);
				((i % 2) ? row_even[j] : row_odd[j]) = a + b;
			}			
			
		}

		cout << endl;
	}


	return 0;
}