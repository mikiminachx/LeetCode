int replace(char c)
{
    switch(c)
        {
            case 'I':
            return 1;

            case 'V':
            return 5;

            case 'X':
            return 10;

            case 'L':
            return 50;

            case 'C':
            return 100;

            case 'D':
            return 500;

            case 'M':
            return 1000;
        }
        return 0;
}

int romanToInt(char* s) 
{
    int sum = 0;
    int temp = 0;
    int i, len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            sum += replace(s[i]);
            break;
        }
        if ((temp = replace(s[i + 1]) - replace(s[i])) > 0)
        {
            sum += temp;
            i++;
            temp = 0;
            continue;
        }
        sum += replace(s[i]);
    }
    return sum;
}