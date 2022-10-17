#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{

         double function, delta, x1, x2;
         unsigned int var, N;
         printf("Enter variant (1 or 2 ): ");
         scanf("%d", &var);

    while(var!=1 && var!=2 )
            {
         printf("There are no variants in datebase with such number. Please try again:");
         scanf("%d",&var);
            }
    if(var == 1)
        {
            printf("Enter x1:");
            scanf("%lf",&x1);
            printf("Enter x2:");
            scanf("%lf",&x2);
            printf("Enter N:");
            scanf("%u",&N);
    while(N<2)
            {
            printf("There are no variants in datebase with such number. Please try again:");
            scanf("%u",&N);
            }
            printf("\n*****************************************************************************");
            printf("\n*      N  *                      X        *                    F(X)         *");
            printf("\n*****************************************************************************");


            delta=(x2-x1)/(N - 1);
    for(int i = 1; i<=N; i++)
            {
            function=pow(x1+125, 3) - 45 * x1 - 18;
            printf("\n|%6.0d|%24.0lf|%24.0lf|\n",i,x1,function);
            x1=x1+delta;
    if(i % 12 == 0)
                {
                  printf("\nPress any key to continue...");
                    getch();
                }

            }

        }
       if(var == 2)
   {
            printf("Enter x1:");
            scanf("%lf",&x1);
            printf("Enter x2:");
            scanf("%lf",&x2);
            printf("Enter delta:");
            scanf("%lf",&delta);
            printf("\n*****************************************************************************");
            printf("\n*      N  *                      X        *                    F(X)         *");
            printf("\n*****************************************************************************");
            N=(x2-x1)/delta;
            int i=1;
    while(x1<=x2)
    {
        function=pow(x1+125, 3) - 45 * x1 - 18;
        printf("\n|%6.0d|%24.0lf|%24.0lf|\n",i,x1,function);
        if(i % 12 == 0)
        {
         printf("\nPress any key to continue...");
       getch();
        }

        x1=x1+delta;
            i++;

    }







    }


    return 0;
}
