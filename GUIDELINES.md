# C Exercise Checklist – 13 Rules

1. `int main(void)` + `return 0;`

2. No magic numbers → `#define EXPECTED_FIELDS 3`, etc.

3. Always initialize before scanf  
   `int month = -1, day = -1, year = -1;`  
   Check exact count: `!= EXPECTED_FIELDS → error`

4. Validate ranges right after parsing (month 1-12, day 1-31, year > 0)

5. printf fixed width → `%02d`, not `%2.2d`

6. `fflush(stdout);` before every scanf prompt

7. Correct Makefile in every chapter (real tabs, full warnings)

8. Test good + bad input before commit

9. Commit message: `ch3: ex1 – short description`

10. Never use user input directly as (or in) a format string
    Avoid format string vulnerabilities.
    Always use literal format strings:
    Good: `printf("%s\n", user_string);`
    Bad: `printf(user_string);`

11. When reading strings with scanf, always use field width
    Prevent buffer overflow by limiting input length.
    For `char str[SIZE];`, use `% (SIZE-1) s`:
    Example:
    `char name[20];`
    `scanf("%19s", name);  // Safe – leaves room for null terminator`

12. Handle partial/invalid scanf input gracefully
    On error, consider clearing the input buffer to prevent loops:
    Example:
    `if (fields != EXPECTED_FIELDS) {`
        `printf("Error...\n");`
        `int c;`
        `while ((c = getchar()) != '\n' && c != EOF);  // Discard rest of line`
        `return EXIT_FAILURE;`
    `}`

13. Compile with security-focused warnings and sanitizers
    The Makefile already includes strict flags (-Wall -Wextra -Wformat=2, sanitizers, etc.).
    These help catch format string mismatches, buffer issues, and undefined behavior early.


