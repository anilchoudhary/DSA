/* Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.* /


/*You are required to complete this function */
char *encode(char *src)
{
	char *ans = (char*)calloc(201, sizeof(char));
	int i = 1, start = 0, f = 0;
	char s = src[0];
	while (src[i] != '\0') {
		if (src[i] != s) {
			ans[f++] = s;
			ans[f++] = (i - start) +  '0';
			start = i;
			s = src[i];
		}
		i++;
	}
	ans[f++] = s;
	ans[f++] = (i - start) +  '0';
	return ans;
}