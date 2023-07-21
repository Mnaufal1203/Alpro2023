 //judul
    //header untuk sorting
    //Muhammad Naufal Abdulmajid
    //A11.2022.14727

    #include <iostream>
    using namespace std;

//kamus
    tipi wadah;
    int innerloop;
    void AscendingHarga(tipi tv[], int loopcount);
    void DescendingHarga(tipi tv[], int loopcount);
    void AscendingLayar(tipi tv[], int loopcount);
    void DescendingLayar(tipi tv[], int loopcount);

//deskripsi
    void AscendingHarga(tipi tv[], int loopcount) {
    loop = 0;
    while (loop < loopcount)
    {
        innerloop = loop + 1;
        while (innerloop < loopcount)
        {
            if (tv[loop].harga > tv[innerloop].harga)
            {
                wadah = tv[loop];
                tv[loop] = tv[innerloop];
                tv[innerloop] = wadah;
            }
            innerloop = innerloop + 1;
        }
        loop = loop + 1;
    }
    }
    void DescendingHarga(tipi tv[], int loopcount) {
    loop = 0;
    while (loop < loopcount)
    {
        innerloop = loop + 1;
        while (innerloop < loopcount)
        {
            if (tv[loop].harga < tv[innerloop].harga)
            {
                wadah = tv[loop];
                tv[loop] = tv[innerloop];
                tv[innerloop] = wadah;
            }
            innerloop = innerloop + 1;
        }
        loop = loop + 1;
    }
    }

    void AscendingLayar(tipi tv[], int loopcount) {
    loop = 0;
    while (loop < loopcount)
    {
        innerloop = loop + 1;
        while (innerloop < loopcount)
        {
            if (tv[loop].inch > tv[innerloop].inch)
            {
                wadah = tv[loop];
                tv[loop] = tv[innerloop];
                tv[innerloop] = wadah;
            }
            innerloop = innerloop + 1;
        }
        loop = loop + 1;
    }
    }

    void DescendingLayar(tipi tv[], int loopcount) {
    loop = 0;
    while (loop < loopcount)
    {
        innerloop = loop + 1;
        while (innerloop < loopcount)
        {
            if (tv[loop].inch < tv[innerloop].inch)
            {
                wadah = tv[loop];
                tv[loop] = tv[innerloop];
                tv[innerloop] = wadah;
            }
            innerloop = innerloop + 1;
        }
        loop = loop + 1;
    }
    }
