#include <iostream>
using namespace std;

//////////////더하기//////////////
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

//////////////빼기//////////////
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

//////////////곱하기//////////////
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

//////////////나누기//////////////
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
		// 클래스 객체 생성
		Add a;
		Sub s;
		Mul m;
		Div d;
		
		// 입력받을 값 및 결과 변수 선언
		int x, y, result;
		string c;

		// 입력받고 출력하기
		cout << "두 개의 정수와 연산자 입력>> ";
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
				cout << "0으로 나눌 수 없습니다.\n";
				continue;
			}
			d.setValue(x, y);
			result = d.calculate();
		}
		else
		{
			cout << "올바른 연산자를 입력해주세요.\n";
			continue;
		}

		cout << result << "\n";
	}
}