#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
    char buffer[1024];
    int index = 0;
    printf("Simple Notepad Mode (ESC to quit):\n");

    while (1) {
        int ch = _getch();

        // Arrow keys and special keys come in pairs
        if (ch == 0 || ch == 224) {
            int special = _getch(); // get the actual key code
            switch (special) {
                case 75: // Left arrow
                    if (index > 0) {
                        printf("\b");  // move cursor back
                        index--;
                    }
                    break;
                case 77: // Right arrow
                    if (buffer[index] != '\0') {
                        putchar(buffer[index]);
                        index++;
                    }
                    break;
                case 72: // Up arrow
                case 80: // Down arrow
                    // Optional: move in history or lines
                    break;
                default:
                    break;
            }
        } else if (ch == 27) { // ESC to quit
            break;
        } else if (ch == 8) { // Backspace
            if (index > 0) {
                index--;
                buffer[index] = '\0';
                printf("\b \b"); // erase character from console
            }
        } else if (ch >= 32 && ch <= 126) { // Printable ASCII
            buffer[index++] = ch;
            putchar(ch);
        }
    }

    buffer[index] = '\0';
    printf("\nFinal buffer: \"%s\"\n", buffer);

    return 0;
}
