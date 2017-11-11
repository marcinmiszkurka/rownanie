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
