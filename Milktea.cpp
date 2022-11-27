#include <iostream>
#include "Milktea.h"
int Milktea::get_priceDiscounted()
{
	return(Price * discount);
};

int Milktea::data_display()
{
	cout << "the name is:" << name << endl;
	cout << "the Price is:" << Price << endl;
	cout << "the ColdOrNot is:" << ColdOrNot << endl;
	cout << "the discount is:" << discount << endl;
	return 0;
}