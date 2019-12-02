/* Name: Christopher Ambrose
 * Input:
 * Output:
 * Processing:
 */

#include <iostream>

using namespace std;

const double QUIZ_WEIGHT = .25;
const double MIDTERM_WEIGHT = .25;
const double FINAL_WEIGHT = .5;

class StudentRecord
{
    int quiz1, quiz2, midtermExam, finalExam;
    double average, finalGradePercent;
public:
    void setQuiz1(int newScore);
    void setQuiz2(int newScore);
    void setMidterm(int newScore);
    void setFinal(int newScore);
    int getQuiz1();
    int getQuiz2();
    int getMidterm();
    int getFinal();
    void setAll(int grade1, int grade2, int grade3, int grade4);
    double calculateAvg();
    double calculateFinalGrade();
    char changeGradeToLetter(double gradePercent);
};

int main()
{
    StudentRecord Steven;
    Steven.setQuiz1(50);
    cout << Steven.getQuiz1();
    return 0;
}

void StudentRecord::setQuiz1(int newScore)
{
    quiz1 = newScore;
}

void StudentRecord::setQuiz2(int newScore)
{
    quiz2 = newScore;
}

void StudentRecord::setMidterm(int newScore)
{
    midtermExam = newScore;
}

void StudentRecord::setFinal(int newScore)
{
    finalExam = newScore;
}

int StudentRecord::getQuiz1()
{
    return quiz1;
}

int StudentRecord::getQuiz2()
{
    return quiz2;
}

int StudentRecord::getMidterm()
{
    return midtermExam;
}

int StudentRecord::getFinal()
{
    return finalExam;
}

void StudentRecord::setAll(int grade1, int grade2, int grade3, int grade4)
{
    quiz1 = grade1;
    quiz2 = grade2;
    midtermExam = grade3;
    finalExam = grade4;
}

double StudentRecord::calculateAvg()
{
    double averageScore;
    averageScore = ( (quiz1 / 10) + (quiz2 / 10) + (midtermExam / 100) + (finalExam / 100) ) / 4;
    return averageScore;
}

double StudentRecord::calculateFinalGrade()
{
    double finalWeightGradeAverage;
    finalWeightGradeAverage = ( (quiz1 + quiz2) * QUIZ_WEIGHT / 20) + ( (midtermExam / 100) * MIDTERM_WEIGHT) + ( (finalExam / 100) * FINAL_WEIGHT);
    return finalWeightGradeAverage;
}

char StudentRecord::changeGradeToLetter(double gradePercent)
{
    if(gradePercent >= .9)
    {
        return 'A';
    }
    else if(gradePercent >= .8 && gradePercent < .9)
    {
        return 'B';
    }
    else if(gradePercent >= .7 && gradePercent < .8)
    {
        return 'C';
    }
    else if(gradePercent >= .6 && gradePercent < .7)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
