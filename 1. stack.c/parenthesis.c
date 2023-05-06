#include <stdio.h>

char oprst[25] = {'\0'};
char outst[25] = {'\0'};
int oprtop = -1;
int outtop = -1;
char ch;

char pushopr(char ele)
{
    if (oprtop == 24)
        printf("stack is full\n");
    else
    {
        oprtop++;
        oprst[oprtop] = ele;
        printf("the element %c is inserted\n ", ele);
    }
}

char popopr()

{
    if (oprtop == -1)
        printf("parenthesis is not matching check it is underflow condition .\n");
    else if (oprtop != -1)
    {
        ch = oprst[oprtop];
        oprtop--;
        printf("%c is poped\n", ch);
    }
    return ch;
}

void pushout(char ele)
{
    if (outtop == 24)
        printf("stack is full");
    else
    {
        outtop++;
        outst[outtop] = ele;
        printf("the element %c is inserted\n ", ele);
    }
}

char peepopr()
{

    if (oprtop != -1)
    {
        ch = oprst[oprtop];
    }
    return ch;
}

int main()
{

    char infix[25] = {'\0'};
    char ele, popele;
    int i = 0;
    int result;

    printf("enter the expression please~~!!!!!!!!");
    scanf("%s", infix);
    while (infix[i] != '\0')
    {
        ele = infix[i];

        if (ele == '(' || ele == '{' || ele == '[')
        {

            pushopr(ele);
        }

        else if (ele == ')')
        {   char ch;
            int count = 0;
           ch= popopr();
           if(ch=='('){
               return "Yes ()";
           }
            count++;
            printf("there are complete parenthesis are %d\n", count);
        }

         else if (ele == ']')
        {   char ch;
           ch= popopr();
           if(ch=='['){
               return "Yes []";
           }
        }

    else if (ele == '}')
        {   char ch;
           ch= popopr();
           if(ch=='{'){
               return "Yes {}";
           }
        }

        

        else
        {
            pushout(ele);
        }

        if (oprtop != -1)
        {
        }
        i++;
    }

    if (oprtop != -1)
        printf("parenthesis is not matching check it.\n");

    else
    {
        printf("parenthesis are matched wowowwwwwwwwwwwwww");
    }

    return 0;
}