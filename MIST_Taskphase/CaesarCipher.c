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
    a[i] += n%26;
    printf("%s", a);
}