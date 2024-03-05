//M - Month Code
//L - Leap Year Code
//Y - Year Code
//D - Date
//C - Century Code
#include<stdio.h>
int main(){
    int  y,M,C,D,L,Y,m,yr;
    printf("Enter the date: ");
    scanf("%d",&D);
    printf("Enter the month: ");
    scanf("%d",&m);
    printf("Enter the year(Year should be in between 1699 and 2400): ");
    scanf("%d",&yr);
    
    if((m==2&&D>29)||D>31||D<1||yr<1700||yr>=2400){
        printf("Please Enter a valid date");
        return 0;
    }

    if (yr>=1700 && yr<1800)
        C=4;
    if (yr>=1800 && yr<1900)
        C=2;
    if (yr>=1900 && yr<2000)
        C=0;
    if (yr>=2000 && yr<2100)
        C=6;
    if (yr>=2100 && yr<2200)
        C=4;
    if (yr>=2200 && yr<2300)
        C=2;
    if (yr>=2300 && yr<2400)
        C=0;
    
    y = yr % 100;
    Y=y+(y/4)%7;
    
    switch(m){
        case 1:
            M=0;
            break;
        case 2:
            M=3;
            break;
        case 3:
            M=3;
            break;
        case 4:
            M=6;
            break;
        case 5: 
            M=1;
            break;
        case 6:
            M=4;
            break;
        case 7:
            M=6;
            break;
        case 8:
            M=2;
            break;
        case 9:
            M=5;
            break;
        case 10:
            M=0;
            break;
        case 11:
            M=3;
            break;
        case 12:
            M=5;
            break;
    }

    if ((yr % 100 ==0 && yr % 400==0) && (m==1||m==2))
        L=1;
    if ((yr%4==0 && yr%100 !=0) && (m==1||m==2))
        L=1;
    if (yr%4 !=0 || (yr % 100 ==0 && yr % 400 !=0))
        L=0;

    switch((Y+M+C+D-L)%7){
        case 0:
        printf("\nIt's Sunday");
        break;
        case 1:
        printf("\nIt's Monday");
        break;
        case 2:
        printf("\nIt's Tuesday");
        break;
        case 3:
        printf("\nIt's Wednesday");
        break;
        case 4:
        printf("\nIt's Thursday");
        break;
        case 5:
        printf("\nIt's Friday");
        break;
        case 6:
        printf("\nIt's Saturday");
        break;
    }

    return 0;



}