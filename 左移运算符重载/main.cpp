#include<iostream>
using namespace std;


class Person
{
	
	//设置为友元函数
	friend ostream& operator << (ostream& cout, Person& p);

public:
	//利用成员函数重载左移运算符 p.operator<<(cout) 简化版本p << cout
	//不会用成员函数重载左移运算符，因为会让cout 在右边
	//void operator<<(cout)
	//{

	//}

	//使用函数的构造赋初值
	Person(int a,int b)
	{
		m_a = a;
		m_b = b;
	}

private:
	int m_a;
	int m_b;

};
//只能使用全局函数重载左移运算符
ostream & operator << (ostream &cout, Person &p)
{
	cout << "m_a=" << p.m_a << "m_b=" << p.m_b ;
	return cout;
}

void test01()
{
	Person p(10, 10);
	//p.m_a = 10;
	//p.m_b = 10;
	cout << p <<"hello world"<< endl;
}

int main()
{
	test01();

	return 0;
}