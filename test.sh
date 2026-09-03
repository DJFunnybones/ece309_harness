#!/bin/bash

# 1. Compile the C program (assuming your source code is in main.c)
gcc main.c -o program

# Check if compilation succeeded
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

# 2. Define the inputs to feed into the program (ending with 'exit')
INPUTS="Howdy\nhello world\nexit\n"

# 3. Define the exact text expected in the output
EXPECTED_OUTPUT="Enter text (type 'exit' to quit): You typed: Howdy
Enter text (type 'exit' to quit): Hello there! It is great to chat with you.
Enter text (type 'exit' to quit): Goodbye!"

# 4. Pipe the inputs into the compiled program and capture the actual output
ACTUAL_OUTPUT=$(echo -e "$INPUTS" | ./program)

# 5. Compare actual vs expected output
if [ "$ACTUAL_OUTPUT" == "$EXPECTED_OUTPUT" ]; then
    echo -e "\n[PASS] Output matches expected results deterministically!"
else
    echo -e "\n[FAIL] Output did not match."
    echo "--- Expected ---"
    echo "$EXPECTED_OUTPUT"
    echo "--- Actual ---"
    echo "$ACTUAL_OUTPUT"
fi