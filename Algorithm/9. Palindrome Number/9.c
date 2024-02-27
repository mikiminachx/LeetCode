bool isPalindrome(int x) 
{
    long reversed = 0;
    int last_digit = 0;
    int original = x;

    // for example: 121
    while (original > 0)
    {
        last_digit = original % 10; // 121 / 10 = 12.1, modulor = 1
        reversed = reversed * 10 + last_digit; // 1
        original /= 10; // 12
    }
    if (x == reversed)
    {
        return true;
    }
    else
    {
        return false;
    }
}