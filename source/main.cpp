#include <nds.h>
#include <stdio.h>

int main() {
    consoleDemoInit();

    iprintf("\n\n");
    iprintf("  Made by jpypro151\n");
    iprintf("  First Homebrew\n");

    while(1) {
        // Scan keyboard/touchpad inputs
        scanKeys();
        
        // Read if the START button was pressed
        int pressed = keysDown();
        if (pressed & KEY_START) {
            break; // Exit loop if START is pressed
        }
        swiWaitForVBlank();
    }

    return 0;
}

