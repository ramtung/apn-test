/*
سلام دنیا
یک برنامه‌ی بسیار ساده در زبان سی‌پلاس‌پلاس که صرفاً یک رشته را در خروجی می‌نویسد.
*/
#include <iostream>
using namespace std;

int main()
{
	string name;
	cout << "Please enter your name:";
	cin >> name;
	if (name == "Ramtin") {
		cout << "NAAAAH! Ramtin?!\n";
		return 1;
	}
	cout << "Hello " << name << "\n";
	return 0;
}