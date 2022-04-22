//Jonathan Rufus Samuel (20BCT0332)
/*DA-5: q9 - Create an enumerated datatype for 12 months and display the values in the integer */

#include <stdio.h>

#include <stdio.h>
int main()
{
    enum month
    {
        Jan, Feb, Mar, Apr, May, June, July, Aug, Sep, Oct, Nov, Dec
    };
    printf("Jan = %d", Jan);
    printf("\n Feb = %d", Feb);
    printf("\n Mar = %d", Mar);
    printf("\n Apr = %d", Apr);
    printf("\n May = %d", May);
    printf("\n June = %d", June);
    printf("\n July = %d", July);
    printf("\n Aug = %d", Aug);
    printf("\n Sep = %d", Sep);
    printf("\n Oct = %d", Oct);
    printf("\n Nov = %d", Nov);
    printf("\n Dec = %d", Dec);
    return 0;
}