//Задание 1.
// Написать функцию, которая удаляет из строки
//символ с заданным номером.

#include <iostream>
using namespace std;

void del_sym(char line[], int& a, int& size);
template <typename T>
T enter(T& a, int& size);

void del_sym(char line[], int& a, int& size) {
    enter(a, size);
    for (int j = 0; j < a; j++) {
        cout << line[j];
    }
    for (int j = a + 1; j < size; j++) {
        cout << line[j];
    }
    cout << endl;
}
void del_sym_input(char line[], char& a, int& size) {
    enter(a, size);
    char* p_a = &a;
    if (strstr(line, p_a)) {

    }
}
template <typename T>
T enter(T& a, int& size) {
    do {
        cout << "Ввод: ";
        cin >> a;
    } while (a < 0 && a > size);
    return a;
}

void interface() {//доделать
    cout << "Выбирите задачу";
}

int main()
{
    system("chcp 1251>nul");
    char line1[] = "Строковая константа — это последовательность из";
    char line2[] = "нуля или более символов, заключенных в кавычки.";
    char line3[] = "Кавычки не являются частью строковой константы,";
    char line4[] = "а служат только для ее ограничения.";
    char* arr_line[] = {
        line1, line2, line3, line4
    };
    int size,
        a;
    char s;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". ст-а| " << arr_line[i];
        size = strlen(arr_line[i]);
        cout << " (" << size << " сим.)" << endl;
    }
    cout << endl;

    //cout << "Удаление символа по номеру: " << endl;
    //del_sym(line1, a, size);
    cout << "Удаление символа по значению: " << endl;
    del_sym_input(line1, s, size);
}