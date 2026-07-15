
#include <stdio.h>

int main() {
     //declare variables
    float att=0,i=0,k=0,Pass=0;
    int P,T,Min;
//read datas
    printf("Hours you attented: ");
    scanf("%d",&P);
    printf("Total hours: ");
    scanf("%d",&T);
    printf("Enter your minimum percentage: ");
    scanf("%d",&Min);
//error check
    if(T<P){
        printf("Total hours must be greater than attented hours\n Try again \n");
    
        
    }
    i=P;
    k=T;
    Pass=Min*1.0;
    while(att<=Pass)
    {
        printf("present %.0f Total %.0f ",i,k);
      
    
    if(att<Pass){
         att = (i*1.0/k)*100;
         printf("= %.2f \n",att);
        }
        if(att>=Pass){
        printf("\n===============\nattendence will %.2f if you attend %.0f hours out of  %.0f hours",att,i,k);
        
        
        break;
        
    }
    i++;
    k++;
    }
     return 0;
}