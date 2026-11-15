function F(n) {
    if(n<=1) {return n}
    return F(n-1)+F(n-2)
}
BEGIN {
    printf("Entered argument: %d\n",k)
    print "Fibonacci("k"): "F(k)
}