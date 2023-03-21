#include <stdio.h>

int buscar(const char* str, char query) {
    const char* temp = str;
    while (*temp != 0 && *temp != query)
        temp++;
    return *temp == 0 ? -1 : temp - str;
}

int main() {
    const char* str = "Janaina";
    int query = 'n';
    int posicao = buscar(str, query);
    printf("%d\n", posicao);
}
