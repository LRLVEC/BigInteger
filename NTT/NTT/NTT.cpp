#include <cstdio>
#include <cmath>
#include <_Time.h>
#include <_BigInteger.h>

int main()
{
	Timer timer;
	timer.begin();
	unsigned long long n;
	const int N = 10000;
	for (int c0 = 0; c0 < N; ++c0)
	{
		n = 285;
		double a = 1.5;
		while (a - (unsigned long long)a)
		{
			n += 2;
			a = (sqrt(12 * n * n + 12 * n + 1) + 1) / 6;
		}
	}
	timer.end();
	::printf("运行%d次: %llu", N, n * (n + 1) / 2);
	timer.print();
}