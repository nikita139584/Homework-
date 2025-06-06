#include <iostream>
using namespace std;
#include "Pen.h"
void Pen::Set_ink(int new_ink) {
	if (new_ink <= 1 || new_ink >= 3) {
		cout << "The pen can contain from 1 to 3 grams of ink.\n";

	}
	else {
		ink = new_ink;
	}
}
int Pen::Get_ink() {
	return ink;

}