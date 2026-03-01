#include<stdio.h>
void toh(int n , char src , char dest , char aux){
if(n==1){
printf("move disk 1 form peg %c to peg %c\n",src,dest);
return;
}
toh(n-1,src,aux,dest);
printf("move disk %d from peg %c to peg %c\n",n,src,dest);
toh(n-1,aux,dest,src);
}
int main(){
int n=3;
toh(n,'A','B','C');
return 0;
}
