Program rozwiązuje równania kwadratowe
===========================================================================================================
typu y = ax² + bx +c
-------------------------------------------------------------------------------------------------------------------------------
Autor Soborski Dariusz 4.11.2017 Warszawa.
### Uwaga podczas kompilacji na Ubuntu dodajemy flagę  -lm która uruchomi biblioteki #include <math.h> odpowiedzialne za potęgowanie i pierwiastkowanie. 
    >gcc rownanie.c -o rownanie.o -lm
### Biblioteki.
   > #include <stdio.h>
   > #include <stdlib.h>
   > #include <math.h>
### Funkcja główna.        
    >int main().    
### Dane wejściowe programu.
    > double a, b, c, delta, x0, x1, x2;
#### Wprowadzenie danych wejściowych.
    	>printf(" \n Wpisz wartość a:\n ");
	scanf("%lf", &a);
	printf(" \n Wpisz wartość b:\n ");
        scanf("%lf", &b);
	printf(" \n Wpisz wartość c:\n ");
        scanf("%lf", &c);
