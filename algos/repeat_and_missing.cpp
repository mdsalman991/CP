int xr = 0;

    for(int i=0; i<A.size(); i++) xr^=A[i];

    for(int i=1; i<=A.size(); i++) xr^=i;

    int set_bit_no = xr & ~(xr-1);

    int x=0, y=0;

    for(int i=0; i<A.size(); i++)

    {
        if(set_bit_no & A[i])  x^=A[i];
        else y^=A[i];
        if(set_bit_no & i+1) x^=i+1;
        else y^=i+1;
    }

    bool flag = false;

    for(int i=0; i<A.size(); i++) if(x==A[i]) flag = true;

    if(!flag) swap(x,y);

    return {x,y};