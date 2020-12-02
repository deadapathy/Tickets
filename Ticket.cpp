#include "Ticket.h"
Ticket::Ticket()
{
	this->route_no = 0;
	this->point_of_departure = "";
	this->departure_time = Date;
	this->destination = "";
	this->arrival_time = "";
	this->price = 0;
}

Ticket::Ticket(int route_no, string point_of_departure, string destination, string departure_time, string arrival_time, double price)
{
	this->route_no = route_no;
	this->point_of_departure = point_of_departure;
	this->departure_time = departure_time;
	this->destination = destination;
	this->arrival_time = arrival_time;
	this->price = price;
}

int Ticket::getRoute_no()
{
	return 0;
}

string Ticket::getPoint_of_departure()
{
	return point_of_departure;
}

string Ticket::getDeparture_time()
{
	return departure_time;
}

string Ticket::getDestination()
{
	return destination;
}

string Ticket::getArrival_time()
{
	return arrival_time;
}

double Ticket::getPrice()
{
	return price;
}

istream& operator>>(istream& in, Ticket& obj)
{
	cout << "Enter Route number, Point of Departure, Departure time, Destanation, Arrival time, Price" << endl;
	in >> obj.route_no >> obj.point_of_departure >> obj.departure_time >> obj.destination >> obj.arrival_time >> obj.price;
	return in;
}

ostream& operator<<(ostream& out, Ticket obj)
{
	out << obj.route_no << " " << obj.point_of_departure << " " << obj.departure_time << " " << obj.destination << " " << obj.arrival_time << " " << obj.price << endl;
	return out;

}
