int main(void)
{
	//get line on the text
	string s = GetString();

	// print string, one character per line 
	for ( int i = 0; i<strlen(s); i++)
	{
		printf("%c\n", s[i] );
	}
}