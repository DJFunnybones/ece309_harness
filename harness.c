#include <stdio.h>   // Included for standard input/output functions like fgets() and printf()
#include <string.h>  // Included for string manipulation functions like strcmp() and strstr()

int main() {
    // Declare a character array (string buffer) to store up to 255 characters of user input
    char input[256];

    // Start an infinite while loop that will run continuously until explicitly broken
    while (1) {
        // Display a prompt to the user to let them know the program is waiting for input
        printf("Enter text (type 'exit' to quit): ");

        // Read up to 255 characters from standard input (keyboard) into the input buffer
        if (fgets(input, sizeof(input), stdin) == NULL) {
            // If reading input fails or encounters end-of-file, break the loop
            break;
        }

        // Remove the trailing newline character standardly added by fgets() when Enter is pressed
        input[strcspn(input, "\n")] = '\0';

        // Check if the user entered the word "exit"
        if (strcmp(input, "exit") == 0) {
            // Break out of the infinite loop to end the program
            break;
        }
        // Check if the input contains the substring "hello" anywhere in the sentence
        else if (strstr(input, "hello") != NULL) {
            // Print a hardcoded greeting response
            printf("Hello there! It is great to chat with you.\n");
        }
        // If the input is neither "exit" nor contains "hello"
        else {
            // Echo the user's exact input back to them
            printf("You typed: %s\n", input);
        }
    }

    // Print a friendly exit message before exiting the program
    printf("Goodbye!\n");

    // Return 0 to indicate that the program finished successfully
    return 0;
}