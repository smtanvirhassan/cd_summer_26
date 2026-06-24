#include <iostream>
using namespace std;

void checkNumeric() {

    string input;

    cout << "Enter input: ";
    cin >> input;

    bool numeric = true;

    if (input.length() == 0)
        numeric = false;

    for (int i = 0; i < input.length(); i++) {

        if (input[i] < '0' || input[i] > '9')
            numeric = false;
    }

    if (numeric)
        cout << "Numeric Constant" << endl;
    else
        cout << "Not Numeric" << endl;
}

void checkOperator() {

    string input;

    cout << "\nEnter expression: ";
    cin >> input;

    int count = 1;

    for (int i = 0; i < input.length(); i++) {

        if (input[i] == '+' ||
            input[i] == '-' ||
            input[i] == '*' ||
            input[i] == '/' ||
            input[i] == '%' ||
            input[i] == '=') {

            cout << "operator" << count
                 << ": " << input[i] << endl;

            count++;
        }
    }

    if (count == 1)
        cout << "No operators found" << endl;
}

void checkComment() {

    cin.ignore();

    string input;

    cout << "\nEnter line: ";
    getline(cin, input);

    bool comment = false;

    if (input[0] == '/' &&
        input[1] == '/')

        comment = true;

    else if (input[0] == '/' &&
             input[1] == '*' &&

             input[input.length()-2] == '*' &&

             input[input.length()-1] == '/')

        comment = true;

    if (comment)
        cout << "This is a comment" << endl;
    else
        cout << "Not a comment" << endl;
}

void checkIdentifier() {

    string id;

    cout << "\nEnter identifier: ";
    cin >> id;

    bool valid = true;

    char first = id[0];

    if (!((first >= 'A' && first <= 'Z') ||

          (first >= 'a' && first <= 'z') ||

          first == '_'))

        valid = false;

    for (int i = 1; i < id.length() && valid; i++) {

        if (!((id[i] >= 'A' && id[i] <= 'Z') ||

              (id[i] >= 'a' && id[i] <= 'z') ||

              (id[i] >= '0' && id[i] <= '9') ||

              id[i] == '_'))

            valid = false;
    }

    if (valid)
        cout << "Valid Identifier" << endl;
    else
        cout << "Not a Valid Identifier" << endl;
}

void findAverage() {

    int n;

    cout << "\nHow many elements? ";
    cin >> n;

    int arr[100];

    float sum = 0;

    for (int i = 0; i < n; i++) {

        cout << "Element[" << i + 1 << "]: ";
        cin >> arr[i];

        sum += arr[i];
    }

    cout << "Average = " << sum / n << endl;
}

void findMinMax() {

    int n;

    cout << "\nHow many elements? ";
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {

        cout << "Element[" << i + 1 << "]: ";
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;
}

void fullName() {

    string first, last;

    cout << "\nEnter first name: ";
    cin >> first;

    cout << "Enter last name: ";
    cin >> last;

    cout << "Full Name = "
         << first + " " + last << endl;
}

int main() {

    checkNumeric();

    checkOperator();

    checkComment();

    checkIdentifier();

    findAverage();

    findMinMax();

    fullName();

    return 0;
}
