#include <stdio.h>
#include <math.h>
#define f(x) (exp(x) - 3*x)
#define E (0.0001)


int main(){

    float x0,x1,x,err;
    guessAgain:
        printf("Enter two initial guessess: ");
        scanf("%f %f",&x0,&x1);
        if (f(x0) * f(x1) >= 0){
            printf("Invalid guess try again\n");
            goto guessAgain;
        }
    
    calcAgain:
        x = x0 - (f(x0)*(x0 + x1)) / ( f(x1) - f(x0) );

        err = fabs(f(x));
        (f(x0) * f(x) < 0) ? x1 = x : x0 = x;
        if (err > E){
            goto calcAgain;
        }
    printf("Calculated root is  : %.5f ",x);

}