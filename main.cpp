// В массиве А(N,M) элементы строк, начинающихся с отрицательного элемента,
// расположить  в порядке возрастания.

#include <iostream>
#include <conio.h>
using namespace std;

/*

       const int n=3,m=3;
void EntArr(int A)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout.width(6);
            cout<<A[i][j];
            cout.width(6);
        }
        cout<<endl;
    }
}*/

void buble(int *a, int m)
{
    int i, j;
    for( i = 0; i < m-1; ++i )
    {
        for ( j = i+1; j < m; ++j)
            if( a[i] > a[j] )
                swap(a[i], a[j]);
    }
}

bool znak(int x)
{
    if(x >= 0 )
        return false;
    else
        return true;
}

int main()
{
    int n, m, i, j;
    cin >> n >> m;
    int a[n][m];
    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
            cin >> a[i][j];
    for( i = 0; i < n; ++i )
    {
        if ( znak(a[i][0]))
            buble(a[i], m);
    }
    for(i = 0; i < n; ++i )
    {
        for( j = 0; j < m; ++j)
        {
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}
