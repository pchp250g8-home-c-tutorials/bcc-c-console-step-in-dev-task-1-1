#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include <locale.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    unsigned int n; // number of blocks is inputed
    unsigned int k; // number of blocks for 1 tower
    unsigned int t; // Maximum number of towers
    unsigned int b; // Number of blocks is calculated
    printf("Enter the number of blocks: ");
    scanf("%d", &n); // assign the variable n via input from keyboard
    printf("Enter the number of blocks for 1 tower: ");
    scanf("%d", &k); // assign the variable k via input from keyboard
    t = n / k; // Maximum number of towers
    b = t * k; // Number of blocks is calculated
    printf("From %d blocks, you can build a maximum of %d towers\r\n", n, t);
    printf("This will take %d blocks.\r\n", b);
    /*Delay output until key "Enter" is not pressed*/
    getchar(); // Clearing the input buffer
    getc(stdin); // Reading a character from the keyboard
    return 0;   // Exiting the program (function).
}
