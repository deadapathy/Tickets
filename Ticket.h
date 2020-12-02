#pragma once
#include <iostream>
#include <string>
using namespace std;

class Date {
	int year;
	int day;
	int month;

	Date();
	Date(int year, int day, int month);


	

	
};

class Ticket {
private:
	int route_no;
	string point_of_departure;
	Date departure_time;
	string destination;
	Date arrival_time;
	double price;

public:
	Ticket();
	Ticket(int route_no, string point_of_departure, string destination, string departure_time, string arrival_time, double price);


	int getRoute_no();
	string getPoint_of_departure();
	string getDestination();
	Date getDeparture_time();
	Date getArrival_time();
	double getPrice();

	friend istream& operator>>(istream& in, Ticket& obj);
	friend ostream& operator<<(ostream& out, Ticket obj);


};


