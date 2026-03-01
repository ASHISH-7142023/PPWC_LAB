#include<stdio.h>
int main(){
int a=15;
// datatype *pointername = &variablename;
int *ptr=&a; //write like this only
int arr[5]={1,2,3,4,5};
int *arptr = arr;
//ptr=pointer
//arptr=array pointer
printf("1 : %d \n",a);
printf("2 : %p \n",ptr);
printf("3 : %d \n",*ptr);
printf("4 : %p \n",ptr+1);
printf("5 : %p \n",(ptr+1)+1);
printf("6 : %d \n",*(ptr+1));
printf("7 : %d \n",*(ptr+1)+1);
printf("8 : %d \n",(*ptr+1));
printf("9 : %d \n",(*ptr+1)+1);
printf("10 : %d \n",*arptr);
printf("11 : %p \n",arptr);
printf("12 : %p \n",arptr+1);
printf("13 : %d \n",*arptr+1);
printf("14 : %d \n",*(arptr+1));
printf("15 : %d \n",*(arptr)+1);

return 0;
}

