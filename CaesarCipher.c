#include <stdio.h>
int main()
{
    char a[10000];
    int n,c=0, i=0;
    printf("Enter the string\n");
    scanf("%s", a);
    printf("Enter the number: ");
    scanf("%d", &n);
    while (a[c]!='\0')
    c++;
    for (i = 0; i<c; i++)
    if (a[i]>=97 && a[i]<=122)
    a[i] = (((a[i]-97)+n)%26)+97;
    else if (a[i]>=65 && a[i]<=90)
    a[i] = (((a[i]-65)+n)%26)+65;
    printf("%s", a);
}
