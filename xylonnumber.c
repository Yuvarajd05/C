
#include <stdio.h>
int main(){
    int num,res=0;
    printf("Enter the number");
    scanf("%d",&num);
    
    int a;
    a=num%10;
    num=num/10;
    
    while(num>9)
    {
        int temp=num%10;
        res=res+temp;
        num=num/10;
    }
    a=a+num;
    printf("\nInitial and finaly number; %d",a);
    printf("\nMiddile Number addition: %d",res);
    if(a==res)
    {
        printf("\nxylon number");
        }else{
            printf("\n Not a xylon number");
    }
}














;