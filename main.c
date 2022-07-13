#include <stdio.h>
int main()
{
 int c1,zn1,c2,zn2,c3,zn3;
 int c = 0;
 printf("Введите числитель первой дроби-> ");
 scanf("%d/n",&c1);
printf("Введите знаменатель первой дроби-> ");
 scanf("%d/n",&zn1);
 printf("Введите числитель второй дроби-> ");
 scanf("%d/n",&c2);
 printf("Введите знаменатель второй дроби-> ");
 scanf("%d/n",&zn2);
  printf(" +=1\n -=2\n *=3\n /=4\n Введите действие ->");
 scanf("%d/n",&c);
 
 switch (c)
    {
 case 1:
     {
         c3 = c1*zn2+c2*zn1;
         zn3 = zn1*zn2;
         printf("%d / %d", c3, zn3);
         break;
     }
 case 2:
     {
         c3=c1*zn2-c2*zn1; 
         zn3 =zn1*zn2;
         printf("%d / %d", c3, zn3);
         break;
     }
  case 3:
     {
         c3 = c1*c2; 
         zn3 = zn1*zn2;
         printf("%d / %d", c3, zn3);
         break;
     }
 case 4:
     {
         c3 = c1*zn2; 
         zn3= zn1*c2;
         printf("%d / %d", c3, zn3);
         break;
       }
   }
 }

  