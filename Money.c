#include <stdio.h>



int main(){

    int n;
    int vinte=0,dez=0,cinco=0,um=0;
    printf("Ammount in EUR? ");
    scanf("%d",&n);
    while(n>0){

        if (n%20==0){
            vinte++;
            n=n-20;
        }else if(n%10==0){
            dez++;
            n=n-10;

        }else if(n%5==0){
            cinco++;
            n=n-5;
        }else{
            um++;
            n=n-1;
        }
        

    }
    printf("EUR 20 notes: %d\n", vinte);
    printf("EUR 10 notes: %d\n", dez);
    printf("EUR 5 notes: %d\n", cinco);
    printf("EUR 1 coins: %d\n", um);


    
}