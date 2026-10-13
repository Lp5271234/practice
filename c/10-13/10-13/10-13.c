#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int age = 0;
    int is_student = 0;

    printf("请输入年龄和学生身份（1是学生，0不是）：");
    scanf("%d%d", &age, &is_student);

    int valid =age >= 0 &&age <= 120 &&(is_student == 0 || is_student == 1);

    if (!valid)
    {
        printf("输入无效\n");
    }
    else
    {
        int can_discount =age < 18 ||(is_student == 1 && age <= 25);

        printf("%s\n", can_discount ? "可以购买优惠票" : "只能购买普通票");
    }

    return 0;
}