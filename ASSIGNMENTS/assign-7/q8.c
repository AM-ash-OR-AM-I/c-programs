int tob(int b, int *arr)
{
    int i;
    for (i = 0; b > 0; i++)
    {
        if (b % 2)
            arr[i] = 1;
        else
            arr[i] = 0;
        b = b / 2;
    }
    return (i);
}
