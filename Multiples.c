#include <stdio.h>


int main(){
    int a,b,max;
    printf("Insert 2 numbers: \n");
    scanf("%d %d", &a,&b);
    if(a>=b){
        int temp;
        temp=b;
        b=a;
        a=temp;
    }

    for (int i=2;i<b;i++){

        if(a%i==0 && b%i==0){
            max=i;
            break;
        }



    }
    printf("%d\n",max);
    return 0;

}


