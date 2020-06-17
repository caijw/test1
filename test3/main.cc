#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
	Person(){}
	Person(const Person& p)
	{
		cout << "Copy Constructor" << endl;
	}

	Person& operator=(const Person& p)
	{
		cout << "Copy Assign" << endl;
		return *this;
	}

private:
	int age;
	string name;
};

void f(Person p)
{
	return;
}

Person f1()
{
	Person p;
	return p;
}

int main()
{
    
	Person p;
	Person p1 = p;    // 1 拷貝構造函數,使用對象p來創建一個新的對象p1
	Person p2;
	p2 = p;           // 2 拷貝賦值運算符,爲一個已經存在的對象賦值
	f(p2);            // 3 拷贝构造函数,以值传递的方式将对象p2传入函数f内，调用拷贝构造函数构建一个函数f可用的实参

	p2 = f1();        // 4 拷贝构造函数(f1函數的返回值,可能有編譯器優化而沒有這一步), 拷貝賦值運算符

	Person p3 = f1(); // 5 拷贝构造函数(f1函數的返回值,可能有編譯器優化而沒有這一步),拷贝构造函数(可能沒有這一步,編譯器優化)

	return 0;
}