#include<stdio.h>
#include<math.h>
int main(){ int i,j,k;
            for(i=0;i<=24;i++){
                
                for(j=1;j<=80;j++){ 
                   if(pow((i-12),2)+pow((j-40),2)<=144) printf(" ");
                   else printf("*");
                    
                }printf("\n");
            }
}