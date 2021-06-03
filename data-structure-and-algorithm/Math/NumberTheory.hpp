#ifndef NUMBERTHEORY_H
#define NUMBERTHEORY_H

#include "../header.h"

template <typename T>
bool getSign(T num)
{
	if (num > 0) {
		return true;
	}
	else {
		return false;
	}
}

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

#endif