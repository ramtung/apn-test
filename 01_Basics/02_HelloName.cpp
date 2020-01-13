/*
تایپ رشته - خواندن از ورودی
این مثال استفاده اولیه از تایپ رشته و نحوه‌ی خواندن از ورودی را نشان می‌دهد.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Hello " << name << '\n';
	return 0;
}