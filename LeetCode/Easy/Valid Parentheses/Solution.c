bool isValid(char* s) {
    int len = strlen(s);
    char *stack = malloc(len);
    int top = -1;

    for(int i = 0; i < len; i++)
    {
        char c = s[i];

        if(c == '(' || c == '{' || c == '[')
        {
            stack[++top] = c;
        }
        else
        {
            if(top == -1)
            {
                free(stack);
                return false;
            }

            char open = stack[top--];

            if((c == ')' && open != '(') ||
               (c == '}' && open != '{') ||
               (c == ']' && open != '[')) {
               free(stack);
               return false;
            }
        }
    }
    if(top == -1){
        free(stack);
        return true;
    } else{
        free(stack);
        return false;
    }
}