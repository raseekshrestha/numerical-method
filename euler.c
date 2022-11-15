#include <stdio.h>
#include <math.h>

#define f(x,y) (1+x*y)


int main(){
	float x0,y0,h,p;
	printf("initial value of x0 and y0: ");
	scanf("%f %f",&x0,&y0);
	printf("step size (h) : ");
	scanf("%f",&h);
	printf("point of evaluation: ");
	scanf("%f",&p);
	
	float x = x0,y=y0;
	float m;
	while (x<p){
		m = f(x,y);
		x = x + h;
		y = y+m*h;
	}
	printf("the result is %.2f\n",y);
	
}
