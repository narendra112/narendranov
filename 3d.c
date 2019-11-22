#include <stdio.h>

void main() {
    int check[3][3][3]={ 0 };
    int size=2;
    int i,j,k,sum=0;

    check[1][1][0]=12;

        for(k=0;k<size;k++) {
            for(j=0;j<size;j++) {
                for(i=0;i<size;i++) {
                    printf("i=%d, j=%d,k=%d, checkijk=%d  ",i,j,k,check[i][j][k]);
                    sum+=sum+check[i][j][k];
                    printf("sum=%d\n", sum);
                }
            }
        }
printf("The sum is %d\n",sum);
}
