#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Weekday {Monday,Tuesday,Wensday,Thursday,Friday,Saturday,Sunday};
    enum Weekday today = Monday;

    switch(today)
    {
    case Sunday:
        printf("Today is sunday.");
        break;
    case Monday:
        printf("Today is monday.");
        break;
    case Tuesday:
        printf("Today is tuesday. ");
        break;
    case Wensday:
        printf("Today is wensday. ");
        break;
    case Thursday:
        printf("Today is thursday. ");
        break;
    case Friday:
        printf("Today is friday. ");
        break;
    default:
        printf("whatever");
    }

    return 0;
}
