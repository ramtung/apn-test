
<div dir="rtl">
	<h1>بخش ۱ - مفاهیم ابتدایی</h1>
	<p>هدف این بخش ارائه‌ی مثال‌های ساده‌ای از برنامه‌های سی‌پلاس‌پلاس است که در آن امکانات پایه ورودی و خروجی در این زبان معرفی می‌شوند. علاوه بر این مثال‌ها، می‌توانید از دو متن آموزشی سایت cplusplus.com در مورد <a href="http://www.cplusplus.com/doc/tutorial/program_structure/">ساختار برنامه در سی‌پلاس‌پلاس</a> و <a href="http://www.cplusplus.com/doc/tutorial/basic_io/">ورودی/خروجی پایه</a> استفاده کنید.</p>
</div>
		<div dir="rtl"><h2>سلام دنیا</h2>
<p>
یک برنامه‌ی بسیار ساده در زبان سی‌پلاس‌پلاس که صرفاً یک رشته را در خروجی می‌نویسد.
</p>
</div>
```c++
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World\n";
	return 0;
}```
<div dir="rtl"><h2>تایپ رشته - خواندن از ورودی</h2>
<p>
این مثال استفاده اولیه از تایپ رشته و نحوه‌ی خواندن از ورودی را نشان می‌دهد.
</p>
</div>
```c++
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
}```
<div dir="rtl"><h2>خواندن چند قلم از ورودی</h2>
<p>
در این مثال چند مقدار به دنبال هم از ورودی خوانده می‌شود. دقت کنید که اگر رشته‌ای از cin خوانده شود، یک کلمه از ورودی خوانده شده در آن متغیر قرار می‌گیرد. مثلاً اگر ورودی Gholam 29 در ورودی تایپ شود مقدار name برابر Gholam و مقدار age برابر 29 خواهد بود.
</p>
</div>
```c++
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
}```
<div dir="rtl"><h2>خواندن از ورودی در حلقه</h2>
<p>
این برنامه تعدادی کلمه را از ورودی می‌خواند و در صورتی که کلمه‌ای تکرار شود این موضوع را با نمایش پیغامی اطلاع می‌دهد.<br/>خواندن ورودی تا آنجا ادامه می‌یابد که کاربر با ctrl-d (یا ctrl-z در ویندوز) خاتمه ورودی را مشخص کند.
</p>
</div>
```c++
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
}```
<div dir="rtl"><h2>سلام دنیا</h2>
<p>
یک برنامه‌ی بسیار ساده در زبان سی‌پلاس‌پلاس که صرفاً یک رشته را در خروجی می‌نویسد.
</p>
</div>
```c++
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
}```
