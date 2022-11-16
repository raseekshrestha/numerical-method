#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,soze = 10;
    printf("number of unknown: ");
    scanf("%d",&n);
    float mat[n][n+1];// = {1,2,3,10,2,3,2,14,3,2,1,10};
    float x[n];
    float ratio;
    // printf("%f\n",mat[0][1]);

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n+1;j++){
            printf("mat[%d][%d] = ",i,j);
            scanf("%f",&mat[i][j]);
        }
    }

    // printf("fjkdslafdsa");


    // perform forward elimination
    for (int i= 1;i<=n;i++){
        if (mat[i][i] = 0){
            printf("mathematical error\n");
            exit(0);
        }
        
        for (int j=i+1;j<=n;j++){
            ratio = (mat[j][i]) / (mat[i][i]);
            for (int k=1;k<=n+1;k++){
                mat[j][k] = mat[j][k] - ratio * mat[i][k];
            }
        }
    }
    printf("mili ra xa");
    // backward substitiution
    x[n] = (mat[n][n+1]) / (mat[n][n]);

    for (int i= n-1; i>=1;i--){
        x[i] = mat[i][n+1];
        for (int j= i+1;j<=n;j++){
            x[i] = x[i] - mat[i][j] * x[j];
        }
        x[i] = x[i] / mat[i][i];
    }
    printf("the result is :\n");
    for (int i=1;i<=n;i++){
        printf("%f\n",x[i]);
    }


}