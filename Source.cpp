#include <iostream>
using namespace std;

int main() {

	int i, a, b, s, max, min;

	cout << "Please, enter number ONE and number TWO \n";
	cin >> a >> b;
	
	if (a <= b) max = a, min = b;
	if (a > b) max = b, min = a;

	cout << "Return number(s) between " << a << " and " << b << ":\n";
	for (i = max; i <= min; i++) cout << " " << i; 
	cout << "\n";
	
	cout << "Return even number(s):\n";
	for (i = max; i <= min; i++) if (i % 2 == 0) cout << " " << i;
	cout << "\n";
	
	cout << "Return number(s) multiplicity 7:\n";
	for (i = a; i <= b; i++) if (i % 7 == 0)  cout << " " << i; 
	cout << "\n";
		
	return 0;
}