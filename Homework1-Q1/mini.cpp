/*
 * mini.cpp
 *
 *  Created on: 17 Jan 2014
 *      Author: Raj
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	//(I) z(x+y)

	double x = 3;
	double y = 4;
	int z = 5;

	int a = (x+y);
	int b = (z*a);

	cout << b << endl;

	//(II) (x^2 + y^2)^0.5

	double c = pow(x,2) + pow(y ,2);
	double r = sqrt(c);

	cout << r << endl;

	//(III) 4pir^2

	double R = pow(r,2);

	cout << 2*(M_PI)*R << endl;

	//(IV) cos (30 deg) = cos (0.523598776 rad)

	cout << cos(0.523598776) << endl;

	//(V) arctan (-x/y)

	cout << atan(-(x/y)) << endl;

	//e^(y/x^2)

	cout << exp(y/pow(x,2)) << endl;
}
