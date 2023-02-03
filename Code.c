#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void book();
void cancel();
void check();
void admin();
void exit();
void seatbooked();
int main (){
    int choice;
    system("cls");
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| P |                              WELCOME                                      | P |\n");
    printf("\t\t\t\t\t\t| L |                                TO                                         | L |\n");
    printf("\t\t\t\t\t\t| A |                            PLAXA CINEMA                                   | A |\n");
    printf("\t\t\t\t\t\t| X |                                                                           | X |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  1) TO BOOK TICKET                                                        | C |\n");
    printf("\t\t\t\t\t\t| I |  2) LOGIN                                                                 | I |\n");
    printf("\t\t\t\t\t\t| N |  3) EXIT                                                                  | N |\n");
    printf("\t\t\t\t\t\t| E |                                                                           | E |\n");
    printf("\t\t\t\t\t\t| M |                                                                           | M |\n");
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("ENTER YOUR CHOICE : ");
    scanf(" %d",&choice);
    switch(choice){
        case 1 :
        book();
        break;
        case 2 :
        admin();
        break;
        case 3 :
        exit(0);
        break;
    }
}
void book(){
    FILE *fp,*fp1;
    static int seat,k,s,l=1;
   static int to,he,tim1,tim11,tim11x,tim11a,tim9,timx;
    int i=1,j=1,tim,u,se,price;
    char movie1[1000],movie2[1000],movie3[1000],movie4[1000],ch[1000],name[1000];
    int x,yu,x1,yu1,x1x,yu1x,x1a,yua,x9,y9,xx,yx;
    char m1[1000],m2[1000],m3;
    int movie;
    labels :
    system("cls");
  printf("======================================================================================\n");
  printf("|   NOTE :-                                                                          |\n");
  printf("|   1) PRESS 1 FOR BOOKING THE TICKET                                                |\n");
  printf("|   YOU ARE VIEWING  MOVIE INFO FOR THE TICKET                                       |\n");
  printf("======================================================================================\n");
  i=1;
    fp=fopen("mo.txt","r");
        int o=1;
    while(fgets(ch,888,fp)){
        if(o==4){
            goto label3;
        }
        o++;
        if(i%1==0){
    if(i%1==0){
        printf("\n");
    }
    fscanf(fp,"%s%s%s",movie1,movie2,movie3);
    printf("MOVIE NAME : %s\n",movie1);
    printf("DATE : %s\n",movie2);
    printf("TIMMING : %s\n",movie3);
        }//if else if
  i++;
}//while loop
fclose(fp);
label3 :
printf("======================================================================================\n");
printf("ENTER YOUR CHOISE :");
scanf(" %d",&movie);
switch(movie){
    case 1 :
    system("cls");
      fp=fopen("mo.txt","r");
              int h=1;
    while(fgets(ch,888,fp)){
        if(h==4){
          goto label4;
        }
        h++;
        if(i%1==0){
    if(i%1==0){
        printf("\n");
    }
    fscanf(fp,"%s%s%s",movie1,movie2,movie3);
    printf("%d) MOVIE :  %s\n",j,movie1);
    j++;
        }//if else if
  i++;
}//while loop
fclose(fp);
label4 : 
printf("======================================================================================\n");
printf("Enter your choice : ");
scanf(" %d",&movie);
switch(movie)
{
    case 1 : //movie case 1 
    system("cls");
    fp1=fopen("mo.txt","r");
    fscanf(fp1,"%s",m1);
    fclose(fp1);
    printf("MOVIE NAME %s\n",m1);
    printf("======================================================================================\n");
    printf("TIMMING :\n1)11:00AM-2:00PM\n2)6:00PM-9:00PM\n");
    printf("======================================================================================\n");
    printf("ENTER : ");
    scanf(" %d",&tim);
    switch (tim)
    {
     case 1 : 
     system("cls");
     printf("======================================================================================\n");
     printf("| 1) PREMIUM FOR  1,500/-                                                            |\n");
     printf("| 2) MIDDLE  FOR  800/-                                                              |\n");
     printf("| 3) NORMAL  FOR 500/-                                                               |\n");
     printf("| 4) GO BACK                                                                         |\n");
     printf("======================================================================================\n");
     printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        case 1 :
        system("cls");
        x=9;
        yu=x-tim1;
        again :
         system("cls");
        if(yu<0){
        if(yu<9 && yu>0){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim1-tim11-tim11x);
        printf("AVAILABLE NO.OF SEAT :%d\n",yu);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim1); 
        x=yu;  
        goto pr;
        }
        else {
            printf("ERROR");
            getch();
            goto labels;
        }
        }
        if(yu<9 && yu>0){
         printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim1-tim11-tim11x);
        printf("AVAILABLE NO.OF SEAT :%d\n",yu);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim1); 
        x=yu;  
        }
        else if(x==9){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim1-tim11-tim11x);
        printf("AVAILABLE NO.OF SEAT :%d\n",x);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim1);  
        }
        pr :
        price=1500;
        price=price*tim1;
        if(tim1>x){
            system("cls");
            printf("TOTAL NO OF SEAT AVAILABLE %d\n",39+tim1-tim11-tim11x);
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",tim1-x);
            fflush(stdin);
            fflush(stdout);
            getch();
            goto again;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        case 1 : 
         fclose(fp1);
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-PREMIUM\nSHOW_NAME:-%s\n",name,m1);
        fclose(fp1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- PREMIUM                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-11:00AM-2:00PM                                                 | E |\n");
    printf("\t\t\t\t\t\t| M |  PER :- %d                                                                 | M |\n",tim1);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    tim1=x+tim1;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();
    }
    break;
    case 2 : 
        again2 : 
system("cls");                    
        x1=10;
        yu1=x1-tim11;
        if(yu1<9 && yu1>0){
            printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim1-tim11-tim11x);
        printf("AVAILABLE NO.OF SEAT :%d\n",yu1);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim11); 
        x1=yu1;  
        }
        else if(x1==10){
            printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim1-tim11-tim11x);
        printf("AVAILABLE NO.OF SEAT :%d\n",x1);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim11);  
        }
        if(tim11>x1){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",tim11-x1);
            getch();
            goto again2;
        }
        sleep(1);
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 :
       fclose(fp1); 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
        fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nLOCATE:-MIDDLE\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=800;
        price=price*tim11;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%2d                                                       | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  LOCATE :- MIDDLE                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-11:00AM-2:00PM                                                 | E |\n");
    printf("\t\t\t\t\t\t| M |  NO.OF SEATS :- %d                                                       | M |\n",tim11);
    printf("\t\t\t\t\t\t| A |  TOTAL PRICE - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 3 : 
        again1 :
        system("cls");                    
        x1x=20;
        yu1x=x1x-tim11x;
        if(yu1x<20 && yu1x>0){
            printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim1-tim11-tim11x);
        printf("AVAILABLE NO.OF SEAT :%d\n",yu1x);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim11x); 
        x1x=yu1x;  
        }
        else if(x1x==20){
            printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim1-tim11-tim11x);
        printf("AVAILABLE NO.OF SEAT :%d\n",x1x);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim11x);  
        }
        if(tim11x>x1x){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",tim11x-x1x);
            getch();
            goto again1;
        }
        sleep(1);
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 :
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-NORMAL\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=500;
        price=price*tim11x;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%2d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- NORMAL                                                          | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-11:00AM-2:00PM                                                 | E |\n");
    printf("\t\t\t\t\t\t| M |  NO.OF SEATS:- %d                                                        | M |\n",tim11x);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 4 : 
    main();
    break;
    }
     break;
     case 2 : 
     system("cls");
     printf("======================================================================================\n");
     printf("| 1) PREMIUM FOR  1,500/-                                                            |\n");
     printf("| 2) MIDDLE  FOR  800/-                                                              |\n");
     printf("| 3) NORMAL  FOR 500/-                                                               |\n");
     printf("| 4) GO BACK                                                                         |\n");
     printf("======================================================================================\n");
     printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        case 1 : 
        again6 : 
  system("cls");                    
        x1a=9;
        yua=x1a-tim11a;
        if(yua<9 && yua>0){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim11a-tim9-timx);
        printf("AVAILABLE NO.OF SEAT :%d\n",yua);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim11a); 
        x1a=yua;  
        }
        else if(x1a==9){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim11a-tim9-timx);
        printf("AVAILABLE NO.OF SEAT :%d\n",x1a);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim11a);  
        }
        if(tim11a>x1a){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",tim11a-x1a);
            getch();
            goto again6;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        case 1 : 
        fclose(fp1);
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-PREMIUM\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=1500;
        price=price*tim11a;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- PREMIUM                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-6:00PM-9:00PM                                                  | E |\n");
    printf("\t\t\t\t\t\t| M |  per :- %d                                                                | M |\n",tim11a);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();
    }
    break;
    case 2 : 
        again5 : 
system("cls");                    
        x9=10;
        y9=x9-tim9;
        if(y9<10 && y9>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim11a-tim9-timx);    
        printf("AVAILABLE NO.OF SEAT :%d\n",y9);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim9); 
        x9=y9;  
        }
        else if(x9==10){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim11a-tim9-timx);
        printf("AVAILABLE NO.OF SEAT :%d\n",x9);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim9);  
        }
        if(tim9>x9){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",tim9-x9);
            getch();
            goto again5;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
      fclose(fp1);
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
        fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nLOCATE:-MIDDLE\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=800;
        price=price*tim9;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  LOCATE :- MIDDLE                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-6:00PM-9:00PM                                                  | E |\n");
    printf("\t\t\t\t\t\t| M |  per :- %d                                                                | M |\n",tim9);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }                   
    break;
    case 3 : 
        again5l : 
         xx=20;
        yx=xx-timx;
        if(yx<20 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim11a-tim9-timx);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&timx); 
        xx=yx;  
        }
        else if(xx==20){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-tim11a-tim9-timx);
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&timx);  
        }
        if(timx>xx){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",timx-xx);
            getch();
            goto again5l;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-NORMAL\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=500;
        price=price*timx;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- NORMAL                                                          | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-6:00PM-9:00PM                                                  | E |\n");
    printf("\t\t\t\t\t\t| M |  per :- %d                                                                | M |\n",timx);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 4 : 
    main();
    break;
    }
     break;
     default :
     printf("ERROR PLEASE ENTER RIGHT OPRION.....");
     getch();
     main();
    }
    break;
    case 2 : //movie case 2 
     system("cls");
      fp=fopen("mo.txt","r");
    while(fgets(ch,888,fp)){
        j=1;
            static int g=1;
        if(i%1==0){
    if(i%1==0){
        printf("\n");
    }
    fscanf(fp,"%s",m2);
    if(g==2){
    printf("MOVIE :  %s\n",m2);
    goto label10;
    }
        j++;
        g++;
        }//if else 
  i++;
}//while loop
label10 :
    strupr(m2);
    i=0;
    fp1=fopen("mo.txt","r");
    while(fgets(ch,888,fp1)){
        if(i%1==0){
        fscanf(fp1,"%s",m1);
        if(strcmp(m2,m1)==0){
            system("cls");
          printf("MOVIE NAME %s\n",m2);
    printf("======================================================================================\n");
    printf("TIMMING :\n1)9:00AM-10:30AM\n2)2:30PM-4:00PM\n");
    printf("======================================================================================\n");
     printf("ENTER : ");
    scanf(" %d",&tim);  
    switch (tim){
     case 1 : 
     system("cls");
     printf("======================================================================================\n");
     printf("| 1) PREMIUM FOR  1,500/-                                                            |\n");
     printf("| 2) MIDDLE  FOR  800/-                                                              |\n");
     printf("| 3) NORMAL  FOR 500/-                                                               |\n");
     printf("| 4) GO BACK                                                                         |\n");
     printf("======================================================================================\n");
     printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        static int timc,timo,timv;
        case 1 : 
        againa : 
         xx=9;
        yx=xx-timc;
        if(yx<20 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-timc-timo-timv);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&timc); 
        xx=yx;  
        }
        else if(xx==9){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-timc-timo-timv); 
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&timc);  
        }
        if(timc>xx){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",timc-xx);
            getch();
            goto againa;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-PREMIUM\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=1500;
        price=price*timc;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%2d                                                       | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- PREMIUM                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-9:00AM-10:30AM                                                 | E |\n");
    printf("\t\t\t\t\t\t| M |  PER :- %d                                                                | M |\n",timc);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();
    }
    break;
    case 2 : 
        again2s : 
         xx=10;
        yx=xx-timo;
        if(yx<20 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-timc-timo-timv);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&timo); 
        xx=yx;  
        }
        else if(xx==10){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-timc-timo-timv); 
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&timo);  
        }
        if(timo>xx){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",timo-xx);
            getch();
            goto again2s;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
        fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nLOCATE:-MIDDLE\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=800;
        price=price*timo;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%2d                                                      | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  LOCATE :- MIDDLE                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-9:00AM-10:30AM                                                 | E |\n");
    printf("\t\t\t\t\t\t| M |   PER :- %d                                                               | M |\n",timo);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 3 : 
        again1s : 
         xx=20;
        yx=xx-timv;
        if(yx<20 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-timc-timo-timv);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&timv); 
        xx=yx;  
        }
        else if(xx==20){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-timc-timo-timv); 
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&timv);  
        }
        if(timv>xx){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",timv-xx);
            getch();
            goto again1s;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-NORMAL\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=500;
        price=price*timv;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%2d                                                      | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                                  | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- NORMAL                                                          | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-9:00AM-10:30AM                                                 | E |\n");
    printf("\t\t\t\t\t\t| M |  per :- %d                                                                | M |\n",timv);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 4 : 
    main();
    break;
    }
     break;
     case 2 : 
     system("cls");
     printf("======================================================================================\n");
     printf("| 1) PREMIUM FOR  1,500/-                                                            |\n");
     printf("| 2) MIDDLE  FOR  800/-                                                              |\n");
     printf("| 3) NORMAL  FOR 500/-                                                               |\n");
     printf("| 4) GO BACK                                                                         |\n");
     printf("======================================================================================\n");
     printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        static int i1,i2,i3;
        case 1 : 
        again6s1 :
        system("cls"); 
         xx=9;
        yx=xx-i1;
        if(yx<20 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-i1-i2-i3);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&i1); 
        xx=yx;  
        }
        else if(xx==9){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-i1-i2-i3);    
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&i1);  
        }
        if(i1>xx || i1==0){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",i1-xx);
            getch();
            goto again6s1;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-PREMIUM\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=1500;
        price=price*i1;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :- 26/01/23                                                         | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- PREMIUM                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-2:30PM-4:00PM                                                  | E |\n");
    printf("\t\t\t\t\t\t| M |  per :- %d                                                                | M |\n",i1);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();
    }
    break;
    case 2 : 
        again5s : 
        system("cls"); 
         xx=10;
        yx=xx-i2;
        if(yx<50 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-i1-i2-i3);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&i2); 
        xx=yx;  
        }
        else if(xx==10){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-i1-i2-i3);    
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&i2);  
        }
        if(i2>xx || i2==0){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",i2-xx);
            getch();
            goto again5s;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
        fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nLOCATE:-MIDDLE\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=800;
        price=price*i2;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |  SEAT NO :-                                                               | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-                                                                  | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  LOCATE :- MIDDLE                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-2:30PM-4:00PM                                                  | E |\n");
    printf("\t\t\t\t\t\t| M |  per :- %d                                                                | M |\n",i2);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 3 : 
        again4s : 
        system("cls"); 
         xx=9;
        yx=xx-i3;
        if(yx<20 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-i1-i2-i3);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&i3); 
        xx=yx;  
        }
        else if(xx==20){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-i1-i2-i3);    
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&i3);  
        }
        if(i3>xx || i3==0){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",i3-xx);
            getch();
            goto again4s;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-NORMAL\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
          price=800;
        price=price*i3;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%2d                                                      | X |\n",rand());
    printf("\t\t\t\t\t\t| A |  SEAT NO :-                                                               | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-                                                                  | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- NORMAL                                                          | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-2:30PM-4:00PM                                                  | E |\n");
    printf("\t\t\t\t\t\t| M |  per : %d                                                                 | M |\n",i3);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 4 : 
    main();
    break;
    }
     break;
     default :
     printf("ERROR PLEASE ENTER RIGHT OPRION.....");
     getch();
     main();
    } 
      break;  }//if end////////////////////////////////////////////////////////////
        }//if end
        i++;
    }//while loop
    break;
    case 3 : //hello --------------------------------------------------------------------------------
     system("cls");
      fp=fopen("mo.txt","r");
    while(fgets(ch,888,fp)){
        j=1;
            static int g=1;
        if(i%1==0){
    if(i%1==0){
        printf("\n");
    }
        if(g==4){
        goto label10s;
        }
    fscanf(fp,"%s%s%s",m2,movie2,movie3);
    if(g==3){
        printf("%s",m2);
    }
        }//if else 
        j++;
        g++;
  i++;
}//while loop
label10s :
    strupr(m2);
    i=0;
    fp1=fopen("mo.txt","r");
    while(fgets(ch,888,fp1)){
        if(i%1==0){
        fscanf(fp1,"%s",m1);
        if(strcmp(m2,m1)==0){
            system("cls");
          printf("MOVIE NAME %s\n",m2);
    printf("======================================================================================\n");
    printf("TIMMING :\n1)9:00AM-10:30AM\n2)2:30PM-4:00PM\n");
    printf("======================================================================================\n");
     printf("ENTER : ");
    scanf(" %d",&tim);  
    switch (tim){
     case 1 : 
     system("cls");
     printf("======================================================================================\n");
     printf("| 1) PREMIUM FOR  1,500/-                                                            |\n");
     printf("| 2) MIDDLE  FOR  800/-                                                              |\n");
     printf("| 3) NORMAL  FOR 500/-                                                               |\n");
     printf("| 4) GO BACK                                                                         |\n");
     printf("======================================================================================\n");
     printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        static int j1,j2,j3;
        case 1 : 
        againag : 
         system("cls"); 
         xx=9;
        yx=xx-j1;
        if(yx<20 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-j1-j2-j3);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&j1); 
        xx=yx;  
        }
        else if(xx==9){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-j1-j2-j3);     
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&j1);  
        }
        if(j1>xx || j1==0){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",j1-xx);
            getch();
            goto againag;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-PREMIUM\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=1500;
        price=price*j1;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%2d                                                      | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- PREMIUM                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-9:00AM-10:30AM                                                 | E |\n");
    printf("\t\t\t\t\t\t| M |  PER :- %d                                                                | M |\n",j1);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();
    }
    break;
    case 2 : 
       s=10;
        again2sg : 
         system("cls"); 
         xx=10;
        yx=xx-j2;
        if(yx<20 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-j1-j2-j3);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&j2); 
        xx=yx;  
        }
        else if(xx==10){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-j1-j2-j3);     
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&j2);  
        }
        if(j2>xx || j2==0){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",j2-xx);
            getch();
            goto again2sg;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
        fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nLOCATE:-MIDDLE\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=800;
        price=price*j2;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%2d                                                      | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                          | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  LOCATE :- MIDDLE                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-9:00AM-10:30AM                                                 | E |\n");
    printf("\t\t\t\t\t\t| M |   PER :- %d                                                               | M |\n",j2);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 3 : 
    s=20;
        again1sk : 
         system("cls"); 
         xx=20;
        yx=xx-j3;
        if(yx<20 && yx>0){  
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-j1-j2-j3);    
        printf("AVAILABLE NO.OF SEAT :%d\n",yx);                    
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&j3); 
        xx=yx;  
        }
        else if(xx==20){
        printf("TOTAL NO OF SEAT AVAILABLE %d\n",39-j1-j2-j3);     
        printf("AVAILABLE NO.OF SEAT :%d\n",xx);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&j3);  
        }
        if(j3>xx || j3==0){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",j3-xx);
            getch();
            goto again1sk;
        }
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CNACEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-NORMAL\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=500;
        price=price*j3;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%2d                                                      | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-25/01/23                                                                  | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- NORMAL                                                          | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-9:00AM-10:30AM                                                 | E |\n");
    printf("\t\t\t\t\t\t| M |  per :- %d                                                                | M |\n",j3);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 4 : 
    main();
    break;
    }
     break;
     case 2 : 
     system("cls");
     printf("======================================================================================\n");
     printf("| 1) PREMIUM FOR  1,500/-                                                            |\n");
     printf("| 2) MIDDLE  FOR  800/-                                                              |\n");
     printf("| 3) NORMAL  FOR 500/-                                                               |\n");
     printf("| 4) GO BACK                                                                         |\n");
     printf("======================================================================================\n");
     printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        case 1 : 
        s=9;
        again6so : 
        printf("AVAILABLE NO.OF SEAT : %d\n",s);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim1);
        if(tim1>s){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",tim1-s);
            getch();
            goto again6so;
        }
        s=s-tim;
        sleep(1);
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
        case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-PREMIUM\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=1500;
        price=price*tim1;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |                                                                           | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :- 27/01/23                                                         | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- PREMIUM                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-2:30PM-4:00PM                                                  | E |\n");
    printf("\t\t\t\t\t\t| M |  per :- %d                                                                | M |\n",tim1);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();
    }
    break;
    case 2 : 
       s=10;
        again5sj : 
        printf("AVAILABLE NO.OF SEAT : %d\n",s);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim1);
        if(tim1>s){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",tim1-s);
            getch();
            goto again5sj;
        }
        s=s-tim;
        sleep(1);
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
        fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nLOCATE:-MIDDLE\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
         price=800;
        price=price*tim1;
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |  SEAT NO :-                                                               | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-                                                                  | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  LOCATE :- MIDDLE                                                         | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-2:30PM-4:00PM                                                  | E |\n");
    printf("\t\t\t\t\t\t| M |  per :- %d                                                                | M |\n",tim1);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 3 : 
    s=20;
        again4sjk : 
        printf("AVAILABLE NO.OF SEAT : %d\n",s);
        printf("ENTER THE NO.OF SEAT : ");
        scanf(" %d",&tim1);
        if(tim1>s){
            printf("%d AMOUNT OF SEAT NOT AVAILAIBLE\n",tim1-s);
            getch();
            goto again4sjk;
        }
        s=s-tim;
        sleep(1);
        system("cls");
        printf("======================================================================================\n");
        printf("ENTER YOUR NAME : ");
        scanf(" %s",&name);
        system("cls");
        printf("======================================================================================\n");
        printf("1) FOR BOOKING\n2) FOR CANCEL\n");
        printf("======================================================================================\n");
        printf("ENTER : ");
    scanf(" %d",&tim);
    switch(tim){
      case 1 : 
        system("cls");
        printf("BOOKING.\n");
        sleep(1);
        system("cls");
        printf("BOOKING..\n");
        sleep(1);
        system("cls");
        printf("BOOKING...\n");
        sleep(1);
        system("cls");
        printf("BOOKING....\n");
        sleep(1);
        system("cls");
        printf("BOOKING.....\n");
        sleep(1);
        system("cls");
         fp1=fopen("cos.txt","a");
        fprintf(fp1,"NAME:-%s\nCLASS:-NORMAL\nSHOW_NAME:-%s",name,m1);
        fclose(fp1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\t|   |                              TICKET                                       |   |\n");
    printf("\t\t\t\t\t\t| P |                                OF                                         | P |\n");
    printf("\t\t\t\t\t\t| L |                           PLAXA  CINEMA                                   | L |\n");
    printf("\t\t\t\t\t\t| A |===========================================================================| A |\n");
    printf("\t\t\t\t\t\t| X |  USER ID CODE :-%d                                                        | X |\n",rand());
    printf("\t\t\t\t\t\t| A |  SEAT NO :-                                                               | A |\n");
    printf("\t\t\t\t\t\t|   |                                                                           |   |\n");
    printf("\t\t\t\t\t\t| C |  DATE :-                                                                  | C |\n");
    printf("\t\t\t\t\t\t| I |                                                                           | I |\n");
    printf("\t\t\t\t\t\t| N |  CLASS :- NORMAL                                                          | N |\n");
    printf("\t\t\t\t\t\t| E |  TIMMING :-2:30PM-4:00PM                                                  | E |\n");
    printf("\t\t\t\t\t\t| M |  per : %d                                                                 | M |\n",tim1);
    printf("\t\t\t\t\t\t| A |  TOTAL price - %d                                                         | A |\n",price);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("\t\t\t\t\t\tNAME :- %s\n",name);
    printf("\t\t\t\t\t\tSHOW NAME :- %s\n",m1);
    printf("\t\t\t\t\t\t======================================================================================\n");
    printf("HIT ENTER TO MAIN MENU......");
    getch();
    main();
    break;
    case 2 : 
    s=s+tim;
    main();
    break;
    default:
    s=s+tim;
    system("cls");
    printf("ERROR...HIT ENTER TO CONTINUE....");
    getch();
    main();  
    }
    break;
    case 4 : 
    main();
    break;
    }
     break;
     default :
     printf("ERROR PLEASE ENTER RIGHT OPRION.....");
     getch();
     main();
    } 
      break;  }//if end////////////////////////////////////////////////////////////
        }//if end
        i++;
    }//while loop
    break;
}//second-movie end
}//main-movie end 

}//end
void admin(){
  int choice1,choice2,i=0,j=1,y,o,p,k;
  int d1,d2,d3,sala,di;
  char username[1000],pass[1000],ch[1000],fu[1000],fp[1000],newmo[1000],udate[1000],ch1[1000],choices[1000],a[1000],b[1000],c[1000];
  char f1[1000],f2[1000],f3[1000],name[1000],id[1000],qual[1000],sal[1000],join[1000],ch4,ch5;
  FILE *fp1,*fp2,*fp3,*fp5;
  login : 
  system("cls");
  printf("\t\t\t\t\t\t======================================================================================\n");
  printf("\t\t\t\t\t\t|                                                                                    |\n");
  printf("\t\t\t\t\t\t|  1) ADMIN LOGIN                                                                    |\n");      
  printf("\t\t\t\t\t\t|  2) EMPLOYEE LOGIN                                                                 |\n");   
  printf("\t\t\t\t\t\t|  3) GO BACK                                                                        |\n");   
  printf("\t\t\t\t\t\t|                                                                                    |\n");  
  printf("\t\t\t\t\t\t======================================================================================\n"); 
  printf("ENTER YOUR CHOICE : ");-
  scanf(" %d",&choice1);
  switch(choice1){
    case 1 : 
    system("cls");
    printf("ENTER USERNAME :");
    scanf(" %s",&username);
    printf("ENTER PASSWORD : ");
    i=0;
    while(( ch4='*',ch4=_getch())!=13){
     pass[i]=ch4;
     i++;
    }
    pass[i]='\0';
    printf("%s",pass);
    // scanf(" %s",&pass);
    fp1=fopen("ADMIN.TXT","r");
    while(fgets(ch,100,fp1)){
        if(i%1==0){
            fscanf(fp1,"%s%s",fu,fp);
            if(strcmp(fu,username)==0 && strcmp(fp,pass)==0){
                system("cls");
                printf("PLEASE WAIT.");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT..");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT...");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT....");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT......");
                sleep(1);
                admin : 
                fflush(stdin);
                strupr(username);
                system("cls");
                printf("\t\t\t\t\t\t                                    %s\n",username);
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("\t\t\t\t\t\t|                                WELCOME                                             |\n");
                printf("\t\t\t\t\t\t|                                  TO                                                |\n");
                printf("\t\t\t\t\t\t|                                ADMIN                                               |\n");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t| 1) ADD MOVIE                                                                       |\n");
                printf("\t\t\t\t\t\t| 2) DATA                                                                            |\n");
                printf("\t\t\t\t\t\t| 3) TO CHANGE THE USERNAME OR PASSWORD                                              |\n");
                printf("\t\t\t\t\t\t| 4) GO BACK                                                                         |\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("ENTER YOU CHOICE : ");
                scanf(" %d",&choice1);
                switch(choice1){
                    case 1 : 
                    addmo1 :
                    system("cls");
                    fp2=fopen("MOVIES.TXT","a");
                    printf("ENTER A MOVIE NAME : ");
                    scanf(" %s",&newmo);
                    int  day,mon,ye;
                    day :
                    system("cls");
    time_t t;
    t = time(NULL);
    printf("ENTER A RELEASED DAY :");
    scanf("%d",&day);
    if(day>31){
        system("cls");
        printf("PLEASE ENTER VALID DAY...");
                getch();
        goto day;
    }
    else if(day<=0){
           system("cls");
        printf("PLEASE ENTER VALID DAY...");
                getch();
        goto day; 
    }
    printf("ENTER A MONTH : ");
    scanf("%d",&mon);
    if(mon>12){
        printf("ENTER A VALID MONTH.....");
                getch();
        goto day;
    }
    if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12){
        if(day>31){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
        goto day;
        }
    }
    else if(mon==4 || mon==6 || mon==9 || mon==11){
        if(day>30){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
        goto day;
        }
    }
    else if(mon==2){
        if(day>29){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
        goto day;
        }
    }
    else if(mon<=0){
            system("cls");
        printf("PLEASE ENTER VALID MONTH...");
                getch();
        goto day;
    }
    printf("ENTER A YEAR : ");
    scanf("%d",&ye);
         struct tm tm = *localtime(&t);
    o=tm.tm_mon+1;
    p=tm.tm_mday;
    k=tm.tm_year+1900;
              if(ye>k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR5....");
        getch();
        goto day;
     }
            if(mon>o && ye==k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR3....");
        getch();
        goto day;
     }
              if(mon>o && ye>k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR3....");
        getch();
        goto day;
     }
          if(day>p && mon==o && ye==k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR2....");
        getch();
        goto day;
     }
        if(o>ye && p>day && k>ye ){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR12.....");
        getch();
        goto day;
    }
    if(ye>2023){
        system("cls");
        printf("ENTER A VALID YEAR.....");
                getch();
        goto day;
    }
        if(ye<=2000){
        system("cls");
        printf("ENTER A VALID YEAR.....");
                getch();
        goto day;
    }
    strupr(newmo);
                    fprintf(fp2,"\nMOVIE NAME: %s\nRELEASED DATE: %d/%d/%d\nADDING DATE: %d/%d/%d\n",newmo,day,mon,ye,p,o,k);
                    fclose(fp2);
                       system("cls");
                printf("ADDING MOVIE.");
                sleep(1);
                system("cls");
                printf("ADDING MOVIE..");
                sleep(1);
                system("cls");
                printf("ADDING MOVIE...");
                sleep(1);
                system("cls");
                printf("ADDING MOVIE....");
                sleep(1);
                system("cls");
                printf("ADDING MOVIE......");
                sleep(1);
                system("cls");
                printf("Movie Added TO DATABASE...");
                getch();
                goto movdata;
                break;
                case 2 : 
                custom3 :
                system("cls");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t|  1) EMPLOYEE DATA                                                                  |\n");
                printf("\t\t\t\t\t\t|  2) MOVIE DATA                                                                     |\n");
                printf("\t\t\t\t\t\t|  3) ADMIN DATA                                                                     |\n");
                printf("\t\t\t\t\t\t|  4) COSTUMER DATA                                                                  |\n");
                printf("\t\t\t\t\t\t|  5) GO BACK                                                                        |\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("ENTER YOUR CHOICE : ");
                scanf(" %d",&choice1);
                switch (choice1)
                {
                case 1 : 
                custom : 
                system("cls");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t| 1) TO VIEW EMPLOYEE                                                                |\n");
                printf("\t\t\t\t\t\t| 2) TO ADD EMLOYEE                                                                  |\n");
                printf("\t\t\t\t\t\t| 3) GO BACK                                                                         |\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("ENTER YOUR CHOICE : ");
                scanf(" %d",&choice2);
                switch(choice2){
                    case 1 :
                    emp : 
                    system("cls");
                    fp3=fopen("employee.txt","r");
                        i=1;
                    while(fgets(ch1,1000,fp3)){
                        if(i%1==0){
                             fscanf(fp3,"%s%s%s",f1,f2,f3);
                         printf("%s %s %s\n",f1,f2,f3,sleep(0.5));
                        }
                        op :
                        i++;
                         if (j%4==0){
                            sleep(1);
                          printf("\n");
                        }
                        j++;
                    }
                    fclose(fp3);
                    printf("HIT ENTER BUTTON TO CONTINUE.... ");
                    getch();
                    goto admin;
                    break;
                    case 2 : 
                    custom1 : 
                    system("cls");
                    printf("\t\t\t\t\t\t======================================================================================\n");
                    printf("\t\t\t\t\t\t|                                                                                    |\n");
                    printf("\t\t\t\t\t\t|  1) SENIOR_EXECUTIVE EMPLOYEE                                                      |\n");
                    printf("\t\t\t\t\t\t|  2) SENIOR EMPLOYEE                                                                |\n");
                    printf("\t\t\t\t\t\t|  3) JUNIOR EMPLOYEE                                                                |\n");
                    printf("\t\t\t\t\t\t|  4) GO BACK                                                                        |\n");
                    printf("\t\t\t\t\t\t|                                                                                    |\n");
                    printf("\t\t\t\t\t\t======================================================================================\n");
                    printf("ENTER YOUR CHOICE : ");
                    scanf(" %d",&choice2);
                  switch(choice2){
                    case 1 :
                    reback :
                    date2 :
                    fflush(stdin);
                    system("cls");
                    printf("======================================================================================\n"); 
                    printf("ENTER NAME : ");
                    scanf(" %s",&name);
                    fp1=fopen("employee.txt","r");
                    i=1;
                    while(fgets(ch,888,fp1)){
                        if(i%1==0){
                        if(i==1 || i==6 || i==10 || i==14 || i==18 || i==22){
                            fscanf(fp1,"%s%s%d",f1,f2,&d1);
                            goto do1;
                        }
                    fscanf(fp1,"%s%s%s",f1,f2,f3);
                        }
                    do1 :
                        i++;
                    }
                    d1++;
                    fclose(fp1);
                    printf("ENTER SALARY : ");
                    scanf(" %d",&sala);
                    if(sala<1000){
                        system("cls");
                        printf("ENTER A VALID SALARY...");
                        getch();
                        goto date2;
                    }
                    date1 :
                    printf("ENTER DATE OF JOINING : ");
                    scanf("%d",&day);
                        if(day==NULL){
                        system("cls");
                        printf("ENTER VALID INFORMATION");
                        getch();
                        goto date2;
                    }
                    if(day>31){
                        system("cls");
                        printf("ENTER VALID DATE");
                        getch();
                        system("cls");
                        goto date1;
                    }
                    else if(day<=0){
                        system("cls");
                        printf("ENTER VALID DATE");
                        getch();
                        system("cls");
                        goto date1;
                    }
                      printf("ENTER MONTH OF JOINING : ");
                    scanf("%d",&mon);
                     if(mon>12){
        printf("ENTER A VALID MONTH.....");
                getch();
        goto date1;
    }
    if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12){
        if(day>31){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
                system("cls");
        goto date1;
        }
    }
    else if(mon==4 || mon==6 || mon==9 || mon==11){
        if(day>30){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
                system("cls");
        goto date1;
        }
    }
    else if(mon==2){
        if(day>29){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
                system("cls");
        goto date1;
        }
    }
    else if(mon<=0){
            system("cls");
        printf("PLEASE ENTER VALID MONTH...");
                getch();
                system("cls");
        goto date1;
    }
                      printf("ENTER YEAR OF JOINING : ");
                    scanf("%d",&ye);
    o=tm.tm_mon+1;
    p=tm.tm_mday+28;
    k=tm.tm_year+2023;
              if(ye>k){
        system("cls");
     printf("%d",k);
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR5....");
        getch();
        system("cls");
        goto date1;
     }
            if(mon>o && ye==k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR3....");
        getch();
        system("cls");
        goto date1;
     }
              if(mon>o && ye>k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR3....");
        getch();
        system("cls");
        goto date1;
     }
          if(day>p && mon==o && ye==k){
        system("cls");
        printf("%d",o);
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR2....");
        getch();
        system("cls");
        goto date1;
     }
        if(o>ye && p>day && k>ye ){
        system("cls");
        printf("%d",o);
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR12.....");
        getch();
        system("cls");
        goto date1;
    }
    if(ye>2023){
        system("cls");
        printf("ENTER A VALID YEAR.....");
                getch();
                system("cls");
        goto date1;
    }
        if(ye<=2000){
        system("cls");
        printf("ENTER A VALID YEAR.....");
                getch();
                system("cls");
        goto date1;
    }
             printf("ENTER PASSWORD : ");
            scanf(" %s",&qual);
                    printf("======================================================================================\n"); 
                    choose : 
                   system("cls");
                    printf("======================================================================================\n"); 
                    printf("NAME : %s\n",name);
                    printf("id : %d\n",d1);
                    printf("SALARY : %d\n",sala);
                     printf("DATE JOINING : %d/%d/%d\n",day,mon,ye);
                    printf("======================================================================================\n");
                    printf("CHOOSE WISELY.....\n");
                    printf("1) GO BACK  2) CONFIRM\n");
                    printf("ENTER YOUR CHOICE : ");
                    scanf(" %d",&choice1);
                    switch (choice1){
                        case 1 : 
                        goto reback;
                        break;
                        case 2 : 
                        strupr(name);
                    fp3=fopen("employee.txt","a");
                    fprintf(fp3,"\n");
                    fprintf(fp3,"\nS.R EXECUTIVE_EMPLOYEE: %s\nEMP ID: %d\nSALARY : %d\nDATE JOINING: %d/%d/%d",name,d1,sala,day,mon,ye);
                    fclose(fp3);
                    fp5=fopen("emp.txt","a");
                    fprintf(fp5,"\n%s %s",name,qual);
                    fclose(fp5);
                    system("cls");
                    printf("Adding Emp.");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp..");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp...");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp...");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp...");
                    sleep(1);
                    system("cls");
                    printf("EMP added to database.....\n");
                    printf("HIT ENTER BUTTON TO VIEW EMP DATABASE....");
                    getch();
                    goto emp;
                        break;
                        default : 
                        printf("please enter valid option....");
                        printf("hit enter to continue\n");
                        getch();
                        goto choose;
                        break;
                    }
                    break;
                    case 2 : 
                    reback4 : 
                    date3 :
                    fflush(stdin);
                    system("cls");
                    printf("======================================================================================\n"); 
                    printf("ENTER NAME : ");
                    scanf(" %s",&name);
                    fp1=fopen("employee.txt","r");
                    i=1;
                    while(fgets(ch,888,fp1)){
                        if(i%1==0){
                        if(i==1 || i==6 || i==10 || i==14 || i==18 || i==22){
                            fscanf(fp1,"%s%s%d",f1,f2,&d1);
                            goto do13;
                        }
                    fscanf(fp1,"%s%s%s",f1,f2,f3);
                        }
                    do13 :
                        i++;
                    }
                    d1++;
                    fclose(fp1);
                    printf("ENTER SALARY : ");
                    scanf(" %d",&sala);
                    if(sala<1000){
                        system("cls");
                        printf("ENTER A VALID SALARY...");
                        getch();
                        goto date3;
                    }
                    datea :
                    printf("ENTER DATE OF JOINING : ");
                    scanf("%d",&day);
                        if(day==NULL){
                        system("cls");
                        printf("ENTER VALID INFORMATION");
                        getch();
                        goto date3;
                    }
                    if(day>31){
                        system("cls");
                        printf("ENTER VALID DATE");
                        getch();
                        system("cls");
                        goto datea;
                    }
                    else if(day<=0){
                        system("cls");
                        printf("ENTER VALID DATE");
                        getch();
                        system("cls");
                        goto datea;
                    }
                      printf("ENTER MONTH OF JOINING : ");
                    scanf("%d",&mon);
                     if(mon>12){
        printf("ENTER A VALID MONTH.....");
                getch();
        goto datea;
    }
    if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12){
        if(day>31){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
                system("cls");
        goto datea;
        }
    }
    else if(mon==4 || mon==6 || mon==9 || mon==11){
        if(day>30){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
                system("cls");
        goto datea;
        }
    }
    else if(mon==2){
        if(day>29){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
                system("cls");
        goto datea;
        }
    }
    else if(mon<=0){
            system("cls");
        printf("PLEASE ENTER VALID MONTH...");
                getch();
                system("cls");
        goto datea;
    }
                      printf("ENTER YEAR OF JOINING : ");
                    scanf("%d",&ye);
    o=tm.tm_mon+1;
    p=tm.tm_mday+28;
    k=tm.tm_year+2023;
              if(ye>k){
        system("cls");
     printf("%d",k);
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR5....");
        getch();
        system("cls");
        goto datea;
     }
            if(mon>o && ye==k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR3....");
        getch();
        system("cls");
        goto datea;
     }
              if(mon>o && ye>k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR3....");
        getch();
        system("cls");
        goto datea;
     }
          if(day>p && mon==o && ye==k){
        system("cls");
        printf("%d",o);
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR2....");
        getch();
        system("cls");
        goto datea;
     }
        if(o>ye && p>day && k>ye ){
        system("cls");
        printf("%d",o);
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR12.....");
        getch();
        system("cls");
        goto datea;
    }
    if(ye>2023){
        system("cls");
        printf("ENTER A VALID YEAR.....");
                getch();
                system("cls");
        goto datea;
    }
        if(ye<=2000){
        system("cls");
        printf("ENTER A VALID YEAR.....");
                getch();
                system("cls");
        goto datea;
    }
             printf("ENTER PASSWORD : ");
            scanf(" %s",&qual);
                    printf("======================================================================================\n"); 
                    choose8 : 
                   system("cls");
                    printf("======================================================================================\n"); 
                    printf("NAME : %s\n",name);
                    printf("id : %d\n",d1);
                    printf("SALARY : %d\n",sala);
                     printf("DATE JOINING : %d/%d/%d\n",day,mon,ye);
                    printf("======================================================================================\n");
                    printf("CHOOSE WISELY.....\n");
                    printf("1) GO BACK  2) CONFIRM\n");
                    printf("ENTER YOUR CHOICE : ");
                    scanf(" %d",&choice1);
                    switch (choice1){
                        case 1 : 
                        goto reback4;
                        break;
                        case 2 : 
                        strupr(name);
                    fp3=fopen("employee.txt","a");
                    fprintf(fp3,"\n");
                    fprintf(fp3,"\nS.R EMPLOYEE: %s\nEMP ID: %d\nSALARY : %d\nDATE JOINING: %d/%d/%d",name,d1,sala,day,mon,ye);
                    fclose(fp3);
                    fp5=fopen("emp.txt","a");
                    fprintf(fp5,"\n%s %s",name,qual);
                    fclose(fp5);
                    system("cls");
                    printf("Adding Emp.");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp..");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp...");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp...");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp....");
                    sleep(1);
                    system("cls");
                    printf("EMP added to data.....\n");
                    printf("HIT ENTER BUTTON TO VIEW EMP DATA....");
                    getch();
                    goto emp;
                        break;
                        default : 
                        printf("please enter valid option....");
                        printf("hit enter to continue\n");
                        getch();
                        goto choose8;
                        break;
                    }
                    break;//apna
                    case 3 : 
                    rebackb : 
                    date3b :
                    fflush(stdin);
                    system("cls");
                    printf("======================================================================================\n"); 
                    printf("ENTER NAME : ");
                    scanf(" %s",&name);
                    fp1=fopen("employee.txt","r");
                    i=1;
                    while(fgets(ch,888,fp1)){
                        if(i%1==0){
                        if(i==1 || i==6 || i==10 || i==14 || i==18 || i==22){
                            fscanf(fp1,"%s%s%d",f1,f2,&d1);
                            goto do13b;
                        }
                    fscanf(fp1,"%s%s%s",f1,f2,f3);
                        }
                    do13b :
                        i++;
                    }
                    d1++;
                    fclose(fp1);
                    printf("ENTER SALARY : ");
                    scanf(" %d",&sala);
                    if(sala<1000){
                        system("cls");
                        printf("ENTER A VALID SALARY...");
                        getch();
                        goto date3b;
                    }
                    dateab :
                    printf("ENTER DATE OF JOINING : ");
                    scanf("%d",&day);
                        if(day==NULL){
                        system("cls");
                        printf("ENTER VALID INFORMATION");
                        getch();
                        goto date3b;
                    }
                    if(day>31){
                        system("cls");
                        printf("ENTER VALID DATE");
                        getch();
                        system("cls");
                        goto dateab;
                    }
                    else if(day<=0){
                        system("cls");
                        printf("ENTER VALID DATE");
                        getch();
                        system("cls");
                        goto dateab;
                    }
                      printf("ENTER MONTH OF JOINING : ");
                    scanf("%d",&mon);
                     if(mon>12){
        printf("ENTER A VALID MONTH.....");
                getch();
        goto dateab;
    }
    if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12){
        if(day>31){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
                system("cls");
        goto dateab;
        }
    }
    else if(mon==4 || mon==6 || mon==9 || mon==11){
        if(day>30){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
                system("cls");
        goto dateab;
        }
    }
    else if(mon==2){
        if(day>29){
                system("cls");
        printf("PLEASE ENTER VALID DAY AND MONTH...");
                getch();
                system("cls");
        goto dateab;
        }
    }
    else if(mon<=0){
            system("cls");
        printf("PLEASE ENTER VALID MONTH...");
                getch();
                system("cls");
        goto dateab;
    }
                      printf("ENTER YEAR OF JOINING : ");
                    scanf("%d",&ye);
    o=tm.tm_mon+1;
    p=tm.tm_mday+27;
    k=tm.tm_year+2023;
              if(ye>k){
        system("cls");
     printf("%d",k);
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR5....");
        getch();
        system("cls");
        goto dateab;
     }
            if(mon>o && ye==k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR3....");
        getch();
        system("cls");
        goto dateab;
     }
              if(mon>o && ye>k){
        system("cls");
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR3....");
        getch();
        system("cls");
        goto dateab;
     }
          if(day>p && mon==o && ye==k){
        system("cls");
        printf("%d",o);
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR2....");
        getch();
        system("cls");
        goto dateab;
     }
        if(o>ye && p>day && k>ye ){
        system("cls");
        printf("%d",o);
        printf("PLEASE ENTER VALID DAY MONTH AND YEAR12.....");
        getch();
        system("cls");
        goto dateab;
    }
    if(ye>2023){
        system("cls");
        printf("ENTER A VALID YEAR.....");
                getch();
                system("cls");
        goto dateab;
    }
        if(ye<=2000){
        system("cls");
        printf("ENTER A VALID YEAR.....");
                getch();
                system("cls");
        goto dateab;
    }
             printf("ENTER PASSWORD : ");
            scanf(" %s",&qual);
                    printf("======================================================================================\n"); 
                    choose8b : 
                   system("cls");
                    printf("======================================================================================\n"); 
                    printf("NAME : %s\n",name);
                    printf("id : %d\n",d1);
                    printf("SALARY : %d\n",sala);
                     printf("DATE JOINING : %d/%d/%d\n",day,mon,ye);
                    printf("======================================================================================\n");
                    printf("CHOOSE WISELY.....\n");
                    printf("1) GO BACK  2) CONFIRM\n");
                    printf("ENTER YOUR CHOICE : ");
                    scanf(" %d",&choice1);
                    switch (choice1){
                        case 1 : 
                        goto rebackb;
                        break;
                        case 2 : 
                        strupr(name);
                    fp3=fopen("employee.txt","a");
                    fprintf(fp3,"\n");
                    fprintf(fp3,"\nJ.R EMPLOYEE: %s\nEMP ID: %d\nSALARY : %d\nDATE JOINING: %d/%d/%d",name,d1,sala,day,mon,ye);
                    fclose(fp3);
                    fp5=fopen("emp.txt","a");
                    fprintf(fp5,"\n%s %s",name,qual);
                    fclose(fp5);
                    system("cls");
                    printf("Adding Emp.");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp..");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp...");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp...");
                    sleep(1);
                    system("cls");
                    printf("Adding Emp....");
                    sleep(1);
                    system("cls");
                    printf("EMP added to data.....\n");
                    printf("HIT ENTER BUTTON TO VIEW EMP DATA....");
                    getch();
                    goto emp;
                        break;
                        default : 
                        printf("please enter valid option....");
                        printf("hit enter to continue\n");
                        getch();
                        goto choose8b;
                        break;
                    }
                    break;
                    case 4 : 
                    goto custom;
                    break;
                    default : 
                    printf("please enter valid option....");
                        printf("hit enter to continue\n");
                        getch();
                        goto custom1;
                        break;
                }
                break;
                case 3 : 
                goto custom3;
                // to delete the employee table 
                break;
                default : 
                    printf("please enter valid option....");
                        printf("hit enter to continue\n");
                        getch();
                        goto custom;
                        break;
                }
                break;
                case 2 : 
                amovie :
                system("cls");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t| 1) TO VIEW MOVIE DATA                                                              |\n");
                printf("\t\t\t\t\t\t| 2) TO ADD MOVIE                                                                    |\n");
                printf("\t\t\t\t\t\t| 3) GO BACK                                                                         |\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("ENTER YOUR CHOICE : ");
                scanf(" %d",&choice2);
                switch(choice2){
                    case 1 :
                    movdata :
                    system("cls");
                    fp3=fopen("MOVIES.TXT","r");
                    while(fgets(ch1,1000,fp3)){
                        static int u=1;
                        i=1;
                        if(i%1==0){
                         fscanf(fp3,"%s%s%s",f1,f2,f3);
                            if(feof(fp3)){
                                printf("HIT ENTER BUTTON TO CONTINUE.... ");
                                getch();
                                goto admin;
                            }
                            if(ch1==NULL){
                                printf("\n");
                            }
                         printf("%s %s %s\n",f1,f2,f3);
                        }
                        i++;
                        u++;
                    }
                    fclose(fp3);
                    printf("HIT ENTER BUTTON TO CONTINUE.... ");
                    getch();
                    goto admin;
                    break;
                    case 2 :
                    check3 :
                    system("cls");
                    goto addmo1;
                   // case 3 : 
                    //delete movie
                    break;
                    case 3 : 
                    goto custom3;
                    break;
                    default :
                printf("please enter valid option....");
                printf("hit enter to continue\n");
                getch();
                 goto amovie;
                 break;
                }
                break;
                case 3 :
                vadmin : 
                system("cls");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t| 1) TO VIEW ADMIN DATA                                                              |\n");
                printf("\t\t\t\t\t\t| 2) GO BACK                                                                         |\n");
                printf("\t\t\t\t\t\t|                                                                                    |\n");
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("ENTER YOUR CHOICE : ");
                scanf("%d",&choice1);
                switch(choice1){
                    case 1 :
                     system("cls");
                    fp3=fopen("ADMININ.TXT","r");
                    while(fgets(ch1,1000,fp3)){
                        i=0;
                        if(i%1==0){
                         fscanf(fp3,"%s%s",f1,f2);
                         printf("%s %s\n",f1,f2);
                        }
                        i++;
                    }
                    fclose(fp3);
                    printf("HIT ENTER BUTTON TO CONTINUE.... ");
                    getch();
                    goto admin;
                    break;
                    case 2 :
                    goto admin;
                    break;
                    default :
                    printf("please enter valid option....");
                printf("hit enter to continue\n");
                getch();
                goto vadmin;
                break;
                }
                break;
                case 4 :
                fp1=fopen("cos.txt","r");
                while(fgets(ch,888,fp1)){
                    if(i%1==0){
                fscanf(fp1,"%s",ch1);
                printf("%s\n",ch1);
                    }
                } 
                fclose(fp1);
                printf("\nHIT ENTER ENTER TO CONTINUE......");
                getch();
                goto admin;
                break;
                case 5 :
                goto admin;
                break;
                default :
                printf("please enter valid option....");
                printf("hit enter to continue\n");
                getch();
                goto custom3;
                break;
                }
                break;
              case 3 : 
              system("cls");
              printf("\t\t\t\t\t\t======================================================================================\n");
              printf("\t\t\t\t\t\t|                                                                                     |\n");
              printf("\t\t\t\t\t\t| 1) CHANGE ADMIN USERNAME AND PASSWORD                                               |\n");
              printf("\t\t\t\t\t\t| 2) CHANGE EMPLOYEE USERNAME AND PASSWORD                                            |\n");
              printf("\t\t\t\t\t\t| 3) GO BACK                                                                          |\n");
              printf("\t\t\t\t\t\t|                                                                                     |\n");
              printf("\t\t\t\t\t\t======================================================================================\n");
              printf("ENTER YOR CHOICE : ");
              scanf(" %d",&choice1);
              switch(choice1){
                case 1 : 
                again : 
                system("cls");
                printf("======================================================================================\n");
                printf("ENTER ADMIN USER THAT YOU WANT TO CHANGE :");
                scanf(" %s",ch1);
                printf("ENTER ADMIN PASSWORD THAT YOU WANT TO CHANGE :");
                scanf(" %s",f3);
                fp2=fopen("ADMIN.TXT","r");
                fp3=fopen("ADMIN1.TXT","w");
                fprintf(fp3,"\n");
                while(fgets(ch,888,fp2)){
                    fscanf(fp2,"%s%s",f1,f2);
                     if(strcmp(ch1,f1)!=0 && strcmp(f3,f2)!=0){
                fprintf(fp2,"%s %s\n",f1,f2);
                }
                if(strcmp(ch1,f1)==0 && strcmp(f3,f2)==0){
                    system("cls");
                    printf("ENTER CHANGED NAME : ");
                    scanf(" %s",&sal);
                    printf("ENTER CHANGED PASSWORD : ");
                    scanf(" %s",&c);
                    fprintf(fp3,"%s %s\n",sal,c);
                }
                            if(feof(fp2)){
                        goto adout;
                    }
                }
                adout :
                fclose(fp2);
                fclose(fp3);
                fp2=fopen("ADMIN1.TXT","r");
                fp3=fopen("ADMIN.TXT","w");
                fprintf(fp3,"\n");
                int rea=1;
                while(fgets(ch1,888,fp2)){
                    fscanf(fp2,"%s%s",f1,f2);
                    if(rea==4){
                        goto adout2;
                    }
                    rea++;
                    fprintf(fp3,"%s %s\n",f1,f2);
                }
                adout2 :
                fclose(fp2);
                fclose(fp3);
                getch();
              goto login;
              break;
              case 2 :
              rex :
              system("cls");
                printf("======================================================================================\n");
                printf("ENTER EMP USER THAT YOU WANT TO CHANGE : ");
                scanf(" %s",ch1);
                printf("ENTER EMP PASSWORD THAT YOU WANT TO CHANGE : ");
                scanf(" %s",&f1);
              fp3=fopen("emp.txt","r");
              fp2=fopen("emp12.txt","w");
              fprintf(fp2,"\n");
              while(fgets(ch,888,fp3)){
                fscanf(fp3,"%s%s",f3,f2);
                   if(feof(fp3)){
                    goto out;
                }
                if((strcmp(ch1,f3)!=0 && strcmp(f1,f2)!=0)){
                fprintf(fp2,"%s %s\n",f3,f2);
                }
                if(strcmp(ch1,f3)==0 && strcmp(f1,f2)==0){
                 system("cls");
                printf("ENTER CHANGED NAME : ");
                scanf(" %s",f2);
                printf("ENTER CHANGED PASSWORD : ");
                scanf(" %s",c);
                fprintf(fp2,"%s %s\n",f2,c);
                }
              }
              out :
              fclose(fp2);
              fclose(fp3);
               fp3=fopen("emp12.TXT","r");
              fp2=fopen("emp.txt","w");
              fprintf(fp2,"\n");
              while(fgets(ch,888,fp3)){
                fscanf(fp3,"%s%s",f1,f2);
                fprintf(fp2,"%s %s\n",f1,f2);
              } 
            //   fp3 = fopen("emp.txt","w");
            //   fclose(fp3);

            //   fp3 = fopen("emp12.txt","r");
            //   fp2 = fopen("emp.txt","a");
            //   while(fscanf(fp3,"%s %s \n",f1,f2)!= EOF)
            //   {
            //     fprintf(fp2,"%s %s \n",f1,f2);
            //   }
              fclose(fp3);
              fclose(fp2);
              out1 :
              system("cls");
              printf("CHANGED SUCCESSFULLY.....");
              getch();
              goto admin;
              break;
              case 3 : 
              goto admin;
              break;
              default : 
              printf("ENTER A VALID NUMBER ");
              getch();
              goto admin;
                }

              break; 
              case 4 : 
              goto login; 
            }
            break;
            }
            else if (feof(fp1)){
            if(strcmp(fu,username)!=0 || strcmp(fp,pass)!=0){
                 system("cls");
                printf("PLEASE WAIT.");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT..");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT...");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT....");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT......");
                sleep(1);
                system("cls");
             printf("INCORRECT USERNAME OR PASSWORD!!!");
             printf("\nHIT ENTER BUTTON TO RELOGIN : ");
             getch();
             goto login;
                }
            }
        }
        i++;
        continue;
        }
        break;
         case 2 : 
         system("cls");
            printf("ENTER USERNAME : ");
            scanf(" %s",&username);
            printf("ENTER PASSWORD : ");
         i=0;
    while(( ch4='*',ch4=_getch())!=13){
     pass[i]=ch4;
     i++;
    }
    pass[i]='\0';
    printf("%s",pass);
            fp2=fopen("emp.txt","r");
            while(fgets(ch1,1000,fp2)){ 
            if(i%1==0){
            fscanf(fp2,"%s%s",fu,fp);
            if(strcmp(fu,username)==0 && strcmp(fp,pass)==0){ 
                            system("cls");
                printf("PLEASE WAIT.");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT..");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT...");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT....");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT......");
                sleep(1);
                empl :
                system("cls");
                strupr(username);
                printf("\t\t\t\t\t\t%s\n",username);
                printf("\t\t\t\t\t\t======================================================================================\n");
                printf("\t\t\t\t\t\t| 1) NEW MOVIE DISPLAY                                                                |\n");
                printf("\t\t\t\t\t\t| 2) GO BACK                                                                          |\n");
                printf("\t\t\t\t\t\t======================================================================================\n");  
                printf("ENTER YOUR CHOICE : ");
                scanf(" %d",&choice1);
                switch(choice1){
                    break;
                    case 1 :
                    re : 
                    system("cls");
                      fp1=fopen("mo.txt","r");
        int k=1;
    while(fgets(ch,888,fp1)){
        if(k==4){
            goto label3;
        }
        k++;
        if(i%1==0){
    if(i%1==0){
        printf("\n");
    }
    fscanf(fp1,"%s%s%s",a,b,c);
    printf("MOVIE NAME :%s\n",a);
        }//if else if
  i++;
    }
    label3 :
printf("======================================================================================\n"); 
printf("WHICH MOVIE DO YOU WANT TO UPDATE :");
scanf(" %s",&name);
strupr(name);
fp3=fopen("mo.txt","r");
while(fgets(ch,888,fp3)){
    fscanf(fp3,"%s%s%s",f1,f2,f3);
    if(strcmp(name,f1)==0){
        goto replace;
    }
    if(feof(fp3)){
    if(strcmp(name,f1)!=0){
        system("cls");
        printf("ERROR...");
        getch();
        goto re;
    }
    }
}
fclose(fp3);
replace :
system("cls");
printf("MOVIES CHOOSED FOR REPLACED : %s\n",name);
printf("======================================================================================\n"); 
printf("| ENTER MOVIE NAME THAT YOU WANT TO REPLACE                                          |\n");
printf("======================================================================================\n"); 
fp3=fopen("MOVIES.TXT","r");
 while(fgets(ch1,1000,fp3)){
 static int x=1;
 i=1;
 if(i%1==0){
fscanf(fp3,"%s%s%s",f1,f2,f3);
 if(feof(fp3)){
goto label8 ;
                            }
                            if(ch1==NULL){
                                printf("\n");
                            }
                         printf("%s %s %s\n",f1,f2,f3);
                        }
                        i++;
                        x++;
                    }
                    fclose(fp3);
                    label8 : 
         printf("======================================================================================\n");
        printf("ENTER MOVIE : ");
        scanf(" %s",&fu);
        strupr(fu);
        break;
            case 2 : 
            goto login;
        break;
                }
    fclose(fp1);
    fp1=fopen("m2.txt","w");
    fp2=fopen("mo.txt","r");
    fprintf(fp1,"\n");
   int ra=1;
   while(fgets(ch,888,fp2)){
                 if(ra==3){
            goto lck;
        }
        fscanf(fp2,"%s%s%s",f1,f2,f3);
        if(strcmp(name,f1)==0){
        fprintf(fp1,"%s %s %s\n",fu,f2,f3);
        }
         else if (strcmp(name,f1)!=0) {
        fprintf(fp1,"%s %s %s\n",f1,f2,f3);
        }
    }
     lck :
    fclose(fp1);
    fclose(fp2);
    fp1=fopen("mo.txt","w");
    fp2=fopen("m2.txt","r");
    fprintf(fp1,"\n");
    int rb=1;
    while(fgets(ch1,888,fp2)){
             if(rb==3){
            goto lck1;
        }
        fscanf(fp2,"%s%s%s",f1,f2,f3);
        fprintf(fp1,"%s %s %s\n",f1,f2,f3);
    }
    fclose(fp1);
    fclose(fp2);
    lck1 :
                  system("cls");
                printf("ADDING MOVIE.");
                sleep(1);
                system("cls");
                printf("ADDING MOVIE..");
                sleep(1);
                system("cls");
                printf("ADDING MOVIE...");
                sleep(1);
                system("cls");
                printf("ADDING MOVIE....");
                sleep(1);
                system("cls");
                printf("ADDING MOVIE......");
                sleep(1);
                system("cls");
                printf("Movie Added TO DISPLAY...");
                getch();
            fp3=fopen("MOVIES.TXT","r");
     static int mn=1;
      while(ch1,888,fp3){
         fscanf(fp3,"%s%s%s",a,b,c);
         if(mn==3){
            goto label9;
         }
         mn++;
      }
                    fclose(fp3);
                    label9 :
      fp1=fopen("mo.txt","r");
      static  int p=1;
    while(fgets(ch,888,fp1)){
        if(p==4){
            printf("HIT ENTER TO CONTINUE......");
            getch();
            exit(0); 
        }
        p++;
        if(i%1==0){
    if(i%1==0){
        printf("\n");
    }
    fscanf(fp1,"%s%s%s",f1,f2,f3);
    printf("MOVIE :  %s\nDATE : %s\nTIMMING : %s\n",f1,f2,f3);
    j++;
        }//if else if
  i++;
}//while loop
}        
    }
  }
                 if (feof(fp2)){
            if(strcmp(fu,username)!=0 || strcmp(fp,pass)!=0){
                 system("cls");
                printf("PLEASE WAIT.");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT..");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT...");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT....");
                sleep(1);
                system("cls");
                printf("PLEASE WAIT......");
                sleep(1);
                system("cls");
             printf("INCORRECT USERNAME OR PASSWORD!!!");
             printf("\nHIT ENTER BUTTON TO RELOGIN : ");
             getch();
             goto login;
                }
            }
fclose(fp1);
goto login;
    break; 
    case 3 :
    main();
    }
            }