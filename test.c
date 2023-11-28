#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    char operator;

    
    printf("숫자를 입력하세요: ");
    scanf("%lf", &num1);

    printf("연산자를 입력하세요 (+, -, *, /, log, cos, sin, tan): ");
    scanf(" %c", &operator);

    if (operator != 'log' && operator != 'cos' && operator != 'sin' && operator != 'tan') {
        printf("숫자를 하나 더 입력하세요: ");
        scanf("%lf", &num2);
    }

    
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("0으로는 나눌 수 없습니다.\n");
                return 1; 
            }
            break;
        case 'log':
            result = log10(num1);
            break;
        case 'cos':
            result = cos(num1);
            break;
        case 'sin':
            result = sin(num1);
            break;
        case 'tan':
            result = tan(num1);
            break;
        default:
            printf("제대로 입력하세요.\n");
            return 1; 
    }

    if (operator == 'log' || operator == 'cos' || operator == 'sin' || operator == 'tan') {
        printf("계산 결과: %.2lf\n", result);
    } else {
        printf("계산 결과: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
    }

    return 0;
}
