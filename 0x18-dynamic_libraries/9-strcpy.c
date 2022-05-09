/**
 * _strcpy - copies the string pointed to by src,
 * @dest: destnation poiter to take value
 * @src: array poited that gets copied
 *
 * Description: copies string pointed to by src,
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
