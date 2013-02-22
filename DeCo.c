unsigned int fctCompress(int iComTemp, int iComTime, int iComYYYY, int iComMM, int iComDD)
{
//seb change
unsigned int iComp=0;
   iComTemp+=100;
   //jason ist cool
   //hall
o

   iComp+=iComDD;
   iComp=iComp<<4;
   iComp+=iComMM;
   iComp=iComp<<8;
   iComp+=iComYYYY;
   iComp=iComp<<5;
   iComp+=iComTime;
   iComp=iComp<<8;
   iComp+=iComTemp;
   return iComp;
}

void fctDeCompress (unsigned int iCompress, int *iDeTemp, int *iDeTime,int *iDeYYYY, int *iDeMM, int *iDeDD)
{

   int iCompressTemp;

   *iDeTemp =(iCompress & 0xFF) - 100;          //iDeTemp

   iCompressTemp = iCompress;
   iCompressTemp=iCompressTemp >> 8;
   *iDeTime =iCompressTemp & 0x1F;      //iDeTime

   iCompressTemp = iCompress;
   iCompressTemp=iCompressTemp >> 13;
   *iDeYYYY =(iCompressTemp & 0xFF) + 1900;      //iDeYYYY

   iCompressTemp = iCompress;
   iCompressTemp=iCompressTemp >> 21;
   *iDeMM =iCompressTemp & 0xF;        //iDeMM

   iCompressTemp = iCompress;
   iCompressTemp=iCompressTemp >> 25;
   *iDeDD =iCompressTemp & 0x1F;            //iDeDD

}
