# 0x19. C - Stacks, Queues - LIFO, FIFO
**Project Description: Monty ByteCode Interpreter**

**Introduction:**
The Monty ByteCode Interpreter project aims to provide a reliable and efficient tool for interpreting Monty byte code files, handling errors gracefully, and adhering to memory management constraints. The interpreter reads, processes, and executes Monty byte codes, making Monty scripting language programs accessible for users.

**Monty Byte Code Files:**
- Monty byte code files have a .m extension and contain instructions.
- Each file should have one instruction per line.
- Instructions may have any number of spaces before or after the opcode and its argument.
- Blank lines are allowed, and additional text after the opcode or its argument is ignored.

**Command Line Usage:**
The interpreter is used by running the command:
```
monty file
```
where `file` is the path to the Monty byte code file.

**Error Handling:**
1. If no file or more than one argument is provided, the program should print:
   ```
   USAGE: monty file
   ```
   and exit with the status EXIT_FAILURE.

2. If the file cannot be opened, the program should print:
   ```
   Error: Can't open file <file>
   ```
   where `<file>` is the name of the file, and exit with the status EXIT_FAILURE.

3. If an invalid instruction is encountered, the program should print:
   ```
   L<line_number>: unknown instruction <opcode>
   ```
   where `<line_number>` is the line number where the error occurred, and `<opcode>` is the unknown instruction. Exit with the status EXIT_FAILURE.

4. If malloc fails, the program should print:
   ```
   Error: malloc failed
   ```
   and exit with status EXIT_FAILURE.

**Program Execution:**
- The interpreter runs the bytecodes line by line.
- It stops if all lines are executed properly, an error is encountered, or if an error occurs during execution.

**Constraints:**
- Use only malloc and free for memory allocation.
- Do not use other functions from man malloc (e.g., realloc, calloc).

## PseudoCode:
1. Enter the file
2. If the user does not give any file or more than one argument to your program:
	print the error message "USAGE: monty file",
	followed by a new line, and exit with the status “EXIT_FAILURE"

3. If, for any reason, it’s not possible to open the file:
	print the error message "Error: Can't open file <file>",
	followed by a new line, and exit with the status EXIT_FAILURE
	where <file> is the name of the file

4. If the file contains an invalid instruction:
	print the error message "L<line_number>: unknown instruction <opcode>"
	followed by a new line, and exit with the status EXIT_FAILURE
	where is the line number where the instruction appears.

5. Excution:
	Line numbers always start at 1
	The monty program runs the bytecodes line by line and stop if either:
		it executed properly every line of the file
		it finds an error in the file
		an error occured

6. If you can’t malloc anymore:
	print the error message Error: malloc failed
	followed by a new line, and exit with status EXIT_FAILURE.
