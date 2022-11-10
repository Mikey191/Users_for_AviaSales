#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
//структура дата
struct _date {
	int day;
	int month;
	int year;
};
//структура время
struct _time {
	int hour;
	int minutes;
};
//структура пассажира
struct passenger {
	string fname;
	string sname;
	_date birthday;
};

//struct рейс
struct flight {
	int flight_number;
	string out_city;
	string in_city;
	_date flight_date;
	_time start_flight;
	_time end_flight;
	string price;
	int count_seats;
};
//билет
class ticket {
public:
	flight f;
	passenger p;
	bool book_ticket = 0;
	void addticket(
		int flight_number,
		string out_city,
		string in_city,
		_date flight_date,
		_time start_flight,
		_time end_flight,
		string price,
		int count_seats,
		string fname,
		string sname,
		_date birthday
	) {
		f.flight_number = flight_number;
		f.out_city = out_city;
		f.in_city = in_city;
		f.flight_date = flight_date;
		f.start_flight = start_flight;
		f.end_flight = end_flight;
		f.price = price;
		f.count_seats = count_seats;
		p.fname = fname;
		p.sname = sname;
		p.birthday = birthday;
	}
	void bookticket() { book_ticket = 1; }
};
void OutCity();
void InCity();
void OutInCity();

int main() {
	//map<int, flight>;
	vector<flight> fl;
	vector<ticket> tk;
	cout << "\t\tHello User!" << endl;
	passenger p1;
	cout << "Enter your First Name: ";
	cin >> p1.fname;
	cout << "Enter your Second Name: ";
	cin >> p1.sname;
	cout << "Enter your birthday: ";
	cin >> p1.birthday.day;
	cin >> p1.birthday.month;
	cin >> p1.birthday.year;
	int n;
	do {
		cout << "You can chose: " << endl;
		cout << "1 - Out city and date / timerange " << endl;
		cout << "2 - In city and date / timerange" << endl;
		cout << "3 - Out & In city and date / timerange" << endl;
		cout << "0 - exit" << endl;
		cout << ">>>>";
		cin >> n;
		switch (n) {
		case 1: 
			OutCity(fl,tk);
			break;
		case 2: 
			InCity();
			break;
		case 3: 
			OutInCity();
			break;
		}
	} while (n != 0);

	return 0;
}

void OnlyDateOut(vector<flight> f,vector<ticket> t) {
	string temp_outcity;
	int temp_first_day;
	int temp_first_month;
	int temp_first_year;

	cout << "Enter name of OUT City: ";
	cin >> temp_outcity;
	cout << "Enter day: ";
	cin >> temp_first_day;
	cout << "Enter month: ";
	cin >> temp_first_month;
	cout << "Enter year: ";
	cin >> temp_first_year;


}

void RangeDateOut(vector<flight> f, vector<ticket> t) {
	string temp_outcity;
	int temp_first_day;
	int temp_first_month;
	int temp_first_year;

	int temp_second_day;
	int temp_second_month;
	int temp_second_year;

	cout << "Enter name of OUT City: ";
	cin >> temp_outcity;
	cout << "Enter day out: ";
	cin >> temp_first_day;
	cout << "Enter month out: ";
	cin >> temp_first_month;
	cout << "Enter year out: ";
	cin >> temp_first_year;

	cout << "Enter day in: ";
	cin >> temp_second_day;
	cout << "Enter month in: ";
	cin >> temp_second_month;
	cout << "Enter year in: ";
	cin >> temp_second_year;
}

void OutCity(vector<flight> f, vector<ticket> t)
{
	int button;
	cout << "1 - If you whant only date " << endl;
	cout << "2 - If you whant range date " << endl;
	cout << "0 - exit" << endl;
	do {
		switch (button) {
		case 1: 
			OnlyDateOut(f,t);
			break;
		case 2: 
			RangeDateOut(f,t);
			break;
		}

	} while (button != 0);




}

void InCity()
{
}

void OutInCity()
{
}
