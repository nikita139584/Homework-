#include "Table.h"
#include <iostream>
using namespace std;
void Table::SetThenumber(int new_the_number_of_legs_on_the_table) {
	if (new_the_number_of_legs_on_the_table != 4) {
		cout << "Incorrect value for the number of legs on the table. Please, enter 4.\n";
	}
	else {
		the_number_of_legs_on_the_table = new_the_number_of_legs_on_the_table;
	}
}
int Table::GetThenumber() {
	return the_number_of_legs_on_the_table;
}