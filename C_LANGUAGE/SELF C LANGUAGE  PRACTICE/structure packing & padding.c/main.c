#include <stdio.h>
#include <stdlib.h>
//#pragma pack(1)

struct abc
{
    int a;
    char c;
    double b;

}s;
int main()
{
    printf("%d",sizeof(s));

    return 0;
}
