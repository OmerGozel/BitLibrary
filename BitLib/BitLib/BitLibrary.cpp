// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h"
#include <utility>
#include <limits.h>
#include "BitLibrary.h"

char comStr[] = { '0','0','0','0','0','0','0','0','\0' };

  int rCom(int n) //read command
{
	int v = 0;//nth bit value

	switch (n)
	{
	case BCSRED:v = msg1B.bcsRed; break;
	case BCSYELLOW:v = msg1B.bcsYellow; break;
	case ACSRED:v = msg1B.acsRed; break;
	case ACSYELLOW:v = msg1B.acsYellow; break;
	case IGSGREEN:v = msg1B.igsGreen; break;
	case IGSRED:v = msg1B.igsRed; break;
	case IGSYELLOW:v = msg1B.igsYellow; break;
	case MOTOR:v = msg1B.motor; break;

	default: v = 0; break;
	}

	return v;
}



void wCom(int n, int v) //write command nth byte v= value
{

	comStr[n] = v + '0';

	switch (n)
	{
	case BCSRED: msg1B.bcsRed = v; break;
	case BCSYELLOW: msg1B.bcsYellow = v; break;
	case ACSRED: msg1B.acsRed = v; break;
	case ACSYELLOW: msg1B.acsYellow = v; break;
	case IGSGREEN: msg1B.igsGreen = v; break;
	case IGSRED: msg1B.igsRed = v; break;
	case IGSYELLOW: msg1B.igsYellow = v; break;
	case MOTOR: msg1B.motor = v; break;
	}
}

void rComStr(void)
{
	printf("%s\n", comStr);
}
