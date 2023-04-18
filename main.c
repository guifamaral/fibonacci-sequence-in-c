#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a ,b, c,contador, numero;
    printf("qual o valor:");
    scanf("%d",&numero);

   if (numero>2)
    {
    a=1;
    b=1;
   printf("%d %d", a,b);

   for (contador=2;contador<=numero;++contador)
    {
    c = a+b;
    printf("%d ", c);
    a=b;
    b=c;
    }


    }

    else
    {
    printf("erro");
    }

    return 0;
}

