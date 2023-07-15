/*
//Type 1 Return String and Modify--->>>
#include<stdio.h>

char* display();

int main()
{
    char *str;
    str=display();

    //str[1]='a';   //We cannot Modify String in this method......

    printf("%s",str);

    return 0;
}

char* display()
{
    return "Nisarg";
}*/

//***************************************************************************************************//

/*
//Type 2 Return String and Modify--->>>
#include<stdio.h>

char* display();

int main()
{
    char *str;
    str=display();

    printf("%s",str);

    return 0;
}

char* display()
{
    char str[]="Nisarg"; //In this type of return type, program will cresh....
    return str;
}*/

//***************************************************************************************************//

/*
//Type 3 Return String and Modify--->>>
#include<stdio.h>

char* display();

int main()
{
    char *str;
    str=display();

    //str[1]='a';     //We cannot Modify String in this method......

    printf("%s",str);

    return 0;
}

char* display()
{
    char *str="Nisarg";
    return str;
}*/

//***************************************************************************************************//

/*
//Type 4 Return String and Modify--->>>
#include<stdio.h>

 const char* display();

int main()
{
    const char *str;
    str=display();

    //str[1]='a';     //We cannot Modify String in this method......

    printf("%s",str);

    return 0;
}

const char* display()
{
    const char *str="Nisarg";
    return str;
}*/

//***************************************************************************************************//

/*
//Type 5 Return String and Modify--->>>
#include<stdio.h>

char* display();

int main()
{
     char *str;
    str=display();

    str[1]='a';     //We cannot Modify String in this method......

    printf("%s",str);

    return 0;
}

 char* display()
{
    static char *str="Nisarg";
    return str;
}*/

//***************************************************************************************************/


//Type 6 Return String and Modify--->>>  This this Best Way....
#include<stdio.h>

char* display();

int main()
{
     char *str;
    str=display();

    printf("%s",str);

    str[1]='a';

    printf("\nModify String is %s",str);

    return 0;
}

 char* display()
{
    static char str[]="Nisarg";
    return str;
}
