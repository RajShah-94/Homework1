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
		 for (int i = 1; i < 10; i++) {
			 if (A[i] < A[i - 1]) {

				 int temp = A[i - 1];
				 A[i - 1] = A[i];
				 A[i] = temp;
				 Switch++;
			 }

		 }

	cout << Switch << endl;
}
