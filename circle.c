#include <stdio.h>
 #include<stdlib.h>
 #include<math.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    float r1, r2, x1,x2,y1,y2,c;
    printf("Впишите два радиуса - Первый,Второй\n");
    scanf("%f%f",&r1,&r2);
    printf("Введите координаты центров - Первый(x1,y1),Второй(x2,y2)\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    c=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    c=c-r1-r2;
    if (c==0) {printf("Окружности пересекаются в точке");}
    if ((r1==r2)&&(x1==x2)&&(y1==y2)) {printf("Эти окружности одинаковы");}
    if (c>0) {printf("Окружности не пересекаются");}
    if ((c<0)&&!((x1==x2)&&(y1==y2))){printf("Окружности пересекаются в двух точках");}
    if ((x1==x2)&&(y1==y2)&&!(r1==r2)) {printf("Окружности имеют один центр\n");}
    system("pause");
    return 0;
 }
