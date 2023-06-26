#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, concat_len;
    char *concat;

    /* Treat NULL strings as empty strings */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Get the lengths of s1 and s2 */
    len1 = strlen(s1);
    len2 = strlen(s2);

    /* Adjust n if it's greater than or equal to s2 length */
    if (n >= len2)
        n = len2;

    /* Calculate the length of the concatenated string */
    concat_len = len1 + n;

    /* Allocate memory for the concatenated string */
    concat = malloc(sizeof(char) * (concat_len + 1));
    if (concat == NULL)
        return NULL;

    /* Copy s1 into the concatenated string */
    strcpy(concat, s1);

    /* Concatenate the first n bytes of s2 */
    strncpy(concat + len1, s2, n);

    /* Add null-terminator to the end of the concatenated string */
    concat[concat_len] = '\0';

    /* Return the concatenated string */
    return concat;
}
