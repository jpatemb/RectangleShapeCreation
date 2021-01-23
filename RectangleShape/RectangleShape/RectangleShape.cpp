#include <iostream>
#include <iomanip>
using namespace std;

void main() {

	int height, width;
	cout << "Height: ";
	cin >> height;
	cout << "Width: ";
	cin >> width;
	char symbol;
	cout << "Symbol: ";
	cin >> symbol;

	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++) {
			cout << setw(5) << symbol;
		}
		cout << endl;
	}

	system("pause>0");
}