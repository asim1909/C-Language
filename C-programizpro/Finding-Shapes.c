#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("point");
        break;
    case 2:
        printf("line");
        break;
    case 3:
        printf("triangle");
        break;
    case 4:
        printf("rectangle");
        break;
    case 5:
        printf("pentagon");
        break;
    case 6:
        printf("hexagon");
        break;
    case 7:
        printf("heptagon");
        break;
    case 8:
        printf("hectagon");
        break; 
    default:
        printf("INvalid input");
    }
    return 0;
}
