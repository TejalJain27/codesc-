int main() {
    int dividend, divisor;
    cout <<"Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    if (divisor == 0){
        cout << "Error! Division by zero." <<endl;
        return 0;
    }
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    long long absDividend = abs((long long)dividend);
    long long absDivisor = abs((long long)divisor);

    int quotient = 0;
    while (absDividend >= absDivisor) {
        absDividend -= absDivisor;
        quotient++;
    }
    quotient *= sign;
    cout << "Result of division: " << quotient << endl;

    return 0;
}