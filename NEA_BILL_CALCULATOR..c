#include<stdio.h>

 int
main ()
{
  
 
int kilowatt_per_hour;
  
int previous_reading;
  
int current_reading;
  
float amount;
  
int ampere;
  
printf ("\t\t\t\t\tWELCOME TO ELECTRICITY BILL CALCULATOR\n");
  
/*printf("enter your unit\n");
scanf("%d",&kilowatt_per_hour);*/ 
    printf ("enter your previous reading\n");
  
scanf ("%d", &previous_reading);
  
printf ("enter your current reading\n");
  
scanf ("%d", &current_reading);
  
kilowatt_per_hour = current_reading - previous_reading;
  
printf ("enter 1 for 5 ampere \n");
  
printf ("enter 2 for 15 ampere \n");
  
printf ("enter 3  for 30 ampere \n");
  
printf ("enter 4 for 60 ampere \n");
  
scanf ("%d", &ampere);
  
if (ampere == 1)
    {
      
if (kilowatt_per_hour > 0 && kilowatt_per_hour <= 20)
	{
	  
amount = 30;
	  
printf ("Rs= %f", amount);
	
}
      
      else if (kilowatt_per_hour > 20 && kilowatt_per_hour <= 30)
	{
	  
amount = 50 + (20 * 3) + (kilowatt_per_hour - 20) * 6.5;
	  
printf ("Rs= %f", amount);
	
}
      
      else if (kilowatt_per_hour > 30 && kilowatt_per_hour <= 50)
	{
	  
amount = 50 + (20 * 3) + (10 * 6.5) + (kilowatt_per_hour - 30) * 8;
	  
printf ("Rs = %f", amount);
	
}
      
      else if (kilowatt_per_hour > 50 && kilowatt_per_hour <= 100)
	{
	  
amount =
	    75 + (20 * 3) + (10 * 6.5) + (20 * 8) + (kilowatt_per_hour -
						     50) * 9.5;
	  
printf ("Rs = %f", amount);
	
}
      
      else if (kilowatt_per_hour > 100 && kilowatt_per_hour <= 250)
	{
	  
amount =
	    100 + (20 * 3) + (10 * 6.5) + (20 * 8) + (kilowatt_per_hour -
						      50) * 9.50;
	  
printf ("Rs= %f", amount);
	
}
      
      else
	{
	  
amount =
	    150 + (20 * 3) + (10 * 6.5) + (20 * 8) + (200 * 9.5) +
	    (kilowatt_per_hour - 250) * 11;
	  
printf ("Rs= %f", amount);
	
}
    
}
  
/*                         ********************************************************                         */ 
    else if (ampere == 2)
    {
      
if (kilowatt_per_hour > 0 && kilowatt_per_hour <= 20)
	{
	  
amount = 50 + (kilowatt_per_hour * 4);
	  
printf ("Rs= %f", amount);
	
}
      
      else if (kilowatt_per_hour > 20 && kilowatt_per_hour <= 30)
	{
	  
amount = 75 + (20 * 4) + (kilowatt_per_hour - 20) * 6.5;
	  
printf ("Rs= %f", amount);
	
}
      
      else if (kilowatt_per_hour > 30 && kilowatt_per_hour <= 50)
	{
	  
amount = 75 + (20 * 4) + (10 * 6.5) + (kilowatt_per_hour - 30) * 8;
	  
printf ("Rs = %f", amount);
	
}
      
      else if (kilowatt_per_hour > 50 && kilowatt_per_hour <= 100)
	{
	  
amount =
	    100 + (20 * 4) + (10 * 6.5) + (20 * 8) + (kilowatt_per_hour -
						      50) * 9.5;
	  
printf ("Rs = %f", amount);
	
}
      
      else if (kilowatt_per_hour > 100 && kilowatt_per_hour <= 250)
	{
	  
amount =
	    125 + (20 * 4) + (10 * 6.5) + (20 * 8) + (kilowatt_per_hour -
						      50) * 9.50;
	  
printf ("Rs= %f", amount);
	
}
      
      else
	{
	  
amount =
	    175 + (20 * 4) + (10 * 6.5) + (20 * 8) + (200 * 9.5) +
	    (kilowatt_per_hour - 250) * 11;
	  
printf ("Rs= %f", amount);
	
}
    
}
  
 
/*       *************************************************************                      ********  */ 
    else if (ampere == 3)
    {
      
if (kilowatt_per_hour > 0 && kilowatt_per_hour <= 20)
	{
	  
amount = 75 + (kilowatt_per_hour * 5);
	  
printf ("Rs= %f", amount);
	
}
      
      else if (kilowatt_per_hour > 20 && kilowatt_per_hour <= 30)
	{
	  
amount = 100 + (20 * 5) + (kilowatt_per_hour - 20) * 6.5;
	  
printf ("Rs= %f", amount);
	
}
      
      else if (kilowatt_per_hour > 30 && kilowatt_per_hour <= 50)
	{
	  
amount =
	    100 + (20 * 5) + (10 * 6.5) + (kilowatt_per_hour - 30) * 8;
	  
printf ("Rs = %f", amount);
	
}
      
      else if (kilowatt_per_hour > 50 && kilowatt_per_hour <= 100)
	{
	  
amount =
	    125 + (20 * 5) + (10 * 6.5) + (20 * 8) + (kilowatt_per_hour -
						      50) * 9.5;
	  
printf ("Rs = %f", amount);
	
}
      
      else if (kilowatt_per_hour > 100 && kilowatt_per_hour <= 250)
	{
	  
amount =
	    150 + (20 * 5) + (10 * 6.5) + (20 * 8) + (kilowatt_per_hour -
						      50) * 9.50;
	  
printf ("Rs= %f", amount);
	
}
      
      else
	{
	  
amount =
	    200 + (20 * 5) + (10 * 6.5) + (20 * 8) + (200 * 9.5) +
	    (kilowatt_per_hour - 250) * 11;
	  
printf ("Rs= %f", amount);
	
}
    
}
  
/*       ************************************************************* ***************** */ 
    else if (ampere == 4)
    {
      
if (kilowatt_per_hour > 0 && kilowatt_per_hour <= 20)
	{
	  
amount = 125 + (kilowatt_per_hour * 6);
	  
printf ("Rs= %f", amount);
	
}
      
      else if (kilowatt_per_hour > 20 && kilowatt_per_hour <= 30)
	{
	  
amount = 125 + (20 * 6) + (kilowatt_per_hour - 20) * 6.5;
	  
printf ("Rs= %f", amount);
	
}
      
      else if (kilowatt_per_hour > 30 && kilowatt_per_hour <= 50)
	{
	  
amount =
	    125 + (20 * 6) + (10 * 6.5) + (kilowatt_per_hour - 30) * 8;
	  
printf ("Rs = %f", amount);
	
}
      
      else if (kilowatt_per_hour > 50 && kilowatt_per_hour <= 100)
	{
	  
amount =
	    150 + (20 * 6) + (10 * 6.5) + (20 * 8) + (kilowatt_per_hour -
						      50) * 9.5;
	  
printf ("Rs = %f", amount);
	
}
      
      else if (kilowatt_per_hour > 100 && kilowatt_per_hour <= 250)
	{
	  
amount =
	    200 + (20 * 6) + (10 * 6.5) + (20 * 8) + (kilowatt_per_hour -
						      50) * 9.50;
	  
printf ("Rs= %f", amount);
	
}
      
      else
	{
	  
amount =
	    250 + (20 * 6) + (10 * 6.5) + (20 * 8) + (200 * 9.5) +
	    (kilowatt_per_hour - 250) * 11;
	  
printf ("Rs= %f", amount);
	
}
    
}
  
return 0;

}

