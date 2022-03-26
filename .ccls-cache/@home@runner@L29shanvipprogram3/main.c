#include <stdio.h>
int main()
{
  float unit,total,charge;
  char name[20];
  printf("enter the name:");
  gets(name);
  printf("enter the units:");
  scanf("%f",&unit);
  charge=0;
  if(unit>=1&&unit<=200)
  {
    charge=0.8*unit;
  
  }
  else if(unit>=201&&unit<=300)
 {
  charge=0.8*(200)+0.9*(unit-200);
 }
 else if(unit>300)
 {
   charge=0.8*(200)+0.9*(100)+1*(unit-300);
 }
 total=charge+ 100;
 if(total>400)
{
  total=total+(0.15*total);
}
printf("\nname:%s\n",name);
printf("no. of units:%.2f\n",unit);
printf("total bill amount:Rs. %.2f\n",total);
printf("------------\n");
return 0;
}