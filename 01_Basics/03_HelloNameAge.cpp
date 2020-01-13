/*
خواندن چند قلم از ورودی
در این مثال چند مقدار به دنبال هم از ورودی خوانده می‌شود. دقت کنید که اگر رشته‌ای از cin خوانده شود، یک کلمه از ورودی خوانده شده در آن متغیر قرار می‌گیرد. مثلاً اگر ورودی Gholam 29 در ورودی تایپ شود مقدار name برابر Gholam و مقدار age برابر 29 خواهد بود.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int age;
	cout << "Please enter your name followed by your age: ";
	cin >> name >> age;
	cout << "Hello " << name << "!\n";
	cout << "Your age is " << age << endl;
}