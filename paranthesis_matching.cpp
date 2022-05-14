//  * Code by : hr-hackjack

#include <bits/stdc++.h>
using namespace std;
#define MAX 100


char stck[MAX];

//! pointer to track stck index
int stck_idx = -1;

//! push byte to stck variable
void push(char ch) { stck[++stck_idx] = ch; }

//! pop a byte out of stck variable
char pop() { return stck[stck_idx--]; }

//! @}-------------- end stck -----------

/** return opening paranthesis corresponding to the close paranthesis
 * @param[in] ch closed paranthesis character
 */
char opening(char ch) {
    switch (ch) {
    case '}':
        return '{';
    case ']':
        return '[';
    case ')':
        return '(';
    case '>':
        return '<';
    }
    return '\0';
}

int main() {
    string exp;
    int valid = 1, i = 0;
    cout << "Enter The Expression : ";
    cin >> exp;

    while (valid == 1 && i < exp.length()) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[' || exp[i] == '<') {
            push(exp[i]);
        } else if (stck_idx >= 0 && stck[stck_idx] == opening(exp[i])) {
            pop();
        } else {
            valid = 0;
        }
        i++;
    }

    if (valid == 1 && stck_idx == -1) {
        cout << "\nCorrect Expression";
    } else {
        cout << "\nWrong Expression";
    }

    return 0;
}
