#include <conio.h>

int main()
{
    char ch;

    if (kbhit()) {

        // Stores the pressed key in ch
        ch = getch();
        printf("%c was pressed.\n", ch);

        //do something..

    }
    return 0;
}