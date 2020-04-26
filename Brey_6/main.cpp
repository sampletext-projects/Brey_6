#include <iostream>
#include <iomanip>

const double pi = 3.14159265358979323846;

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

	for (double i = -pi; i <= pi; i += pi / 36)
	{
		cout << setprecision(8) << S(i, 0.01) << "\t";
		cout << setprecision(8) << S(i, 0.001) << "\t";
		cout << setprecision(8) << S(i, 0.0001) << endl;
	}

	system("pause");

	return 0;
}
