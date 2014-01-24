/*
 * mini.cpp
 *
 *  Created on: 22 Jan 2014
 *      Author: Raj
 */


#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int A[] = { 10, 7, 3, 8, 1, 4, 9, 6, 5, 2 };
	int Switch = 0;
	int Switch2;
	int b = 0;

	do {
		for (int i = 1; i < 10; i++) {

			if (A[i] < A[i - 1]) {
				int temp = A[i - 1];
				A[i - 1] = A[i];
				A[i] = temp;
				Switch++;
			}
			else {
				;
			}
		};

		if (Switch!=0) {
			Switch2=Switch + Switch2;
			Switch=0;
		}
		else {
			b = 1;
		}
	}
	while (b != 1);

	for (int i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	cout << "Number of switches is " << Switch2 << endl;
}



