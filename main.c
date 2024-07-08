#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int n;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Число має бути більше 1 і менше 150.\n");
        return 1;
    }

    int count = 0;

    for (int m = 1; m <= n; m++) {

        if (n % m == n / m) {
            count++;
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}
