#include <stdio.h>
#include <stdlib.h>
int pass, failed;
int main(void)
{
    float sum = 0;
    double class1[10] = {85, 88, 77, 50, 49, 66, 75.5, 44, 90, 95};
    double class2[10] = {90, 80, 70, 60, 55, 40, 88, 99, 49, 87};
    double class3[10] = {44, 88, 90, 60, 22, 33, 77, 55, 88, 70};
    int max1 = class1[0];
    int max2 = class2[0];
    int max3 = class3[0];
    int min1 = class1[0];
    int min2 = class2[0];
    int min3 = class3[0];

    for (int i = 0; i < 10; i++)
    {

        if (class1[i] <= 100 && class1[i] >= 50)
        {
            pass++;
        }
        if (class2[i] <= 100 && class2[i] >= 50)
        {
            pass++;
        }
        if (class3[i] <= 100 && class3[i] >= 50)
        {
            pass++;
        }
        if (class1[i] < 50)
        {
            failed++;
        }
        if (class2[i] < 50)
        {
            failed++;
        }
        if (class3[i] < 50)
        {
            failed++;
        }
    }
    for (int i = 1; i < 10; i++)
    {
        if (class1[i] > max1)
        {
            max1 = class1[i];
        }
        if (class1[i] < min1)
        {
            min1 = class1[i];
        }
        if (class2[i] > max2)
        {
            max2 = class2[i];
        }
        if (class2[i] < min2)
        {
            min2 = class2[i];
        }
        if (class3[i] > max3)
        {
            max3 = class3[i];
        }
        if (class3[i] < min3)
        {
            min3 = class3[i];
        }
    }

    printf("number of studet pass %d\n", pass);
    printf("number of studet failed %d\n", failed);
    printf("the hights grade in class [1] %d\n", max1);
    printf("Lowest grade in class [1] %d\n", min1);
    printf("the hights grade in class [2] %d\n", max2);
    printf("Lowest grade in class [2] %d\n", min2);
    printf("the hights grade in class [3] %d\n", max3);
    printf("Lowest grade in class 3 %d\n", min3);

    for (int i = 0; i < 10; i++)
    {

        sum += class1[i] + class2[i] + class3[i];
    }
        printf("Average grade %f \n", (sum / 30));

}
