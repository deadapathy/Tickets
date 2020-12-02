#pragma once
#include "Ticket.h"

class Vector {
	Ticket* els;

	int cur_size;
	int buff_size;

public:
	Vector();
	Vector(int size);
	void Filter();

	void push_back(const Ticket& obj);
	void pop_back();
	int size();
	Ticket& operator[](int index);
	~Vector();
};