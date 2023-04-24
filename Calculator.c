#include <stdio.h>
int firstNumber, secondNumber;

int main(){
    int result;
    char operand;

    while (1) {
        printf("Enter Number operand Number and click enter: ");
        scanf("%d %c %d", &firstNumber, &operand, &secondNumber);

        switch (operand) {
            case '+':
                result = addition();
                break;
            case '-':
                result = subtraction();
                break;
            case '*':
                result = multiplication();
                break;
            case '/':
                result = division();
                break;
            case '%':
                result = remain();
                break;
            default:
                printf("Error: Invalid operator\n");
                continue;
        }

        printf("%d %c %d = %d\n", firstNumber, operand, secondNumber, result);
    }

    return 0;
}

int addition(){
    return firstNumber + secondNumber;
}

int subtraction(){
    return firstNumber - secondNumber;
}

int multiplication(){
    return firstNumber * secondNumber;
}

int division(){
    return firstNumber / secondNumber;
}

int remain(){
    return firstNumber % secondNumber;
}


