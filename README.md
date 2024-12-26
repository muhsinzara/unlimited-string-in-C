# unlimited-string-in-C

This repository contains a C program that demonstrates how to dynamically handle string input from the user without predefined length limitations. It is implemented using dynamic memory allocation to ensure scalability.

## Project Structure

### Files:
1. **example.c**:
   - Example usage of the `getUS` function.
   - Demonstrates how to use `getUS` (defined in `usic.c`) to read and display user input.

2. **usic.c**:
   - Implements the `getUS` function for reading user input dynamically.
   - Uses `malloc` and `realloc` to handle memory dynamically as input length increases.

---

## How It Works

### `getUS` Function:
- Starts with a small memory allocation (2 bytes) for the input buffer.
- Reads input character by character using `getchar()`.
- Dynamically reallocates memory (doubling the size) whenever the buffer reaches its capacity.
- Returns a null-terminated string containing the user input.

### Example Flow:
1. User is prompted to enter a string.
2. The program reads the input dynamically without a predefined limit.
3. The entered string is displayed back to the user.
4. Allocated memory is freed to prevent memory leaks.

---

## Compilation and Execution

To compile and run the program:

```bash
gcc example.c -o dynamic_input
./dynamic_input
```

Ensure both `example.c` and `usic.c` are in the same directory when compiling.

---

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/muhsinzara/unlimited-string-in-C.git
   cd unlimited-string-in-C
   ```
2. Compile the program using `gcc`:
   ```bash
   gcc example.c -o dynamic_input
   ```
3. Make sure to include the following headers in your code to use `getUS`:
   ```c
   #include <stdio.h>
   #include <stdlib.h>
   ```
4. Run the compiled program:
   ```bash
   ./dynamic_input
   ```
5. Enter a string when prompted and see the program handle it dynamically.

---

## Example Output

```text
Enter a string: Hello, GitHub!
You entered: Hello, GitHub!
```

---

## Key Features
- Dynamic memory allocation using `malloc` and `realloc`.
- Handles input of any length efficiently.
- Proper memory management to avoid leaks.

---

## Contributions
This project was developed by **Mohsen Zare**. Contributions are welcome! Feel free to fork the repository, open issues, and submit pull requests for improvements or feature additions.

---

## License
This project is licensed under the MIT License. See the LICENSE file for details.
