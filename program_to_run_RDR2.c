#include <stdio.h>
#include <stdlib.h>

int main() {

    const char *gamePath = "E:\\SteamLibrary\\steamapps\\common\\Red Dead Redemption 2\\RDR2.exe"; // Include .lnk extension

    char command[256]; // Buffer to hold the command
    snprintf(command, sizeof(command), "start \"\" \"%s\"", gamePath); // Format the command

    // Execute the command
    int result = system(command);

    // Check if the command was successful
    if (result == 0) {
        printf("Red Dead Redemption 2 is launching...\n");
    } else {
        printf("Failed to launch the game. Please check the path.\n");
    }

    return 0;
}
