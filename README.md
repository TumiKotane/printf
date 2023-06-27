0x11. C - printf
C
Group project

Olebogeng Morobe and Boitumelo Kotane

Tasks

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Create a function `_printf` that generates output in a specified format. It takes a format string as input and returns the number of characters printed. The output is written to the standard output stream (stdout). The format string can contain directives, including the conversion specifiers: `c`, `s`, and `%`. Note that buffer handling, flag characters, field width, precision, and length modifiers are not required to be handled.

1. Education is when you read the fine print. Experience is what you get if you don't

Handle only the conversion specifiers 'd' and 'i', excluding flag characters, field width, precision, and length modifiers.

2. With a face like mine, I do better in print


Handle custom conversion specifier "b" which converts an unsigned int argument to binary.

3. What one has not experienced, one will never understand in print

Conversion specifiers "u," "o," "x," and "X" should be handled without considering flag characters, field width, precision, or length modifiers

4. Nothing in fine print is ever good news

Optimize by using a 1024-char buffer to minimize write calls.

5. My weakness is wearing too much leopard print

 Handle the custom conversion specifier 'S' for printing strings. Non-printable characters are represented as '\x' followed by their ASCII code value in hexadecimal (always 2 characters)

6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print

Only handle the conversion specifier "p" and disregard flag characters, field width, precision, and length modifiers.

7. The big print gives and the small print takes away

Handle flag characters: +, space, #, for non-custom conversion specifiers.

8. Sarcasm is lost in print

Non-custom conversion specifiers can be modified using "l" and "h" for length, while the conversion specifiers to handle include d, i, u, o, x, and X.

9. Print some money and give it to us for the rain forests

Handle the field width for non-custom conversion specifiers.

10. The negative is the equivalent of the composer's score, and the print the performance

Handle the precision for non-custom conversion specifiers.

11. It's depressing when you're still around and your albums are out of print

Handle the 0 flag character for non-custom conversion specifiers

12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection

Handle the - flag character for non-custom conversion specifiers.

13. Print is the sharpest and the strongest weapon of our party

The custom conversion specifier 'r' prints the reversed string.

14. The flood of print has turned reading into a process of gulping rather than savoring

Introduces a custom conversion specifier, 'R', which outputs the rot13'ed version of a string

15. *

All the above options work well together.
