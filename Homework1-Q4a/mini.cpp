/*
 * mini.cpp
 *
 *  Created on: 21 Jan 2014
 *      Author: Raj
 */

#include <iostream>
using namespace std;

int main() {
	float a[]={10,7,3,8,1,4,9,6,5,2};

	for(int i=0;i<10;i++) {
			if(a[i]<a[i-1]) {
				cout << a[i] << " less than " << a[i-1] << endl; //do not print a[] parts
			}
			else {
				;
			}
	}
}
