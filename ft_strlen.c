unsigned long ft_strlen(const char *s)
{
	unsigned long len;

	len = 0;
	while (s[len])
		len++;
	return (len);

}