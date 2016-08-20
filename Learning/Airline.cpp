#include "stdafx.h"
#include "Airline.h"
#include <string>
#include <iostream>

using namespace std;

namespace Records
{
	Airline::Airline()
	{
		mPassengerName = "Unknown Passenger";
		mPrice = 0;
		seat = 0;
		mDestination = "Unknown Destination";
		eliteRewardsStatus = false;
	}
	void Airline::setPrice(int price)
	{
		mPrice = price;
	}
	int Airline::getPrice() const
	{
		return mPrice;
	}
	void Airline::setHasEliteSuperRewardsStatus(bool status)
	{
		eliteRewardsStatus = status;
	}
	bool Airline::getHasEliteSuperRewardsStatus() const
	{
		return eliteRewardsStatus;
	}
	int Airline::calculatePrice()
	{
		if (getHasEliteSuperRewardsStatus() == 1){
			return static_cast<int>(getPrice() * 0.9);
		}
		return getPrice();
	}
	void Airline::setDestination(string destination)
	{	
		mDestination = destination;
	}
	string Airline::getDestination() const
	{
		return mDestination;
	}
	void Airline::setPassengerName(const string& name)
	{
		mPassengerName = name;
	}
	const string& Airline::getPassengerName() const
	{
		return mPassengerName;
	}
	void Airline::setSeatNo(int seatNo)
	{
		seat = seatNo;
	}
	int Airline::getSeatNo() const
	{
		return seat;
	}
	void Airline::display() const
	{
		cout << "==============================================" << endl;
		cout << "Employee Name: " << getPassengerName() << endl;
		cout << "Destination: " << getDestination() << endl;
		cout << "Seat No.: " << getSeatNo() << endl;
		cout << "Elite Super Rewards Status: " << getHasEliteSuperRewardsStatus() << endl;
		cout << "Amount Paid: " << getPrice() << endl;
		cout << "==============================================" << endl;
	}
}
