# include <stdio.h>
void main() {
    int x, y, z, max;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x>y){
        max = (x>z)?x:z;
    } else {
        max = (y>z)?y:z;
    }
    printf("Max of 3 is %d\n", max);
}