#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    //生成1~100的随机数
    int num = rand()%100 + 1;
    //cout << num << endl;

    int val = 0;
    while(1)
    {
        cout << "输入你猜测的数" << endl;
        cin >> val;
        if(val > num)
        {
            cout << "猜测过大" << endl;
        }
        else if(val < num)
        {
            cout << "猜测过小" << endl;
        }else
        {
            cout << "恭喜你猜对了" << endl;
            break;
        }

    }

    system("pause");
    return 0;

}