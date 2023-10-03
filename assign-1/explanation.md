# p17

```c
#include <stdio.h>

int main()
{
  int a = 0x80ec;
  float b = 0.3e-12;
  printf(":%#4x: :%#10.2e:\n", a, b);
  printf(":%#4X :%#10.2E:\n", a, b);
}
```

- In the context of the `printf` format specifiers, the hash symbol (#) is used to prefix the output value with an alternative form.
- For example, `%#x` will output the hexadecimal value with a 0x prefix, and `%#o` will output the octal value with a 0 prefix.
- In the given code, `%#4x` will output the hexadecimal value with a 0x prefix and a minimum width of 4 characters, and `%#10.2e` will output the floating-point value in scientific notation with a decimal point and a minimum width of 10 characters, with 2 digits after the decimal point, and an exponent.
- Without the hash symbol, the output would be `: 80ec: : 3.00e-13:` which makes hard to see which base the numbers are in. With the hash symbol, the output is `:0x80ec: :3.00e-13:` which makes it clear that the first number is in hexadecimal and the second number is in scientific notation.

# p19
```c
printf(":%8u: :%8o: :%8x:\n",i,j,k);
printf(":%-8u: :%-8o: :%-8x:\n",i,j,k);
printf(":%#8u: :%#8o: :%#8x:\n",i,j,k);
printf(":%08u: :%0o0: :%08x:\n",i,j,k);
printf(":% #8u: :% #8o: :% #8x:\n",i,j,k);

```
- In C string formatting, the `%u` format specifier is used to format an unsigned decimal integer.

# p29

```c
char text[100]="Programming with C cab be a challenging creative activity";
printf("%s\n",text);
printf("%18s\n",text);
printf("%.18s\n",text);
printf("%18.7s\n",text);
printf("%-18.7s\n",text);
```

- In case of strings `"%.18s"` is substring of length 18 for string s wherease `%18s` is a string of length 18 or more if length(s)>18.
