#include <nds.h>
#include <stdio.h>

int main() {
    // Set up the video mode for the main screen (Text mode on Background 0)
    consoleDemoInit();

    // Print a simple message to the DS top screen
    iprintf("\n\n");
    iprintf("  Made by jpypro151\n");
    iprintf("  First Homebrew\n");

    // Keep the program running and loop forever
    while(1) {
        // Scan keyboard/touchpad inputs
        scanKeys();
        
        // Read if the START button was pressed
        int pressed = keysDown();
        if (pressed & KEY_START) {
            break; // Exit loop if START is pressed
        }

        // Wait for the next vertical blank period to save battery/CPU
        swiWaitForVBlank();
    }

    return 0;
}

