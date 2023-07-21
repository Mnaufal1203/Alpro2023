int pangkat(int a, int b)
//untuk a pangkat b, kedua nilai positif
{
    //dasar: jika b = 0, kembalikan 1
    if (b == 0)
    {
        return 1;
    }
    //rekursif: panggil fungsi rekursif dengan nilai b yang lebih kecil
    else 
    {
        return a * pangkat(a, b-1);
    }
}