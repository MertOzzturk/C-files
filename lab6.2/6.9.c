#include<stdio.h>
#include<stdlib.h>
int main11(){

int value,t1=0,t2=1,i,nextTerm;

printf("Enter a value to show fibonacci seq");
scanf(" %d",&value);

for(i=0;value>i;i++){

        printf(" %d",t1);
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;

}

return 0;
}
