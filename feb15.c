// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,k,l;
for(i=1;i<=5;i++){
for(j=4;j>=i;j--)
printf("\t");
for(k=1;k<=i;k++)
printf("%d\t",k);
for(l=1;l<i;l++)
printf("%d\t", i-l);
printf("\n");
}
}