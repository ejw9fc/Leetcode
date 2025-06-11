bool isPalindrome(int x) {
    int org = x;
    int rev = 0;

    while (x > 0){
        int digit = x % 10;
        if (rev > (INT_MAX - digit) / 10){
            return 0;
        }
        rev = rev * 10 + digit;
        x = x / 10;
    }

    if (org == rev) {
        return 1;
    }
    else{
        return 0;
    }
}