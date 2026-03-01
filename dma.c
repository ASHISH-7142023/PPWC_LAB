// WAP sum of n array elements using (malloc)dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, *arr,sum=0;
    printf("enter value : \n");
    scanf("%d",&n);
    arr =(int*)malloc(n*sizeof(int)); //main line  we can remove n in n*sizeof(int)
    if(arr==NULL){
        printf("allocation failed !")
    }
    printf("enter elements : \n");
    for(int i =0;i<n-2;i++){     //n-2 
        scanf("%d",&arr[i]);
        //sum += arr[i];
    }
    printf("sum is : %d"arr[8]) // only write GARBAGE VALUE USING MALALLOC
    //RETURN 0 VALUE USING CALLALOC


    //double *dptr;
    //dptr = (double*)malloc(n*sizeof(double));


    int *ptr;
    printf("sum is : %d",*ptr);
    arr2=(int*)calloc(n,sizeof(int));
    

    int m=20;
    arr3 =(int*)realloc(arr2,m*sizeof(int));
    free(arr);
    free(ptr);










    //ptr =(int*)malloc(sizeof(int));
    //*ptr=100;
    //printf("sum is : %d",sum);
    //printf("sum is : %d",*ptr);
    //free(arr);

    return 0;
}
