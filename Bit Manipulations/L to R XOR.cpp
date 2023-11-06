int calculateXOR(int n)
{
    if(n%4 == 0) return n;
    else if(n%4 == 1) return 1;
    else if(n%4 == 2) return  n+1;
    else if(n%4 == 3) return 0;
}

int findXOR(int L, int R){
    int l = L-1;
    int xorofl = calculateXOR(l);
    int xorofR = calculateXOR(R);
    return (xorofl^xorofR);
}
