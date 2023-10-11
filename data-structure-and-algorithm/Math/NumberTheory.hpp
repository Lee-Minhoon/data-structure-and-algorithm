#ifndef NUMBERTHEORY_H
#define NUMBERTHEORY_H

#include "../header.h"

// 최대공약수
int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

// 삼각수
int triangularNumber(int n)
{
	return n * (n + 1) / 2;
}

#endif	