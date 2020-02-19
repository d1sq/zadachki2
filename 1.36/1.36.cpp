//1.36 Вывести все пятизначные числа, которые делятся на 2, у которых средняя цифра нечетная, и сумма всех цифр делится на 4.
//123

#include "pch.h"
#include <iostream>
using namespace std;
void main()
{
	for (int i = 10000; i <= 99999; i+=2)
	{
		int x = i;
		int cent = (x % 1000) / 100;
		if (cent % 2 == 0) continue;
		int sum = 0;
		while (x > 0)
		{
			sum += x % 10;
			x /= 10;
		}
		if (sum % 4 == 0)
			cout << i << ' ';
	}
}

