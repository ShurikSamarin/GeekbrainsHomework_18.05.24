// На стандартном потоке ввода задается целое неотрицательное число N и последовательность допустимых символов в кодировке ASCII, оканчивающаяся точкой. Допустимые символы – латинские буквы 'a' ... 'z', 'A' ... 'Z' и пробел. Требуется закодировать латинские буквы ('a' ... 'z', 'A' ... 'Z') шифром Цезаря, пробелы вывести без изменения. Число N задает сдвиг в шифре. Шифр Цезаря заключается в следующем преобразовании. Пусть буквы алфавита пронумерованы от 0 до K - 1, где K - число символов в алфавите. Тогда символ с номером n кодируется символом с номером p = (n + N) mod K (mod - операция взятия остатка). На стандартном потоке вывода напечатать зашифрованное сообщение, оканчивающееся точкой. Преобразование требуется выполнять независимо для заглавных и строчных латинских букв.
// Указание: использовать массивы запрещается.
// Данные на входе: Натуральное число N (N > 0), после которого следует
// сообщение.
// Данные на выходе: Зашифрованное сообщение.

#include <stdio.h>
int main() {
    int N;
    char c;
    scanf("%d", &N); 
    while ((c = getchar()) != '.') { // Считываем символы до точки
        if (c >= 'a' && c <= 'z') { // Если символ - маленькая буква
            putchar('a' + (c - 'a' + N) % 26); // Шифруем маленькую букву
        } else if (c >= 'A' && c <= 'Z') { // Если символ - заглавная буква
            putchar('A' + (c - 'A' + N) % 26); // Шифруем заглавную букву
        } else {
            putchar(c); // Выводим пробелы без изменения
        }
    }
    putchar('.'); 
    return 0;
}