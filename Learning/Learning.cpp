// Learning.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Airline.h"
#include <string>
#include <iostream>
#include <array>
#include <memory>
#include <vector>
#include <iterator>
#include "database.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	Database airLineDB;
	addPassenger(airLineDB);
	struct Employee
	{
		string fName;
		string sName;
		int salary;
	};

	vector<Airline> myRecords;
	Employee anEmployee;
	anEmployee.fName = "Michael";
	anEmployee.sName = "Obado";
	anEmployee.salary = 80000;

	array <string, 3> girls = { "Florence", "Lucy", "Judith" };

	auto employee = make_unique<Employee>();
	//unique_ptr<Employee> employee(new Employee);

	cout << "Employee's name is " << anEmployee.fName << " " << anEmployee.sName << endl;
	cout << "His salary is KES " << anEmployee.salary << endl;
	cout << employee->salary << endl;

	for (auto name : girls)
	{
		cout << name << endl;
	}

	Airline myAirline;
	myAirline.setPassengerName("Michael Obado");
	myAirline.setNumberOfMiles(1000);
	myAirline.setHasEliteSuperRewardsStatus(false);
	int transportFee = myAirline.calculatePriceInDollars();
	string fullName = myAirline.getPassengerName();
	myRecords.push_back(myAirline);

	cout << "Passenger's Name: " << fullName << endl;
	cout << "Number of miles to be covered: " << myAirline.getNumberOfMiles() << endl;
	cout << "Member of EliteSupeerRewards? " << myAirline.getHasEliteSuperRewardsStatus() << endl;
	cout << "Transport charges: " << transportFee << endl;
	cout << "Thanks a lot customer. Travel Safe" << endl;

	auto myAirline2 = make_unique<Airline>();
	myAirline2->setPassengerName("Phelix Ochieng'");
	myAirline2->setNumberOfMiles(3000);
	myAirline2->setHasEliteSuperRewardsStatus(false);
	myAirline2->calculatePriceInDollars();
	//myRecords.push_back(myAirline2);

	cout << myAirline2->getPassengerName() << endl;
	cout << myAirline2->calculatePriceInDollars() << endl;

	for (auto& myRecord : myRecords)
	{
		if (myRecord.getPassengerName() == "Michael Obado")
		{
			//cout << myRecord << endl;
		}
		
	}

	for (auto iterator = cbegin(myRecords); iterator != cend(myRecords); iterator++)
	{
		//cout << *iterator << endl;
	}

	system("pause");
	return 0;
}

