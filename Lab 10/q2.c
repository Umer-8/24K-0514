
# include<stdio.h>
# include<string.h>
void rev2(char str[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    else
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        rev2(str, start + 1, end - 1);

    }
}

void rev(char str[],int length)
{
    rev2(str, 0, length-1);
}
int main()
{
    char str[100];
    printf("enter your string:\n");
    gets(str);
    int a=strlen(str);
    rev(str,a);
    printf("%s", str);
    return 0;
}


