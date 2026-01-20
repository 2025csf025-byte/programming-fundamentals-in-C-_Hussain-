#include<iostream>
#include<cstdlib>   // rand() ke liye
#include<ctime>     // time() ke liye
using namespace std;

int main()
{
    int num1,num2;
    int answer;
    int correctAnswer;
    int score=0;
    int lives=0;

    // random number generator start
    srand(time(0));

   cout << "===== Multiplication Challenge Game =====" << endl;

    // game loop
    while (lives > 0)
    {
        // random numbers 1 se 12 tak
        num1 = rand() % 12 + 1;
        num2 = rand() % 12 + 1;
        cout << "\nWhat is " << num1 << " x " << num2 << " ? ";
        cin >> answer;
        correctAnswer = num1 * num2;

        if (answer == correctAnswer)
        {
            cout << "Correct Answer!" << endl;
            score++;
        }
        else
        {
            cout << "Wrong Answer!" << endl;
            cout << "Correct answer is: " << correctAnswer << endl;
            lives--;
        }
        cout << "Score: " << score << endl;
        cout << "Lives left: " << lives << endl;
    }
    cout << "\n==== Game Over =====" << endl;
    cout << "Final Score: " << score << endl;
    return 0;
}
