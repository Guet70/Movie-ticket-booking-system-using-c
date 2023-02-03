#include<stdio.h>
#include<conio.h>
int main (){
    char pas[10],us[10],ch;
    int i;
    printf("enter password :");
    for(i=0;i<8;i++){
    ch=getch();
    pas[i]=ch;
    ch='*';
    printf("%c",ch);
    }
    pas[i]=' ';
    for(i=0;i<8;i++){
        printf("%c",pas[i]);
        
    }
}