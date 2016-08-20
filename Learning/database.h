#include <iostream>
#include <vector>
#include "Airline.h"

using namespace std;

namespace Records{
	class Database
	{
	public:
		Database();
		Airline& addPassenger(string fullName, string destination, int price, int mSeat, bool status);
		Airline& getPassenger(string fullName);
		void displayAll() const;
		void displayPassenger(string fullName) const;

	private:
		vector<Airline> mPassengers;
	};
}
