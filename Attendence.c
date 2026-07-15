#include <stdio.h>

int main() {
    float att=0,i=0,k=0;
    int P,T;
    printf("Hours you attented: ");
    scanf("%d",&P);
    printf("Total hours: ");
    scanf("%d",&T);
    if(T<P){
        printf("Total hours must be greater than attented hours\n Try again \n");
    
        
    }
    i=P;
    k=T;
    while(att<=75.00)
    {
        printf("present %.0f Total %.0f ",i,k);
      if(att>=75.00){
        printf("\n===============\nattendence will %.2f if you attend %.0f hours in %.0f hours",att,i-1,k-1);
    break;
    break;
    }
    else{
         att = (i*1.0/k)*100;
         printf("= %.2f \n",att);
        }
        i=i+1;
        k=k+1;
    }
     return 0;
}