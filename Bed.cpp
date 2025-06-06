#include "Bed.h"
#include <iostream>
using namespace std;
void Bed::SetThenumber(int new_the_number_of_legs_on_the_bed) {
	if (new_the_number_of_legs_on_the_bed != 4) {
		cout << "Incorrect value for the number of legs on the bed. Please, enter 4.\n";
	}
	else {
		the_number_of_legs_on_the_bed = new_the_number_of_legs_on_the_bed;
	}
}
int Bed::GetThenumber() {
	return the_number_of_legs_on_the_bed;
}