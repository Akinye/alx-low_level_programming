/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
Lvoid _puts_recursion(char *s)
{
  if (*s)
{
 _putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}                                                                                                          
