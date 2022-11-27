#pragma once
#include <iostream>
#include <string>
using namespace std;
class Milktea
{
private:
	string name;
	string ColdOrNot;
	float Price;
	float discount;
public:
	Milktea(string a, string b, float c, float d)
	{
		name = a;
		ColdOrNot = b;
		Price = c;
		discount = d;
	};
	int get_priceDiscounted();
	int data_display();
	~Milktea() { cout << "调用析构函数\n"; }
};
