Program rozwiązuje równania kwadratowe
===========================================================================================================
typu y = ax² + bx +c
-------------------------------------------------------------------------------------------------------------------------------
Autor Soborski Dariusz 4.11.2017 Warszawa.
### Uwaga podczas kompilacji na Ubuntu dodajemy flagę  -lm która uruchomi biblioteki <math.h> odpowiedzialne za potęgowanie i pierwiastkowanie. 
    >gcc rownanie.c -o rownanie.o -lm
### Biblioteki.
   > #include <stdio.h>
   > #include <stdlib.h>
   > #include <math.h>
### Funkcja główna.        
    >int main().
    >{    
### Dane wejściowe programu.
    > double a, b, c, delta, x0, x1, x2;
#### Wprowadzenie danych wejściowych przy użyciu funkcji "print"i "scanf".
    	>printf(" \n Wpisz wartość a:\n ");
	scanf("%lf", &a);
	printf(" \n Wpisz wartość b:\n ");
        scanf("%lf", &b);
	printf(" \n Wpisz wartość c:\n ");
        scanf("%lf", &c);
### Obliczenie delty używając funkcji pow (potęgowanie) z biblioteki <math.h>.
	>delta =pow(b,2) - 4*a*c;
### Możemy dalej przejść jeśli wartość a jest różna od zera. Używając funkcji warunkowej "if".
	>if (a!=0)
	{
### Używając funkcji "puts" wyświetlamy na ekranie wzór na obliczenie delty.
	>puts("\t\t Δ = b² – 4ac");
### Używając funkcji "printf" program podaje wartość obliczonej delty na podstwie danych wejściowych a, b, c.
	>printf("Po podstawieniu do wzoru Δ = %f \n ", delta);
### Jeśli delta jest mniejsza od zera równanie kwadratowe nie ma rozwiązania używamy funkcji "if", "printf".
	>if (delta < 0)
	{
	printf("\n Δ < 0 brak rozwiazan dla takiego rownania \n");
	}
### Jęsli delta jest większa od zera otrzymujemy dwa rozwiązania tego równania: x1, x2. Używamy funkcji "else if", "puts", "printf", "sqrt"( oblicza pierwiastek z delty).
	>else if (delta > 0)
	{
	puts("Δ > o rownanie ma 2 rozwiazania \nx1 = (-b – √Δ) / (2a)");
	puts("x2 = (-b + √Δ) / (2a)");
	x1=(-b-(sqrt(delta))) / (2*a);
	x2=(-b+(sqrt(delta))) / (2*a);
	printf("x1 = %f \n", x1);
	printf("x2 = %f\n", x2);
	}
### Jeśli wartość delty nie jest ani większa od zera ani mniejsza czyli wynosi zero mamy tylko jedno rozwiązanie xo. Podajemy wzór i wartość używając funkcji "else", "printf".
	>else
         {
          printf("Δ = 0 mamy tlko jedno rozwiazanie tego rownania \nx0 = -b/(2*a) \n");
          x0 =(-b) / (2*a);
          printf("x0 = %f\n", x0);
         }
### Może się zdarzyć, że ktoś poda wartość a zero nie będzie to równanie kwadratwe. Używamy funkcji "else", "printf"
	>else
	{
         printf("\n Jesli wartosc a=0 nie jest to równanie kwadratowe, do zobaczenia \n ");
        }
### Zakończenie programu. Używamy funkcji "return"
	>return 0;
	}
