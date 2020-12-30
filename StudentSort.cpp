/*
*/
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int mark[5];
    int total;
    float percentage;
    int rank;

public:
    void getValues();
    void calculateTotal();
    int getTotal();
    void calculatePercentage();
    void setRank(int);
    void displayValues();
};
void Student::getValues()
{
    cout << "\nEnter the name ";
    getline(cin, name);
    cout << "Enter the mark of 5 subjects ";
    for (int i = 0; i < 5; i++) {
        cout << "\n Enter the mark of subject " << (i + 1) << " -";
        cin >> mark[i];
    }
    cin.ignore();
}
void Student::calculateTotal()
{
    total = 0;
    rank = 0;
    for (int i = 0; i < 5; i++) {
        total = total + mark[i];
    }
}
void Student::calculatePercentage()
{
    percentage = total / 500.0 * 100.0;
}
int Student::getTotal()
{
    return total;
}
void Student::setRank(int rank)
{
    this->rank = rank;
}

void bubbleSort(Student std[], int size);
void bubbleSort(Student std[], int size)
{
    Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (std[j].getTotal() < std[j + 1].getTotal()) {
                temp = std[j];
                std[j] = std[j + 1];
                std[j + 1] = temp;
            }
        }
    }
}
void calculateRank(Student std[], int size);
void calculateRank(Student std[], int size)
{
    bubbleSort(std, size);
    for (int i = 0; i < size; i++) {
        std[i].setRank(i + 1);
    }
}
void Student::displayValues()
{
    cout << "\n Name " << name;
    cout << "\n Total " << total;
    cout << "\n Percentage " << percentage;
    cout << "\n Marks-";
    for (int i = 0; i < 5; i++) {
        cout << " " << mark[i];
    }
    cout << "\n Rank " << rank;
}
int main()
{
    Student std[5];
    for (int i = 0; i < 5; i++) {
        cout << "\n\nData Entry for  Student " << i + 1;
        std[i].getValues();
        std[i].calculateTotal();
        std[i].calculatePercentage();
    }
    calculateRank(std, 5);
    for (int i = 0; i < 5; i++) {
        cout << "\n\n";
        std[i].displayValues();
    }
    cout << "\n";
}
