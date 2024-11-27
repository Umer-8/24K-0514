#include <stdio.h>
#include <math.h>
struct Point {
    float x;
    float y;
}p1,p2,bottomLeft,topRight,checkPoint;
float distance(struct Point p1, struct Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}
int isPointInsideRectangle(struct Point checkPoint, struct Point bottomLeft, struct Point topRight)
{
    return (checkPoint.x >= bottomLeft.x && checkPoint.x <= topRight.x && checkPoint.y >= bottomLeft.y && checkPoint.y <= topRight.y);
}
int main()
{
    

    printf("Enter coordinates for Point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates for Point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    float dist = distance(p1, p2);
    

    printf("The distance between Point 1 and Point 2 is: %.2f\n", dist);
    printf("Enter coordinates for the bottom-left corner of the rectangle (x y): ");
    scanf("%f %f", &bottomLeft.x, &bottomLeft.y);

    printf("Enter coordinates for the top-right corner of the rectangle (x y): ");
    scanf("%f %f", &topRight.x, &topRight.y);
 
    printf("Enter coordinates of the point to check if it's inside the rectangle (x y): ");
    scanf("%f %f", &checkPoint.x, &checkPoint.y);

    if (isPointInsideRectangle(checkPoint, bottomLeft, topRight)) {
        printf("The point is inside the rectangle.\n");
    } else {
        printf("The point is outside the rectangle.\n");
    }
    return 0;
}


























































