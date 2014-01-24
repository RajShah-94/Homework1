/*
 * mini.cpp
 *
 *  Created on: 21 Jan 2014
 *      Author: Raj
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int m1 = 139.57; //m(pion)
	int m2 = 938.27; //m(proton)
	int p1 = 500; //p(lab)
	//p2 is p(cm)
	//E1 is E(lab)
	//E2 is E(cm)

	double a = pow(m1,2) + pow(p1,2); //m(pion)^2 + p(lab)^2
	double E1 = sqrt(a); //root of above, E(lab)

	cout << "E(lab) is " << E1 << " MeV" << endl;

	double b = pow(m1,2) + pow(m2,2) + (2*m2*p1); //m(pion)^2 + p(lab)^2
	double E2 = sqrt(b); //root of above, E(lab)

	cout << "E(cm) is " << E2 << " MeV" << endl;

	double p2 = p1*(m2/E2);

	cout << "P(cm) is " << p2 << " MeV" << endl;
}
