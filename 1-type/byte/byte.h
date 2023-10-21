unsigned char max_byte(unsigned short x) {
    int a[8]={0,0,0,0,0,0,0,0};
    for (int i=7;i>=0;i--){
        a[i]=x%2;
        x/=2;
    }
    int x1,x2;
    x1=a[0]*2*2*2+a[1]*2*2+a[2]*2+a[3];
    x2=a[4]*2*2*2+a[5]*2*2+a[6]*2+a[7];
    if (x1 > x2) return x1;
    else return x2;
}
