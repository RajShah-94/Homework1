/*
 * mini.cpp
 *
 *  Created on: 21 Jan 2014
 *      Author: Raj
 */

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	float a[]={1,3,5,7,9,11,13,15,17};

	float b[7];

	for(int i=0;i<9;i++){
		if(i>5) {
			b[i]=a[i+2];
		}else if(i>3){
		b[i]=a[i+1];
		}else{
		b[i]=a[i];
		}

	}

	for(int i=0;i<7;i++){
		cout<<b[i]<<endl;
	}
}
