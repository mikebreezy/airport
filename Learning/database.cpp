#include "stdafx.h"
#include "database.h"
#include <iostream>

using namespace std;

namespace Records{
	Database::Database()
	{}

	Airline& Database::addPassenger(string fullName, string destination, int price, int mSeat, bool status)
	{
		Airline passenger;
		passenger.setPassengerName(fullName);
		passenger.setDestination(destination);
		passenger.setPrice(price);
		passenger.setSeatNo(mSeat);
		passenger.setHasEliteSuperRewardsStatus(status);
		passenger.calculatePrice();
		mPassengers.push_back(passenger);
		return mPassengers[mPassengers.size() - 1];
	}

	void Database::displayPassenger(string fullName) const
	{
		for (auto pass : mPassengers){
			if (pass.getPassengerName() == fullName){
				pass.display();
			}
			else{
				throw runtime_error("No Passenger Found");
			}
		}
	}

	void Database::displayAll() const
	{
		for (const auto pass: mPassengers){
			pass.display();
		}
	}
}
