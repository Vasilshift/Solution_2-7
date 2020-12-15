#include <iostream>
using namespace std;

int main() {

	int i, a, b;

	cout << "Please, enter number ONE and number TWO \n";

	cin >> a >> b;

	cout << "Return number(s) between " << a << " and " << b << " :\n";
	
	for (i = a; i <= b; i++) {

		cout << " " << i;

	}

	cout << "\n";

	cout << "Return even number(s): \n";

	for (i = a; i <= b; i++) {

		if (i % 2 == 0) {
			cout << " " << i;
		}
		
	}
	
	cout << "\n";
	cout << "Return not even number(s): \n";

	for (i = a; i <= b; i++) {

		if (i % 2 != 0) {
			cout << " " << i;
		}
	}

	cout << "\n";
	cout << "Return all number(s) multiplicity 7: \n";

	for (i = a; i <= b; i++) {

		if (i % 7 == 0) {
			cout << " " << i;
		}
	}



	return 0;
}