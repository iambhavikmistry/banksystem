#include<stdio.h>
main()
{

    int i,j,k,l,co,n;
    float balance=0,add,wid,temp;
    char us[6],ps[6],yn;
login:
    printf("Enter Username : \n");
    fflush(stdin);
    scanf("%[^\n]",us);
    printf("Enter Password : \n");
    fflush(stdin);
    scanf("%[^\n]",ps);
//    printf("%s",us);
//    printf("%s",ps);
    for(l=0; l<5; l++)
    {

        switch(l)
        {
        case 0:
            if(us[0] != 'a' || ps[0] != 'a')
            {

                goto login;
            }
            break;
        case 1:
            if(us[1] != 'd' || ps[1] != 'd')
            {

                goto login;
            }
            break;
        case 2:
            if(us[2] != 'm' || ps[2] != 'm')
            {

                goto login;
            }
            break;
        case 3:
            if(us[3] != 'i' || ps[3] != 'i')
            {

                goto login;
            }
            break;
        case 4:
            if(us[4] != 'n' || ps[4] != 'n')
            {

                goto login;
            }
            break;

        default:
            printf("Invalid");
            break;
        }
    }
options:
    printf("\n\n\n\t\t\tWelcome to Kangal Bank\n\n\n");
    printf("\t\tSelect Options\n\n");
    printf("\t\t1.Deposit\n");
    printf("\t\t2.Withdraw\n");
    printf("\t\t3.Check available balance\n");
    printf("\t\t4.LogOut\n\n\n");

    printf("Choose Option : ");
    scanf("%d",&co);

    switch(co)
    {
    case 1:
        printf("\t\t\nHow much amount do you want to DEPOSIT : ");
        scanf("%f",&add);
        balance+=add;
        printf("\t\t\nAvailable Balance is %f",balance);
        goto options;
        break;

    case 2:
        printf("\t\t\nHow much amount do you want to WITHDRAW : ");
        scanf("%f",&wid);
        if(wid>balance)
        {
            printf("\n\t\tYou don't have enough money\n\t\tPlease choose correct option");
            goto options;
        }

        balance-=wid;
        printf("\t\t\nAvailable Balance is %f",balance);
        goto options;
        break;
    case 3:
        printf("\t\t\n\nAvailable Balance is %f",balance);
        goto options;
        break;
    case 4:
        printf("\n\t\tyou are logged out\n\n\ndo you want to login again? yes or no :");
        fflush(stdin);
        scanf("%c",&yn);
        if(yn=='y'||yn=='Y')
        {
            goto login;
        }
        else
        {
            printf("\t\tBYE SEE YOU SOON");
        }
    }

}
