/*
Payroll system
created by Mudaki Latipa
on March 8,2022
MIT licence
c99
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[100],kra[20];
    int hours,overtime,gross,tax,net;
    printf("Gitonga\'s Factory Payroll\n");
    //capture input
    printf("Enter name:");
    gets(name);
    printf("Enter KRA PIN:");
    gets(kra);
    printf("Hours worked:");
    scanf("%d",&hours);
    //computation
    if(hours>40){
            overtime=(hours-40)*1.5*1000;
            gross=overtime+(40*1000);
    }
    else{
        overtime=0;
    }

    tax=0.3*gross;
    net=gross-tax;
    //output
    printf("Employee Name:%s\n",name);
    printf("Gross Income:%d\n",tax);
    printf("Tax Paid:%d\n");
    printf("Net Income:%d\n",net);
    return 0;
}
