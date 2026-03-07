#include <stdio.h>
#include <math.h>


int main(){
    float a,b,c;
    printf("Insert a,b and c : \n");
    scanf("%f",&a);
    scanf("%f" ,&b);
    scanf("%f",&c);
    float delta = pow(b,2) - 4*b*c;
    if( delta < 0 )
    {
        printf("No roots!\n");
    }
    else if(delta == 0) {
        float root= ((-b)/2*a);
        printf("The only root is %0.3f\n",root);

    }else {
        float root1=((-b + sqrt(delta))/(2*a));
        float root2=((-b - sqrt(delta))/(2*a));
        printf("The roots are : %0.3f and %0.3f\n", root1,root2);                
    }


    





    return 0;
}