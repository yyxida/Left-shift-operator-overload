#include<iostream>
using namespace std;


class Person
{
	
	//����Ϊ��Ԫ����
	friend ostream& operator << (ostream& cout, Person& p);

public:
	//���ó�Ա����������������� p.operator<<(cout) �򻯰汾p << cout
	//�����ó�Ա���������������������Ϊ����cout ���ұ�
	//void operator<<(cout)
	//{

	//}

	//ʹ�ú����Ĺ��츳��ֵ
	Person(int a,int b)
	{
		m_a = a;
		m_b = b;
	}

private:
	int m_a;
	int m_b;

};
//ֻ��ʹ��ȫ�ֺ����������������
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