int summ(int n)
{
    if(n==0)
    return 0;

    return summ(n-1)+n;
}


int sumFirstN(int n) {
    int sum= summ(n);
    return sum;
}
