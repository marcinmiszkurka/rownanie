#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
/* podczas kompilacji na Ubuntu dodajemy flagę  -lm która uruchomi #include <math.h>
gcc nazwa.c -o nazwa.o -lm */
	puts("************************************************************************");
	puts("************************************************************************");
	puts("****Witam, zapraszam do wspólnego rozwiazywania równań kwadratowych*****");
	puts("****************y = ax² + bx +c*****************************************");
	puts("************************************************************************");
	double a, b, c, delta, x0, x1, x2;
	printf(" \n Wpisz wartość a:\n ");
	scanf("%lf", &a);
	printf(" \n Wpisz wartość b:\n ");
        scanf("%lf", &b);
	printf(" \n Wpisz wartość c:\n ");
        scanf("%lf", &c);
	if (a!=0)
	{		delta =pow(b,2) - 4*a*c;        /*obliczenie delty*/
		 	puts("\t\t Δ = b² – 4ac");
			printf("Po podstawieniu do wzoru Δ = %f \n ", delta);
	 			if (delta < 0)
				{
				printf("\n Δ < 0 brak rozwiazan dla takiego rownania \n");
				}
				else if (delta > 0)
				{
				puts("Δ > o rownanie ma 2 rozwiazania \nx1 = (-b – √Δ) / (2a)");
				puts("x2 = (-b + √Δ) / (2a)");
				x1=(-b-(sqrt(delta))) / (2*a);
				x2=(-b+(sqrt(delta))) / (2*a);
				printf("x1 = %f \n", x1);
				printf("x2 = %f\n", x2);
				}
				else
                                {
                                printf("Δ = 0 mamy tlko jedno rozwiazanie tego rownania \nx0 = -b/(2*a) \n");
                                x0 =(-b) / (2*a);
                                printf("x0 = %f\n", x0);
                                }

	}

		else
		{
                 printf("\n Jesli wartosc a=0 nie jest to równanie kwadratowe, do zobaczenia \n ");
                }


	return 0;
}
