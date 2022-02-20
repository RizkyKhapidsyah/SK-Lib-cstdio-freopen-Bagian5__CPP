#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::printf("stdout is printed to console\n");
    if (std::freopen("redir.txt", "w", stdout)) {
        std::printf("stdout is redirected to a file\n"); // this is written to redir.txt
        std::fclose(stdout);
    }

    _getch();
    return 0;
}