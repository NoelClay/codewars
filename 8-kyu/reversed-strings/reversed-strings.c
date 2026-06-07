char *strrev (char *string)
{
  int len;
  int i;
  char temp;
  
  i = 0;
  len = 0;
  while(string[i])
  {
    len++;
    i++;
  }
  i=1;
  while(i <= len/2)
  {
    temp = string[len - i];
    string[len - i] = string[i - 1];
    string[i - 1] = temp;
    i++;
  }
  
  return string; // reverse the string in place and return it
}