#ifndef NUMBERTHEORY_H
#define NUMBERTHEORY_H

#include "../header.h"

// �ִ�����
int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

// �ﰢ��
int triangularNumber(int n)
{
	return n * (n + 1) / 2;
}

#endif	