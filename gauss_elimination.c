#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,size = 10;
    int i,j,k;
    printf("number of unknown: ");
    scanf("%d",&n);
    float mat[size][size];// = {1,2,3,10,2,3,2,14,3,2,1,10};
    float x[size];
    float ratio;
    // printf("%f\n",mat[0][1]);

    for (i=1;i<=n;i++){
        for (j=1;j<=n+1;j++){
            printf("mat[%d][%d] = ",i,j);
            scanf("%f",&mat[i][j]);
        }
    }


    // perform forward elimination
    for (i= 1;i<=n-1;i++){
        if (mat[i][i] = 0){
            printf("mathematical error\n");
            exit(0);
        }
        
        for (j=i+1;j<=n;j++){
            ratio = (mat[j][i]) / (mat[i][i]);
            for (k=1;k<=n+1;k++){
                mat[j][k] = mat[j][k] - ratio * mat[i][k];
            }
        }
    }
    // backward substitiution
    x[n] = (mat[n][n+1]) / (mat[n][n]);

    for (i= n-1; i>=1;i--){
        x[i] = mat[i][n+1];
        for (j= i+1;j<=n;j++){
            x[i] = x[i] - mat[i][j] * x[j];
        }
        x[i] = x[i] / mat[i][i];
    }
    printf("the result is :\n");
    for (i=1;i<=n;i++){
        printf("%f\n",x[i]);
    }


}