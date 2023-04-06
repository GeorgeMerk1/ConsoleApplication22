

#include <iostream>
#include <string>
using namespace std;

struct DateTime {
	int year;
	int month;
	int day;
};
struct listofwork {
	string name;
	int prioritets;
	string description;
	DateTime projektdevilery;
};
int main()
{
	listofwork projekt1{ "supergey", 5, "it is very importent",{1,11,2023} };
	listofwork projekt2{ "megagey", 4, "it is very importent",{2,12,2023} };
	listofwork projekt3{ "ultragey", 3, "it is very importent",{30,6,2023} };
	listofwork projekt4{ "internationalgey", 2, "it is very importent",{27,7,2023} };
	listofwork projekt5{ "universalgey", 1, "it is very importent",{14,6,2023} };
	listofwork geys[5] = {projekt1,projekt2,projekt3,projekt4,projekt5 };
	cout << &geys;
}
