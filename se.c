#include<stdio.h>
int main (){
    FILE *fp1,*fp2;
     fp1=fopen("mo.txt","w");
    fp2=fopen("m2.txt","r");
    char ch1[100],f1[1000],f2[1000],f3[1000];
        while(fgets(ch1,888,fp2)){
        fscanf(fp2,"%s%s%s",f1,f2,f3);
        fprintf(fp1,"%s %s %s\n",f1,f2,f3);
    }
    fclose(fp1);
    fclose(fp2);
}