void fctDeIn(int *iTemperature, int *iTime, int *iDateYYYY, int *iDateMM, int *iDateDD)
{
   printf("\nTemperature?\n");
   __fpurge(stdin);
   scanf("%d",&*iTemperature);
   
   printf("\nTime (Hour)?\n");
   __fpurge(stdin);
   scanf("%d",&*iTime);

   printf("\nYear?\n");
   __fpurge(stdin);
   scanf("%d",&*iDateYYYY);

   printf("\nMonth?\n");
   __fpurge(stdin);
   scanf("%d",&*iDateMM); 

   printf("\nDay?\n");
   __fpurge(stdin);
   scanf("%d",&*iDateDD);
}

void fctDeOut(int iTemperature, int iTime, int iDateYYYY, int iDateMM, int iDateDD)
{
   printf("Date \t\t| Hour \t| Temperature in °C\n");
   printf("----------------|-------|-------------------------------""-------\n");
   printf("%d.%d.%d\t|  %d\t|   %d\n\n", iDateYYYY, iDateMM, iDateDD, iTime, iTemperature);
}
