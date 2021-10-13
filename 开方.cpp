//求一元二次方程的根
    // 例如 ：y = x2 + 10x + 17
    // 当 x = 2, 求 y = 41
    // 当 y = 2, 求 x = ? 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
    float mysqrt(float n) 
    {
        float x = n / 2, d = 0.0000001;
            while (x * x-n > d||x * x-n < -d)
                { if (x * x > n)
                   x = x / 2;
                else
                  x = (x + n) / 2;
                }
        return 0.0f;
    }
    int main() {
        float x1, x2;
        float y, a, b, c, temp;
        printf("Please input \n");
        scanf("%f %f %f %f", &y, &a, &b, &c);
        c = c - y;
        temp = b * b - 4 * a * c;
        if (temp >= 0) {
            temp = mysqrt(temp);
            a = 2 * a;
            x1 = (-b + temp) / (a);
            x2 = (-b - temp) / (a);
            printf("Results \n");
            printf("%f\n", x1);
            printf("%f\n", x2);
        }
        else
            printf("No Results \n");
        return 0;
    }


