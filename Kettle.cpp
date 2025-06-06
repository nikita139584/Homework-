#include "Kettle.h"
#include <iostream>
using namespace std;
void	Kettle::Set_temperature_heating(int new_temperature_heating) {
	if (new_temperature_heating < 0 || new_temperature_heating > 100) {
		cout << "Incorrect value temperature heating. Please, enter 0-100.\n";
	}
	else {
		Temperature_heating = new_temperature_heating;
	}
}
int Kettle::Get_temperature_heating() {
	return Temperature_heating;

}

