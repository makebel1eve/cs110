#include <stdio.h>
#include<math.h>
typedef struct {
    int shapeType;
    union {
        float radius;
        struct {
            float length;
            float width;
        };
        struct {
            float base;
            float height;
        };
    } dimensions;
} Shape;

int main() {
    Shape s;
    scanf("%d", &s.shapeType);
    if (s.shapeType == 1) {
        scanf("%f", &s.dimensions.radius);
        if (s.dimensions.radius <= 0) {
            printf("-999");
            return 0;
        }
        printf("%.2f", M_PI * s.dimensions.radius * s.dimensions.radius);
    } else if (s.shapeType == 2) {
        scanf("%f %f", &s.dimensions.length, &s.dimensions.width);
        if (s.dimensions.length <= 0 || s.dimensions.width <= 0) {
            printf("-999");
            return 0;
        }
        printf("%.2f", s.dimensions.length * s.dimensions.width);
    } else if (s.shapeType == 3) {
        scanf("%f %f", &s.dimensions.base, &s.dimensions.height);
        if (s.dimensions.base <= 0 || s.dimensions.height <= 0) {
            printf("-999");
            return 0;
        }
        printf("%.2f", 0.5 * s.dimensions.base * s.dimensions.height);
    } else {
        printf("-999");
    }
    return 0;
}
