#include "Vector.h"

Vector::Vector()
{
	els = nullptr;
	buff_size = 0;
	cur_size = 0;
}

Vector::Vector(int size)
{
	buff_size = size;
	cur_size = 0;
	els = new Ticket[buff_size];
}

void Vector::Filter()
{

	int choise;
	while (true) {


		cout << "Choise 1 to filter by Route number" << endl;
		cout << "Choise 2 to filter by Point of departure" << endl;
		cout << "Choise 3 to filter by Departure time" << endl;
		cout << "Choise 4 to filter by Destanation" << endl;
		cout << "Choise 5 to filter by Arrival Time" << endl;
		cout << "Choise 6 to filter by Price" << endl;
		cout << "Choise 0 to exit" << endl;
		cin >> choise;

		if (!choise) {
			break;
		}

		switch (choise)
		{
		case 1: {
			int route_no;
			cin >> route_no;
			for (int i = 0; i < size(); i++) {
				if (els[i].getRoute_no() == route_no) {
					cout << els[i];
				}
			}
		}
			  break;
		case 2: {
			string point_of_departure;
			cin >> point_of_departure;
			for (int i = 0; i < size(); i++) {
				if (els[i].getPoint_of_departure() == point_of_departure) {
					cout << els[i];
				}
			}
		}
			  break;
		case 3: {
			string departure_time;
			cin >> departure_time;
			for (int i = 0; i < size(); i++) {
				if (els[i].getDeparture_time() == departure_time) {
					cout << els[i];
				}
			}
		}
			  break;
		case 4: {
			string destanation;
			cin >> destanation;
			for (int i = 0; i < size(); i++) {
				if (els[i].getDestination() == destanation) {
					cout << els[i];
				}
			}
		}
			  break;
		case 5: {
			string arrival_time;
			cin >> arrival_time;
			for (int i = 0; i < size(); i++) {
				if (els[i].getArrival_time() == arrival_time) {
					cout << els[i];
				}
			}
		}
			  break;
		case 6: {
			double price;
			cin >> price;
			for (int i = 0; i < size(); i++) {
				if (els[i].getPrice() == price) {
					cout << els[i];
				}
			}
		}
			  break;

		default:
			break;
		}
	}
}



void Vector::push_back(const Ticket& obj)
{
	if (buff_size == 0 && cur_size == 0) {
		buff_size = 4;
		els = new Ticket[buff_size];
	}
	else if (cur_size <= buff_size) {
		buff_size *= 2;
		Ticket* tmp;
		tmp = new Ticket[buff_size];

		for (int i = 0; i < cur_size; i++) {
			tmp[i] = els[i];

		}

		delete[] els;
		els = tmp;
	}
	els[cur_size++] = obj;
}

void Vector::pop_back()
{
	cur_size--;
}

int Vector::size()
{
	return cur_size;
}

Ticket& Vector::operator[](int index)
{
	return els[index];
}

Vector::~Vector()
{
	if (els != nullptr)
		delete[] els;
}
