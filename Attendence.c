
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
if (Min == 100 && P != T)
     {
         printf("\nYou will not get 100 percentage at this  attendence");
         return 1;
         
     }
     else if(Min >100)
     {
         printf("\npercentage must be less than or equalto 100");
         return 1;
     }
    if(T<P){
        printf("Total hours must be greater than attented hours\n Try again \n");
    
     return 1;   
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

printf("\n You must attend next %.0f hour classes",k-T);
        
        
        break;
        
    }
    i++;
    k++;
    }
     return 0;
}