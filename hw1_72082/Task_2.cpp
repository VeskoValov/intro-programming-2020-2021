#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double radius = 6, x, y, calcRadius;
	cout << "Enter the coordinates (x, y): ";
	cin >> x >> y;
	if (x == 0 && y == 0) { // Condition that checks if the coordinate is at the center
		cout << "Undefined" << endl;
		return 0;
	}
	calcRadius = sqrt(pow(x, 2) + pow(y, 2)); // Calculation of a possible radius
	if (calcRadius > radius) { // Condition that checks if the calculated radius is bigger than the current radius
		cout << "Outside" << endl;
	}
	else if (calcRadius == radius) { // Condition that checks if the calculated radius is even to the current radius
		cout << "Undefined" << endl;
	}
	else {
		double calcInsRadius = 0;
		if (y > 0) { // Condition that checks if the y coordinate is bigger than zero
			calcInsRadius = sqrt(pow(x, 2) + pow((y - 3), 2)); // Calculation of a possible radius in the white halfcircle
			if (calcInsRadius < 1) { // Condition that checks if the insider radius is smaller than one, in order to tell if the coordinate is in the smallest black cirlce
				cout << "Black" << endl;
				return 0;
			}
			else if (calcInsRadius > 1 && calcInsRadius < 3) { // Condition that checks if the coordinate is in the outer halfcircle
				cout << "White" << endl;
				return 0;
			}
		}
		else if (y < 0) { // Condition that checks if the y coordinate is bigger than zero
			calcInsRadius = sqrt(pow(x, 2) + pow((y + 3), 2)); // Calculation of a possible radius in the black halfcircle
			if (calcInsRadius < 1) {// Condition that checks if the insider radius is smaller than one, in order to tell if the coordinate is in the smallest white cirlce
				cout << "White" << endl;
				return 0;
			}
			else if (calcInsRadius > 1 && calcInsRadius < 3) { // Condition that checks if the coordinate is in the outer halfcircle
				cout << "Black" << endl;
				return 0;
			}
		}
		if (calcInsRadius == 1 || calcInsRadius == 3) { // Condition that checks if the calculation is even to one of the radiuses
			cout << "Undefined" << endl;
			return 0;
		}
		if (x < 6 && x >= 0 && y < 6 && y >= 0) { // Condition that checks if the coordinate is in the first quadrant
			cout << "Black" << endl;
		}
		else if (x > -6 && x <= 0 && y < 6 && y >= 0) { // Condition that checks if the coordinate is in the second quadrant
			cout << "White" << endl;
		}
		else if (x > -6 && x <= 0 && y > -6 && y <= 0) { // Condition that checks if the coordinate is in the third quadrant
			cout << "White" << endl;
		}
		else if (x < 6 && x >= 0 && y > -6 && y <= 0) { // Condition that checks if the coordinate is in the fourth quadrant
			cout << "Black" << endl;
		}
	}
	return 0;
}