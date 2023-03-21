#define LIN 5
#define COL 5
void Absoluto(int M[LIN][COL] )
{
    int i , j ;
    for ( i = 0 ; i < LIN ; i++)
        for ( j = 0 ; j < COL; j++)
        if (M[ i ][ j ] < 0 )
            M[ i ][ j ] = M[ i ] [ j ] ∗ ( −1);
}
