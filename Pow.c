#include <stdio.h>



int main() {

    int n,x;
    int res=1;
    scanf("%d %d", &n,&x);


    if (n<0){
        printf("Not possible\n");
    }
        for (int i=1;i<=x;i++){

            res*=n;


        }
        printf("%d\n",res);

    

    return 0;










}