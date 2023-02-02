#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Ввод количества элементов массива
    int n;
    cout << "Input vector size: ";
    cin >> n;

    if (n>0)
    {
        vector <int> vec(n);

        //Ввод элементов массива
        for (int i=0; i<n; i++)
        {
            cout << "Input " << i+1 << " numbers: ";
            cin >> vec[i];
        }

        //Ввод удаляемого из вектора значения
        int X;
        cout << "Input number to delete: ";
        cin >> X;

        //Удаление из вектора введеного значения
        int j =0;
        while (!vec.empty() && j<vec.size())
        {
            if (vec[j]==X) vec.erase(vec.begin()+j);
            else j++;
        }

        //Вывод обработанного массива
        cout << "Result: ";
        for (int i=0; i<vec.size(); i++)
            cout << vec[i] << " ";
        cout << endl;
    }
    else cout << "Error input vector size!";
}