#include <stdio.h>
#include "DeIO.h"
#include "DeCo.h"
#include "DeIO.c"
#include "DeCo.c"

int main()
{

   int iTempNP;
   int iTimeNP;
   int iYearNP;
   int iMonthNP;
   int iDayNP;
   unsigned int uiComp;
   int iTempBerlin;
   int iTimeBerlin;
   int iYearBerlin;
   int iMonthBerlin;
   int iDayBerlin;
                              
   //Function Call
   fctDeIn(&iTempNP, &iTimeNP, &iYearNP, &iMonthNP, &iDayNP);
   uiComp=fctCompress(iTempNP, iTimeNP, iYearNP, iMonthNP, iDayNP);
   fctDeCompress(uiComp, &iTempBerlin, &iTimeBerlin, &iYearBerlin, &iMonthBerlin, &iDayBerlin);
   fctDeOut(iTempBerlin, iTimeBerlin, iYearBerlin, iMonthBerlin, iDayBerlin);
               
   return 0;
}
