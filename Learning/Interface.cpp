#include "stdafx.h"
#include <iostream>
#include <stdexcept>
#include <exception>
#include "database.h"

using namespace std;
using namespace Records;

string destination;
int fare;
int displayMenu();
void addPassenger(Database& db);
void enterPassName(Database& db);
//void price(Airline& al);

int main(){

	Database airLineDB;
	
	bool done = false;

	while (!done){
		int selection = displayMenu();
		switch (selection){
		case 1:
			fare = 40000;
			destination = "South Africa";
			addPassenger(airLineDB);
			break;
		case 2:
			fare = 38000;
			destination = "Nigeria";
			addPassenger(airLineDB);
			break;
		case 3:
			fare = 45000;
			destination = "Morocco";
			addPassenger(airLineDB);
			break;
		case 4:
			fare = 41000;
			destination = "Libya";
			addPassenger(airLineDB);
			break;
		case 5:
			enterPassName(airLineDB);
			break;
		case 6:
			airLineDB.displayAll();
			break;
		case 0:
			done = true;
			break;
		default:
			cerr << "Invalid Option" << endl;
			break;
		}
		
	}
	system("pause");

	return 0;
}

int displayMenu()
{
	int selection;
	cout << "CHOOSE PASSENGER'S DESTINATION" << endl;
	cout << "==============================" << endl;
	cout << "1. South Africa" << endl;
	cout << "2. Nigeria" << endl;
	cout << "3. Morocco" << endl;
	cout << "4. Libya" << endl;
	cout << "5. Display Specific Passenger" << endl;
	cout << "6. Display All Passengers" << endl;
	cout << "0. Quit" << endl;
	cout << "==============================" << endl;
	cin >> selection;

	return selection;
}

void enterPassName(Database& db){

	string name;

	cout << "Enter Passenger's Name" << endl;
	cin.ignore();
	getline(cin, name);

	try{
		db.displayPassenger(name);
	}
	catch (const exception& exception){
		cerr << "Sorry this operation couldn't be performed: " << exception.what() << endl;
	}
}

//void price(Airline& al){
//	al.setPrice(fare);
//	al.getPrice();
//	al.calculatePrice();
//}

void addPassenger(Database& db)
{
	string passName;
	int passSeat;
	bool eliteStatus;

	cout << "Passenger's Name" << endl;
	cin.ignore();
	getline(cin, passName);
	cout << "Seat No: " << endl;
	cin >> passSeat;
	cout << "Elite Rewards Status...? " << endl;
	cin >> eliteStatus;

	try{
		db.addPassenger(passName, destination, fare, passSeat, eliteStatus);
	}
	catch (const exception& exception){
		cerr << "Unable to add new passenger" << exception.what() << endl;
	}
}