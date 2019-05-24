int main()
{
    char ch[500];
    int i,n,count=0;
    gets(ch);
    n=strlen(ch);
    for(i=0;i<n;i++)
        {
    if(isdigit(ch[i]))
         {
            count++;
        }
    }
    printf("%d",count);
}
