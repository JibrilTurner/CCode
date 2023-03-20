//
// // https://stackoverflow.com/questions/69001745/error-excess-elements-in-char-array-initializer
//
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char * arr[] =
            {
                    "break", "case", "continue", "default", "else", "defer", "for"
            };
    const size_t N = sizeof( arr ) / sizeof( *arr );

    char word[10] = "";

    scanf( "%9s", word );

    size_t i = 0;

    while ( i < N && strcmp( word, arr[i] ) != 0 ) i++;

    if ( i != N )
    {
        printf( "Keyword Found at Position %zu\n", i );
    }
    else
    {
        puts( "Keyword Not Found" );
    }

    return 0;
}