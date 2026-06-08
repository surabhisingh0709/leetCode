class Solution {
public:
    int myAtoi(string s) {

        int n = s.length();
        int i = 0;

        // Skip leading spaces
        while(i < n && s[i] == ' ')
            i++;

        // Handle sign
        int sign = 1;

        if(i < n && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-')
                sign = -1;
            i++;
        }

        long long ans = 0;

        // Read digits
        while(i < n && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';

            // Overflow check
            if(sign == 1 &&
               (ans > INT_MAX / 10 ||
               (ans == INT_MAX / 10 && digit > 7)))
                return INT_MAX;

            if(sign == -1 &&
               (ans > INT_MAX / 10 ||
               (ans == INT_MAX / 10 && digit > 8)))
                return INT_MIN;

            ans = ans * 10 + digit;
            i++;
        }

        return sign * ans;
    }
};