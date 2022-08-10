#include <stdio.h>
#include <math.h>
#define f(x) (x*x*x -7)
#define g(x) (3*x*x)
#define E (0.0001)


int main(){
    float x0,x,err;
    printf("Newton Ralphson Method: \n");
    printf("Enter initial guess: ");
    scanf("%f",&x0);
    calcAgain:
        x = x0 - f(x0)/ g(x0);
        err = fabs((x-x0)/x);
        x0 = x;
        if (err > E){
            goto calcAgain;
        }
    
    printf("Calculated root is  : %.5f ",x);

}