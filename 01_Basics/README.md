
<div dir="rtl">
	<h1>بخش ۱ - مفاهیم ابتدایی</h1>
	<p>هدف این بخش ارائه‌ی مثال‌های ساده‌ای از برنامه‌های سی‌پلاس‌پلاس است که در آن امکانات پایه ورودی و خروجی در این زبان معرفی می‌شوند. علاوه بر این مثال‌ها، می‌توانید از دو متن آموزشی سایت cplusplus.com در مورد <a href="http://www.cplusplus.com/doc/tutorial/program_structure/">ساختار برنامه در سی‌پلاس‌پلاس</a> و <a href="http://www.cplusplus.com/doc/tutorial/basic_io/">ورودی/خروجی پایه</a> استفاده کنید.</p>
</div>
		<div dir="rtl"><h2>سلام دنیا</h2>
<p>
یک برنامه‌ی بسیار ساده در زبان سی‌پلاس‌پلاس که صرفاً یک رشته را در خروجی می‌نویسد.
</p>
</div>
<a href="01_HelloWorld.cpp">01_Basics/01_HelloWorld.cpp</a>

```c++

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World\n";
	return 0;
}
```

<div dir="rtl"><h3>پرسش‌های کوتاه</h3><ol><li>iostream چیست و به چه هدفی استفاده می‌شود؟</li><li>اگر خط دوم را حذف کنیم لازم است چه تغییری در کد بدهیم تا قابل ترجمه شود؟</li><li>عدد صفر که توسط تابع برگردانده شده نشانه چیست؟</li></ol>
</div><div dir="rtl"><h2>تایپ رشته - خواندن از ورودی</h2>
<p>
این مثال استفاده اولیه از تایپ رشته و نحوه‌ی خواندن از ورودی را نشان می‌دهد.
</p>
</div>
<a href="02_HelloName.cpp">01_Basics/02_HelloName.cpp</a>

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
}
```

<div dir="rtl"><h3>پرسش‌های کوتاه</h3><ol><li>اگر هنگام وارد کردن نام Ramtin Khosravi را وارد کنیم خروجی برنامه چیست؟ چرا؟</li><li>اگر تعریف متغیر name را به شکل <pre dir="ltr">char name[5];</pre> انجام دهیم در ورودی Ramtin را وارد کنیم چه اتفاقی می‌افتد؟ ًRamtin چه؟</li></ol>
</div><div dir="rtl"><h2>خواندن چند قلم از ورودی</h2>
<p>
در این مثال دو مقدار یکی نام و یکی سن فرد از ورودی گرفته می‌شود.
</p>
</div>
<a href="03_HelloNameAge.cpp">01_Basics/03_HelloNameAge.cpp</a>

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
}

/* اگر ورودی را به این شکل وارد کنیم
<pre dir="ltr">

Ramtin

45
</pre>
نتیجه چیست؟ */
```

<div dir="rtl"><h3>پرسش‌های کوتاه</h3><ol><li>اگر ورودی را <pre dir="ltr">Ramtin Khosravi 45</pre> وارد کنیم نتیجه اجرای برنامه چیست؟</li></ol>
</div><div dir="rtl"><h2>خواندن از ورودی در حلقه</h2>
<p>
این برنامه تعدادی کلمه را از ورودی می‌خواند و در صورتی که کلمه‌ای تکرار شود این موضوع را با نمایش پیغامی اطلاع می‌دهد.<br/>خواندن ورودی تا آنجا ادامه می‌یابد که کاربر با ctrl-d (یا ctrl-z در ویندوز) خاتمه ورودی را مشخص کند.
</p>
</div>
<a href="04_DeleteRepeated.cpp">01_Basics/04_DeleteRepeated.cpp</a>

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
}
```

<div dir="rtl"><h2>سلام دنیا</h2>
<p>
یک برنامه‌ی بسیار ساده در زبان سی‌پلاس‌پلاس که صرفاً یک رشته را در خروجی می‌نویسد.
</p>
</div>
<a href="07_ExitTest.cpp">01_Basics/07_ExitTest.cpp</a>

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
}
```

