/*
خواندن از ورودی در حلقه
این برنامه تعدادی کلمه را از ورودی می‌خواند و در صورتی که کلمه‌ای تکرار شود این موضوع را با نمایش پیغامی اطلاع می‌دهد.<br/>خواندن ورودی تا آنجا ادامه می‌یابد که کاربر با ctrl-d (یا ctrl-z در ویندوز) خاتمه ورودی را مشخص کند.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string previous = "";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
	cerr << "An error occured" << endl;
}