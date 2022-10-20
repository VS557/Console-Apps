#include <iostream>
#include <ctime>

const char NEW_LINE = '\n';
const char TAB = '\t';

int main()
{
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    bool checkNum;

    for (int i = 0; i < SIZE;)
    {
        checkNum = false;
        int newRandomValue = rand() % 20;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                checkNum = true;
                break;
            };
        };
        if (!checkNum)
        {
            arr[i] = newRandomValue;
            i++;
        }
    };

    int minValue = arr[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }

    std::cout << "The smallest integer: " << minValue;

    return 0;
}

//int main()
//{
//    int arr[]{1,2,3,4,5,6};
//
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        cout << arr[i] << endl;
//    }
//
//    return 0;
//}

//int main()
//{
//    int arrSize = 6;
//    int arr[arrSize]{1,2,3,6,7,8};
//
//    for (int i = 0; i < arrSize; i++) {
//      cout << arr[i] << endl;
//    };
//
//    return 0;
//}

//int main()
//{
//    const char symbol = '*';
//    int width;
//    int height;
//
//    cout << "Type height of the figure: ";
//    cin >> height;
//
//    cout << "Type width of the figure: ";
//    cin >> width;
//
//    for (int i = 0; i < height; i++) {
//        cout << symbol;
//
//        for (int j = 0; j < width - 1; j++) {
//            cout << symbol;
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//int main()
//{
//    int initialValue = 0;
//    int num;
//
//    int sum = 0;
//
//    cout << "Type your number: ";
//    cin >> num;
//
//    do
//    {
//        if (initialValue % 2 != 0)
//        {
//            sum += initialValue;
//        }
//        initialValue++;
//
//    } while(initialValue < num);
//
//    cout << sum;
//
//    return 0;
//}

//int main()
//{
//    char symbol;
//    int symbolNum;
//    int initialValue = 0;
//
//    cout << "Type your symbol: ";
//    cin >> symbol;
//
//    cout << "Type the number of symbols: ";
//    cin >> symbolNum;
//
//    while (initialValue < symbolNum)
//    {
//        cout << symbol << endl;
//        initialValue++;
//    }
//
//    return 0;
//}

//int main()
//{
//    int increment = 0;
//
//    while (increment < 20)
//    {
//        cout << "Hello world" << endl;
//        increment++;
//    }
//
//    return 0;
//}

//int main()
//{
//    int firstNum;
//    int secondNum;
//    char operation;
//
//    cout << "Type first number: ";
//    cin >> firstNum;
//
//    cout << "Type second num: ";
//    cin >> secondNum;
//
//    cout << "Choose an operation - + / * "; // "" - for string
//    cin >> operation;
//
//    switch(operation)
//    {
//        case '+': // '' - for char
//            cout << firstNum + secondNum;
//            break;
//
//        case '-':
//            cout << firstNum - secondNum;
//            break;
//
//        case '/':
//            cout << firstNum / secondNum;
//            break;
//
//        case '*':
//            cout << firstNum * secondNum;
//            break;
//
//        default:
//            cout << "Unknown operation";
//            break;
//    }
//
//    return 0;
//}

//int main()
//{
//    int number;
//    cout << "Please type a number from 1 to 3: ";
//    cin >> number;
//
//    switch (number)
//    {
//        case 1:
//            cout << "You typed 1" << endl;
//            break;
//
//        case 2:
//            cout << "You typed 2" << endl;
//            break;
//
//        case 3:
//            cout << "You typed 3" << endl;
//            break;
//
//        default:
//            cout << "Please type from 1 to 3..." << endl;
//            break;
//    }
//
//    return 0;
//}


//int main()
//{
//    int integer;
//    cout << "Type your number: " << endl;
//    cin >> integer;
//
//    if (integer % 2 == 0)
//    {
//        cout << integer << " " << "is even number";
//    }
//    else
//    {
//        cout << integer << " " << "is odd number";
//    }
//
//    return 0;
//}

//int main()
//{
//    string needUmbrella = "I need an umbrella,now!";
//    string dontNeedUmbrella = "I don't need an umbrella now!";
//
//    bool isRain = false;
//
//    if (isRain)
//    {
//        cout << needUmbrella << endl;
//    }
//    else
//    {
//        cout << dontNeedUmbrella << endl;
//    }
//
//    return 0;
//}

//int main()
//{
//    int a = 3;
//    int b = 3;
//
//    cout << (a == b);
//
//    return 0;
//}

//int main()
//{
//    int firstNum,secondNum,thirdNum;
//    cout << "Type three nums: " << endl;
//
//    cin >> firstNum >> secondNum >> thirdNum;
//    int sum = firstNum + secondNum + thirdNum;
//    int mult = firstNum * secondNum * thirdNum;
//    double average = (double)sum / 3;  // (double) type coercion
//
//    cout << "Sum: " << sum << endl << "Multiply: " << mult << endl << "Average: " << average << endl;
//
//    return 0;
//}

//int main()
//{
//    string num = "Calculator only plus operation";
//    cout << num << endl;
//
//    int firstNum;
//    int secondNum;
//
//    cout << "Type first num: " << endl;
//    cin >> firstNum;
//    cout << "Type second num: " << endl;
//    cin >> secondNum;
//
//    int sum = firstNum + secondNum;
//
//    cout << "The output is: " << sum;
//
//    return 0;
//}


