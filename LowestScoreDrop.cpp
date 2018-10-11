//Lowest Score Drop
//Matthew Chen A16075528
//10.09.2018
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int getScore();
void calcAverage (int, int, int, int, int);
int findLowest (int, int, int, int, int);
bool isValid (int);

int main()
{
    int score1, score2, score3, score4, score5;

    score1 = getScore();
    score2 = getScore();
    score3 = getScore();
    score4 = getScore();
    score5 = getScore();

    calcAverage (score1, score2, score3, score4, score5);

    return 0;
}

int getScore ()
{
    int testScore;
    cout << "Please enter a test score between 0 and 100: ";
    cin >> testScore;
    while (testScore < 0 || testScore > 100)
    {
        cout << "Invalid input. Enter a score between 0 and 100: ";
        cin >> testScore;
    }
    return testScore;
}

void calcAverage (int score1, int score2, int score3, int score4, int score5)
{
    int lowest = findLowest (score1, score2, score3, score4, score5);
    double avg;
    avg = (score1 + score2 + score3 + score4 + score5 - lowest)/static_cast<double>(4);
    cout << "The average of the four highest scores is: " << avg;
}

int findLowest (int a, int b, int c, int d, int e)
{
    int smallest = a;
    if (b<smallest)
        smallest = b;
    if (c<smallest)
        smallest = c;
    if (d<smallest)
        smallest = d;
    if (e<smallest)
        smallest = e;

    return smallest;
}
