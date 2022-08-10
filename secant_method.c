#include <stdio.h>
#include <math.h>
#define f(x) (cos(x) -2*x)
#define E (0.0001)


int main(){
    float x1,x2,x,err;
    printf("Secant Method: \n");
    printf("Enter two initial guess: ");
    scanf("%f %f",&x1,&x2);
    calcAgain:
        x = x2 - (f(x2)*(x2-x1)) / (f(x2) - f(x1));
        err = fabs((x-x2)/x);
        x1 = x2;
        x2 = x;
        if (err > E){
            goto calcAgain;
        }
    
    printf("Calculated root is  : %.5f ",x);

}