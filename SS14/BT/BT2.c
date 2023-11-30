#include<stdio.h>
void swap(int *number1,int *number2){
    int temp= *number1;
    *number1=*number2;
    *number2=temp;
}
int main(){
    int a=5,b=17;
    printf("Hieu cua chung la %d\n",a-b);
    swap(&a,&b);
    printf("hieu cua chung sau khi doi cho la %d",a-b);
}