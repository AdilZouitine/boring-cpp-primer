struct X
{
    int rem, base;
    X(int i, int j) : base(i), rem(base % j) {}
};
