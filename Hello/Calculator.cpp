#include <iostream>
using namespace std;

//////////////���ϱ�//////////////
class Add 
{
	public:
		int a, b;
		void setValue(int x, int y);
		int calculate();
};

void Add::setValue(int x, int y)
{
	this->a = x;
	this->b = y;
}

int Add::calculate()
{
	return a + b;
}

//////////////����//////////////
class Sub
{
public:
	int a, b;
	void setValue(int x, int y);
	int calculate();
};

void Sub::setValue(int x, int y)
{
	this->a = x;
	this->b = y;
}

int Sub::calculate()
{
	return a - b;
}

//////////////���ϱ�//////////////
class Mul
{
public:
	int a, b;
	void setValue(int x, int y);
	int calculate();
};

void Mul::setValue(int x, int y)
{
	this->a = x;
	this->b = y;
}

int Mul::calculate()
{
	return a * b;
}

//////////////������//////////////
class Div
{
public:
	int a, b;
	void setValue(int x, int y);
	int calculate();
};

void Div::setValue(int x, int y)
{
	this->a = x;
	this->b = y;
}

int Div::calculate()
{
	return a / b;
}

int main()
{
	while (true)
	{
		// Ŭ���� ��ü ����
		Add a;
		Sub s;
		Mul m;
		Div d;
		
		// �Է¹��� �� �� ��� ���� ����
		int x, y, result;
		string c;

		// �Է¹ް� ����ϱ�
		cout << "�� ���� ������ ������ �Է�>> ";
		cin >> x >> y >> c;

		if (c._Equal("+"))
		{
			a.setValue(x, y);
			result = a.calculate();
		}
		else if (c._Equal("-"))
		{
			s.setValue(x, y);
			result = s.calculate();
		}
		else if (c._Equal("*"))
		{
			m.setValue(x, y);
			result = m.calculate();
		}
		else if(c._Equal("/"))
		{
			if (y == 0)
			{
				cout << "0���� ���� �� �����ϴ�.\n";
				continue;
			}
			d.setValue(x, y);
			result = d.calculate();
		}
		else
		{
			cout << "�ùٸ� �����ڸ� �Է����ּ���.\n";
			continue;
		}

		cout << result << "\n";
	}
}