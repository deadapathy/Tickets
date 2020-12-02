#include <fstream>
#include "Ticket.h"
#include "Vector.h"


int main() {


	//	ifstream file;
		//file.open("ticket.txt");
	int n;
	cin >> n;
	Vector v(n);
	Ticket obj;


	for (int i = 0; i < n; i++)
	{
		cin >> obj;
		v.push_back(obj);
	}

	/*	 for (int i = 0; i < v.size(); i++)
		{
			cout << v[i];
		}
		*/

	v.Filter();
}