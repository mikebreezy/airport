#include <string>

using namespace std;

namespace Records{
	class Airline
	{
	public:
		Airline();
		void setPrice(int price);
		int getPrice() const;
		void setSeatNo(int seatNo);
		int getSeatNo() const;
		void setDestination(string destination);
		string getDestination() const;
		int calculatePrice();
		void setPassengerName(const string& name);
		const string& getPassengerName() const;
		void setHasEliteSuperRewardsStatus(bool status);
		bool getHasEliteSuperRewardsStatus() const;
		void display() const;
	private:
		string mPassengerName;
		string mDestination;
		int seat;
		int mPrice;
		bool eliteRewardsStatus;
	};
}