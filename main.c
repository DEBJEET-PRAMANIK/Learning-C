#include <stdio.h>
int main()
{
    int input;
    double first = 0;
    double second;
    double kmtomiles=0.629;
    double cmtomiles=0.083;
      printf("enter the unit to be converted ");

        scanf("%d",&input);
        switch(input)
        {
          case 1:
            second=first*kmtomiles;
            printf("%f km to miles %f\n ",first,second);
            break;
            case 2:
            second=first*cmtomiles;
            
            printf("%f cm to miles %f\n",first ,second);
            break;
            default:
            printf("You didn't enter a proper input\n");
            break;
        }

        return 0;
     }


