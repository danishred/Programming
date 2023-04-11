int main(int argc, char const *argv[])
{
    int a, *b = &a, **c = &b;
    a = 4;
    **c = 5;
    return 0;

}


