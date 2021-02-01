#include <iostream>

using namespace std;

int main()
{
    int matrix[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 9; i = i + 3)
    {
        cout << matrix[i] << "|" << matrix[i+1] << "|" << matrix[i+2] << endl;
    }
    
    cout << endl;

    int G_SUM;
    for (int i = 0; i < 9; i=i+3)
    {
        G_SUM = 0;
        G_SUM = matrix[0 + i] + matrix[1 + i] + matrix[2 + i];
       
        cout << "G_SUM:" << G_SUM << endl;
    }

    cout << endl;

    int H_SUM;
    for (int i = 0; i < 3; i++)
    {
        H_SUM = 0;
        H_SUM = matrix[0 + i] + matrix[3 + i] + matrix[6 + i];
       
        cout << "H_SUM:" << H_SUM << endl;
    }

    cout << endl;

    int NW_GNZNT = matrix[0] + matrix[4] + matrix[8];
    cout << "NW_GNZNT: " << NW_GNZNT << endl;
   
    int NE_GNZNT = matrix[2] + matrix[4] + matrix[6];
    cout << "NE_GNZNT: " << NE_GNZNT << endl;
}
