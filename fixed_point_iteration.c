#include <stdio.h>
#include <math.h>
#define f(x) ((5*x -6)/x)
#define E (0.0001)


int main(){
    float x0,x,err;
    printf("Fixed point Iteration Method: \n");
    printf("Enter a initial guess: ");
    scanf("%f",&x0);
    calcAgain:
        x = f(x0);
        err = fabs((x-x0)/x);
        x0 = x;
        if (err > E){
            goto calcAgain;
        }
    
    printf("Calculated root is  : %.5f ",x);

}