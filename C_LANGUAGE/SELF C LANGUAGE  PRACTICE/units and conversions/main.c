#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float kms,miles,inch,foot,cms,pound,kg,meter;

    //abc:

    printf("Enter the following Number for performing unit Conversion\n 1 for kms to Miles\n 2 for inch to foot\n 3 for cms to inches\n 4 for pounds to kg\n 5 for inches to meters\n 6 for Quit\n ");
    scanf("%d",&n);

    switch(n)
    {

        case '1':
            printf("Enter Distance in kms : ");
            scanf("%f",&kms);
            miles=1.61*kms;
            printf("%f kms to Miles is %f\n",kms,miles);
            //goto abc;
            break;

        case '2':
            printf("Enter Length in Inch : ");
            scanf("%f",&inch);
            foot=12*inch;
            printf("%f inch to foot is %f\n",inch,foot);
            //goto abc;
            break;

        case '3':
            printf("Enter Length in Cms : ");
            scanf("%f",&cms);
            inch=2.54*cms;
            printf("%f cms to inch is %f\n",cms,inch);
           // goto abc;
            break;

        case '4':
            printf("Enter Weight in Pound : ");
            scanf("%f",&pound);
            kg=2.204*pound;
            printf("%f pound to kg is %f",pound,kg);
            //goto abc;
            break;

        case '5':
            printf("Enter Length in Inch : ");
            scanf("%f",&inch);
            meter=39.37*inch;
            printf("%f inch to meter is %f\n",inch,meter);
           // goto abc;
            break;

        case '6':
            printf("You have Quit the program\n");
    }




    return 0;
}
