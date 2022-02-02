#pragma once

#ifdef BITLIBRARY_EXPORTS
#define BITLIBRARY_API __declspec(dllexport)
#else
#define BITLIBRARY_API __declspec(dllimport)
#endif

#include <stdio.h>

#define BCSRED    0
#define BCSYELLOW 1
#define ACSRED    2
#define ACSYELLOW 3
#define IGSRED    4
#define IGSGREEN  5
#define IGSYELLOW 6
#define MOTOR     7

/* Turn ON/OFF */
#define ON        1
#define OFF       0

/* motor direction */
#define ALIMAN    0
#define BARINMA   1

struct {
	unsigned bcsRed : 1;//barinma cikis sinyali kirmizi
	unsigned bcsYellow : 1;//barinma cikis sinyali sari
	unsigned acsRed : 1;//aliman cikis sinyali kirmizi
	unsigned acsYellow : 1;//aliman cikis sinyali sari
	unsigned igsRed : 1;//iltisak giris sinyali kirmizi
	unsigned igsGreen : 1;//iltisak giris sinyali yesil
	unsigned igsYellow : 1;//iltisak giris sinyali sari
	unsigned motor : 1;//motor yonu

}msg1B;



extern "C" BITLIBRARY_API void rComStr(void);
extern "C" BITLIBRARY_API int rCom(int n);
extern "C" BITLIBRARY_API void wCom(int n, int v);

