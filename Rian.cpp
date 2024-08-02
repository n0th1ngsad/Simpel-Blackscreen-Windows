#include <iostream>
#include <cstdlib>
#include <Windows.h>

int main() {
    system("taskkill /f /im explorer.exe"); // End task explorer.exe
    return 0;
}
