#include <stdlib.h>
#include <stdio.h>




int main()
{



    enum size{
        sm = 1,
        med = 2,
        lg = 3,
        xlg = 4,
    };

    enum size shoeSize1 = sm;
    enum size shoeSize2 = med;
    enum size shoeSize3 = lg;
    enum size shoeSize4 = xlg;
    enum size shoeSize5 = shoeSize4 + shoeSize1;

    printf("%d\n",shoeSize1);
    printf("%d\n",shoeSize2);
    printf("%d\n",shoeSize3);
    printf("%d\n",shoeSize4);
    printf("%d\n",shoeSize5);

    return 0;
}