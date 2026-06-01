#include <stdio.h>
 int main(){
      int b,p,i,res=1; 
     scanf("%d%d",&b,&p); 
      for(i=1;i<=p;i++)  res*=b; 
       printf("Power = %d",res); 
        return 0;
     }