#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a, b, count1 = 0, count2 = 0;
    srand(time(NULL));
	printf("Выберите режим:\n");
	printf("1.Загадай\n");
	printf("2.Отгадай\n");
	int inputov;
	char input;
	scanf("%d", &inputov);  // 
	switch (inputov) 
	{
	    case 1: 
		{
		    printf("\nПравила:b - больше, m - меньше, = - равно, а теперь введи число\n");
		    scanf("%d", &a);
		    b = rand() % 1000;
		    while (input != '=') 
			{
			    printf("Ваше число %d?\n",b);
			    count1 += 1;
			    scanf("%c", &input);
			    scanf("%c", &input);
			    if (input == 'b') b = b + rand() % (1000 - b + 1);
			    if (input == 'm') b = rand() % (b + 1);
		    }
		    printf("Количество подходов %d", count1 / 2);
		    break; 
		}
	    case 2: 
		{
			a = 0 + rand() % 1000;
		    printf("\nИИ загадка: b - больше, m - меньше, = - равно");
		    printf("\nВведите число\n");
		    scanf("%d", &b);
		    printf("\nПопроси подсказку\n");
			while (a != b)
			{
				count2 += 1;
				scanf("%d", &b);
				printf("\nПодсказка: \n");
				scanf("%c", &input);

				if (input == 'm')
				{
					if (a < b) printf("да");
					else printf("нет");
				}
				if (input == 'b')
				{
					if (a > b) printf("да");
					else printf("нет");
				}
			}
		    printf("Вы угадали, это число %d\n", a);
		    printf("Количество подходов %d", count2);
		    break;
	    }
}
system("pause");
return 0;
}