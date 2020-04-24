#include <iostream>
#include <iomanip>

using namespace std;

double S(double x, double e)
{
	int minus = 1;
	int divisor = 1;
	double s = 0;
	double res = 0;
	do
	{
		s = res;
		res += minus * x / divisor;
		minus = -minus;
		divisor++;
	}
	while (abs(res - s) >= e);
	return res;
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Белевцева Дарья Юрьевна студент группы УМЛ-112\n";
	cout << "Программа для расчёта ряда чисел\n";

	for (int i = -5; i <= 5; i++)
	{
		cout << setprecision(5) << S(i / 10., 0.001) << endl;
	}

	system("pause");

	return 0;
}
