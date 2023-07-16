#include <stdio.h>
#include <stdlib.h>

int lcm2(int a,int b);


int main1(){
    int a,b,common;
    printf("Enter a value for find least common multiplies:");
    scanf(" %d %d",&a,&b);

    common=lcm2(a,b);
    printf("Least common multiplies is %d",common);


return 0;
}

int lcm2(int a,int b){
int i;
for(i=2;i<=a ||i<=b;i++){
    if(a%i==0 && b%i==0)
        return i;
}
return 0;
}
