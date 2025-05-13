#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s", argv[1]);
        return 0;
    }
        
    else
    {
        printf("Missing command line!");
        return 1;
    }
}