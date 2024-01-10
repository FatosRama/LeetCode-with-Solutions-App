#include <iostream>
#include<vector>
#include<string>
using namespace std;
void Array1929() {
    cout << endl << "1929. Concatenation of Array" << endl << endl << "Given an integer array nums of length n, you want to create an array ans of length 2n where" << endl << " ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n(0 - indexed)." << endl << "Specifically, ans is the concatenation of two nums arrays." << endl << "Return the array ans." << endl;
    cout << endl << "Example :" << endl;
    cout << "Input: nums = [1,2,1]" << endl << "Output: [1,2,1,1,2,1]" << endl << "Explanation: The array ans is formed as follows:" << endl << "- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]" << endl << "- ans = [1,2,1,1,2,1]" << endl << endl;

    int n, num;

    cout << "Enter the amount of numbers you're going to type in: ";
    cin >> n;
    vector<int>nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Type the " << i + 1 << " number: ";
        cin >> num;
        nums[i] = num;

    }

    vector<int>ans(2 * n);
    for (int i = 0; i < n; i++) {
        ans[i] = ans[i + n] = nums[i];
    }
    cout << "Answer = [";
    for (int i = 0; i < 2 * n; i++) {
        if (i == 2 * n - 1) {
            cout << ans[i] << "]" << endl;
        }
        else {
            cout << ans[i] << ",";
        }
    }
}
void Array1920() {
    cout << endl << "1920. Build Array from Permutation" << endl << "Given a zero-based permutation nums (0-indexed), build an array ans of the same length where" << endl << "ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it." << endl << endl << "A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive)." << endl;
    cout << "Example :" << endl << "Input: nums = [0,2,1,5,3,4]" << endl << "Output: [0,1,2,4,5,3]" << endl << "Explanation: The array ans is built as follows: " << endl << "ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]" << endl << " = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]" << endl << " = [0,1,2,4,5,3]" << endl << endl;

    int n;
    int num;
    cout << "Enter the amount of numbers you are going to type in: ";
    cin >> n;
    vector<int>nums(1000);
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " number: ";
        cin >> num;
        nums[i] = num;
    }
    int k = nums.size();
    vector<int>ans(k);
    for (int i = 0; i < k; i++) {
        ans[i] = nums[nums[i]];
    }

    cout << "Answer: [";
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << ans[i] << "]" << endl;
        }
        else {
            cout << ans[i] << ",";
        }
    }
}

    void Array1512() {
        cout << endl << "1512. Number of Good Pairs" << endl << endl << "Given an array of integers nums, return the number of good pairs." << endl << "A pair (i, j) is called good if nums[i] == nums[j] and i < j." << endl << endl << "Example :" << endl << "Input: nums = [1,2,3,1,1,3]" << endl << "Output: 4" << endl << "Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed." << endl << endl;





        int n;
        int num;
        cout << "Enter the amount of numbers you are going to type in: ";
        cin >> n;
        vector<int>nums(100);
        for (int i = 0; i < n; i++) {
            cout << "Type the " << i + 1 << " number: ";
            cin >> num;
            nums[i] = num;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    if (i < j) {
                        ans++;
                    }
                }
            }
        }
        cout << "The number of good pairs are: " << ans << endl;
    }
    void Array2011() {
        cout << endl << "2011. Final Value of Variable After Performing Operations" << endl << endl << "There is a programming language with only four operations and one variable X:" << endl << "++X and X++ increments the value of the variable X by 1." << endl << "--X and X-- decrements the value of the variable X by 1." << endl << "Initially, the value of X is 0." << endl << "Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations." << endl << endl << "Example :" << endl << "Input: operations = [\"--X\",\"X++\",\"X++\"]" << endl << "Output: 1" << endl << "Explanation: The operations are performed as follows:" << endl << "Initially, X = 0." << endl << "--X: X is decremented by 1, X =  0 - 1 = -1." << endl << "X++: X is incremented by 1, X = -1 + 1 =  0." << endl << "X++: X is incremented by 1, X =  0 + 1 =  1." << endl << endl;


        int n;
        string op;

        cout << "Enter the amount of operations you want to type in (--X or X--, ++X or X++): ";
        cin >> n;
        vector<string>operations(100);
        for (int i = 0; i < n; i++) {
            cout << "Type the " << i + 1 << " operation: ";
            cin >> op;
            operations[i] = op;
        }


        int x = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "--X" || operations[i] == "X--") {
                x -= 1;
            }
            else if (operations[i] == "X++" || operations[i] == "++X") {
                x += 1;
            }
        }
        cout << "Answer: " << x << endl;
    }
    void Array2798() {
        cout << endl << "2798. Number of Employees Who Met the Target" << endl << endl << "There are n employees in a company, numbered from 0 to n - 1. Each employee i has worked for hours[i] hours in the company." << endl << "The company requires each employee to work for at least target hours." << endl << "You are given a 0-indexed array of non-negative integers hours of length n and a non-negative integer target." << endl << "Return the integer denoting the number of employees who worked at least target hours." << endl << endl << "Example :" << endl << "Input: hours = [0,1,2,3,4], target = 2" << endl << "Output: 3" << endl << "Explanation: The company wants each employee to work for at least 2 hours." << endl << "- Employee 0 worked for 0 hours and didn't meet the target." << endl << "- Employee 1 worked for 1 hours and didn't meet the target." << endl << "- Employee 2 worked for 2 hours and met the target." << endl << "- Employee 3 worked for 3 hours and met the target." << endl << "- Employee 4 worked for 4 hours and met the target." << endl << "There are 3 employees who met the target." << endl << endl;

        int n, target;
        int getH;
        cout << "Enter the amount of hours you are going to type in: ";
        cin >> n;
        cout << "Enter the target: ";
        cin >> target;
        vector<int>hours(50);
        for (int i = 0; i < n; i++) {
            cout << "Type the " << i + 1 << " hour: ";
            cin >> getH;
            hours[i] = getH;
        }

        int e = 0;
        for (int i = 0; i <= hours.size() - 1; i++) {
            if (hours[i] >= target) {
                e++;
            }
        }
        cout << "Answer: " << e << endl;
    }
    void String1108() {
        cout << endl << "1108. Defanging an IP Address" << endl << endl << "Given a valid (IPv4) IP address, return a defanged version of that IP address." << endl << "A defanged IP address replaces every period \".\" with \"[.]\"." << endl << endl << "Example :" << endl << "Input: address = \"1.1.1.1\"" << endl << "Output: \"1[.]1[.]1[.]1\"" << endl << endl;

        string address;
        cout << "Enter the IP address (XXX.XXX.XXX.XXX - format): ";
        cin >> address;

        string ans;
        for (int i = 0; i <= address.length(); i++) {
            if (address[i] == '.') {
                ans += "[.]";
                continue;
            }
            ans += address[i];


        }
        cout << "Answer: " << ans << endl;

    }
    void String2942() {
        cout <<endl<< "2942. Find Words Containing Character" << endl << "You are given a 0-indexed array of strings words and a character x." << endl << "Return an array of indices representing the words that contain the character x." << endl << "Note that the returned array may be in any order." << endl << endl << "Example 1:" << endl <<

            "Input: words = [\"leet\", \"code\"], x = \"e\"" << endl <<
            "Output : [0, 1]" << endl <<
            "Explanation : \"e\" occurs in both words : \"leet\", and \"code\".Hence, we return indices 0 and 1." << endl << endl;
        int n;
        string Awords;
        char x;

        cout << "Enter the amount of words you're gonna type: ";
        cin >> n;

        vector<string>words;
        for (int i = 0; i < n; i++) {
            cout << "Type in your " << i + 1 << " word: ";
            cin >> Awords;
            words.push_back(Awords);

        }
        cout << "Type in the character you want to find: ";
        cin >> x;

        int count = 0;
        vector<int>ans;

        for (int i = 0; i < words.size(); ++i) {
            if (words[i].find(x) != string::npos) {
                ans.push_back(i);
            }
            else {
                count++;
                continue;
            }

        }
        cout << "Answer: [";
        if (count == words.size()) {
            cout << "" << "]" << endl;
        }
        else {
            for (int i = 0; i < ans.size(); i++) {
                if (i == ans.size() - 1) {
                    cout << ans[i] << "]" << endl;
                }
                else {
                    cout << ans[i] << ",";
                }

            }
        }
    }
    void String711() {
        cout << endl << "771. Jewels and Stones" << endl << endl << "You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have." << endl << "Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels." << endl << "Letters are case sensitive, so \"a\" is considered a different type of stone from \"A\"." << endl << endl << "Example :" << endl << "Input: jewels = \"aA\", stones = \"aAAbbbb\"" << endl << "Output: 3" << endl << endl;

        string jewels = "z";
        string stones = "ZZ";
        cout << "Enter the jewels: ";
        cin >> jewels;
        cout << "Enter the stones: ";
        cin >> stones;

        int count = 0;
        for (int i = 0; i < stones.length(); i++) {
            for (int j = 0; j < jewels.length(); j++) {
                if (stones[i] == jewels[j]) {
                    count++;
                }
            }
        }
        cout << "The amount of jewels found: " << count << endl;


    }
    void String1678() {
        cout << endl << "1678. Goal Parser Interpretation" << endl << endl << "You own a Goal Parser that can interpret a string command. " << endl << "The command consists of an alphabet of \"G\", \"()\" and/or \"(al)\" in some order. " << endl << "The Goal Parser will interpret \"G\" as the string \"G\", \"()\" as the string \"o\", and \"(al)\" as the string \"al\"." << endl << "The interpreted strings are then concatenated in the original order." << endl << "Given the string command, return the Goal Parser's interpretation of command." << endl << endl << "Example :" << endl << "Input: command = \"G()(al)\"" << endl << "Output: \"Goal\"" << endl << "Explanation: The Goal Parser interprets the command as follows:" << endl << "G -> G" << endl << "() -> o" << endl << "(al) -> al" << endl << "The final concatenated result is \"Goal\"." << endl << endl;

        string command;
        cout << "Enter the Goal using \"G\",\"()\" or \"(al)\": ";
        cin >> command;

        string ans;
        for (int i = 0; i < command.length(); i++) {

            char c = command[i];
            if (c == 'G') {
                ans += c;

            }
            else if (c == '(') {
                ans += command[i + 1] == ')' ? "o" : "al";
            }
        }



        cout << "Interpretation: " << ans << endl;
    }
    void String1662() {
        cout << endl << "1662. Check If Two String Arrays are Equivalent" << endl << endl << "Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise." << endl << "A string is represented by an array if the array elements concatenated in order forms the string." << endl << endl << "Example :" << endl << "Input: word1 = [\"ab\", \"c\"], word2 = [\"a\", \"bc\"]" << endl << "Output: true" << endl << "Explanation:" << endl << "word1 represents string \"ab\" + \"c\" -> \"abc\"" << endl << "word2 represents string \"a\" + \"bc\" -> \"abc\"" << endl << "The strings are the same, so return true." << endl << endl;

        int n1, n2;
        string w1, w2;
        cout << "Enter the amount of words you are going to type in the first word list: ";
        cin >> n1;
        cout << "Enter the amount of words you are going to type in the second word list: ";
        cin >> n2;
        vector<string>word1(n1);
        vector<string>word2(n2);
        for (int i = 0; i < n1; i++) {
            cout << "Type the " << i + 1 << " word in the first word list: ";
            cin >> w1;
            word1[i] = w1;

        }
        for (int i = 0; i < n2; i++) {
            cout << "Type the " << i + 1 << " word in the second word list: ";
            cin >> w2;
            word2[i] = w2;
        }


        int i = 0, j = 0, a = 0, b = 0;
        while (i < word1.size() && j < word2.size()) {
            if (word1[i][a] != word2[j][b]) {
                cout << "Answer: false";
            }
            if (++a == word1[i].size()) {
                ++i;
                a = 0;
            }
            if (++b == word2[j].size()) {
                ++j;
                b = 0;
            }
        }

        bool check = (i == word1.size() && j == word2.size());
        if (check == true) {
            cout << "Answer: true" << endl;
        }
    }
    void Math2469() {
        cout << endl << "2469. Convert the Temperature" << endl << endl << "You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius." << endl << "You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit]." << endl << "Return the array ans. Answers within 10-5 of the actual answer will be accepted." << endl << endl << "Note that:" << endl << "Kelvin = Celsius + 273.15" << endl << "Fahrenheit = Celsius * 1.80 + 32.00" << endl << endl << "Example :" << endl << "Input: celsius = 36.50" << endl << "Output: [309.65000,97.70000]" << endl << "Explanation: Temperature at 36.50 Celsius converted in Kelvin is 309.65 and converted in Fahrenheit is 97.70." << endl << endl;
        double celsius;
        cout << "Enter the value of Celsius: ";
        cin >> celsius;



        cout << "[" << celsius + 273.15 << " K, " << celsius * 1.80 + 32 << " F]" << endl;



    }
    void Math2769() {
        cout << endl << "2769. Find the Maximum Achievable Number" << endl << endl << "You are given two integers, num and t." << endl << "An integer x is called achievable if it can become equal to num after applying the following operation no more than t times:" << endl << "Increase or decrease x by 1, and simultaneously increase or decrease num by 1." << endl << "Return the maximum possible achievable number. It can be proven that there exists at least one achievable number." << endl << endl << "Example :" << endl << "Input: num = 4, t = 1" << endl << "Output: 6" << endl << "Explanation: The maximum achievable number is x = 6; it can become equal to num after performing this operation:" << endl << "1- Decrease x by 1, and increase num by 1. Now, x = 5 and num = 5. " << endl << "It can be proven that there is no achievable number larger than 6." << endl << endl;

        int num, t;
        cout << "Enter the number: ";
        cin >> num;
        cout << "Enter the amount of times: ";
        cin >> t;



        cout << "The Maximum Achievable number is: " << num + 2 * t << endl;


    }
    void Math2894() {
        cout << endl << "2894. Divisible and Non-divisible Sums Difference" << endl << endl << "You are given positive integers n and m." << endl << "Define two integers, num1 and num2, as follows:" << endl << "num1: The sum of all integers in the range [1, n] that are not divisible by m." << endl << "num2: The sum of all integers in the range [1, n] that are divisible by m." << endl << "Return the integer num1 - num2." << endl << "Example :" << endl << "Input: n = 10, m = 3" << endl << "Output: 19" << endl << "Explanation: In the given example:" << endl << "- Integers in the range [1, 10] that are not divisible by 3 are [1,2,4,5,7,8,10], num1 is the sum of those integers = 37." << endl << "- Integers in the range [1, 10] that are divisible by 3 are [3,6,9], num2 is the sum of those integers = 18." << endl << "We return 37 - 18 = 19 as the answer." << endl << endl;

        int n; int m;
        cout << "Enter the range n: ";
        cin >> n;
        cout << "Enter the divisible: ";
        cin >> m;

        int num1 = 0, num2 = 0;
        for (int i = 0; i <= n; i++) {
            if (i % m == 0) {
                num2 += i;
            }
            else {
                num1 += i;
            }
        }
        cout << num1 - num2;



    }
    void Math2413() {
        cout << endl << "2413. Smallest Even Multiple" << endl << endl << "Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n." << endl << "Example :" << endl << "Input: n = 5" << endl << "Output: 10" << endl << "Explanation: The smallest multiple of both 5 and 2 is 10." << endl << endl;


        int n;
        cout << "Enter the value of n: ";
        cin >> n;
        int s = n / 2;
        if (n == s * 2) {
            cout << "The smallest multiple: " << n;
        }
        else {
            cout << "The smallest multiple: " << n * 2;
        }


    }
    void Math2235() {
        cout << endl << "2235. Add Two Integers" << endl << endl << "Given two integers num1 and num2, return the sum of the two integers." << endl << "Example: " << endl << "Input: num1 = 12, num2 = 5" << endl << "Output: 17" << endl << "Explanation: num1 is 12, num2 is 5, and their sum is 12 + 5 = 17, so 17 is returned." << endl << endl;


        int num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "enter the second number: ";
        cin >> num2;
        cout << "Sum of the two numbers are: " << num1 + num2;

    }
    void Matrix1672() {
        cout << endl << "1672. Richest Customer Wealth" << endl << endl << "You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has." << endl << "A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth." << endl << endl << "Example :" << endl << "Input: accounts = [[1,2,3],[3,2,1]]" << endl << "Output: 6" << endl << "Explanation:" << endl << "1st customer has wealth = 1 + 2 + 3 = 6" << endl << "2nd customer has wealth = 3 + 2 + 1 = 6" << endl << "Both customers are considered the richest with a wealth of 6 each, so return 6" << endl << endl;


        int n, m, w;
        cout << "Enter the amount of customers: ";
        cin >> n;
        cout << "Enter the amount of banks per customer: ";
        cin >> m;
        vector<vector<int>>ans(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << "Enter the " << j + 1 << " wealth of " << i + 1 << " customer: ";
                cin >> w;
                ans[i][j] = w;
            }
        }
        int max = 0, t = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                t += ans[i][j];
            }
            if (t > max) {
                max = t;
            }


            t = 0;
            continue;
        }


        cout << "The richest customer wealth: " << max << endl;;

    }
    void Matrix1572() {
        cout << endl << "1572. Matrix Diagonal Sum" << endl << endl << "Given a square matrix mat, return the sum of the matrix diagonals" << endl << "Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal." << endl << endl << "Example :" << endl << "Input: mat = [[1,2,3],[4, 5, 6],[7, 8, 9]]" << endl << "Output: 25" << endl << "Explanation: Diagonals sum : 1 + 5 + 9 + 3 + 7 = 25" << endl << endl;




        int m;
        cout << "Enter the order m: ";
        cin >> m;
        vector<vector<int>>matrica(m, vector<int>(m));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                cout << "Enter the A(" << i + 1 << ")(" << j + 1 << ") element: ";
                cin >> matrica[i][j];
            }
        }
        int sum = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j || i + j == m - 1) {
                    sum += matrica[i][j];
                }

            }

        }
        cout << "The sum of all the diagonal elements are: " << sum << endl;
    }
    void Matrix1351() {
        cout << endl << "1351. Count Negative Numbers in a Sorted Matrix" << endl << endl << "Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid." << endl << endl << "Example :" << endl << "Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]" << endl << "Output: 8" << endl << "Explanation: There are 8 negatives number in the matrix." << endl << endl;
        int n, m;
        cout << "Enter the order n of the grid: ";
        cin >> n;
        cout << "Enter the order m of the grid: ";
        cin >> m;
        vector<vector<int>>grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << "Enter the A(" << i + 1 << ")(" << j + 1 << ") element of the grid: ";
                cin >> grid[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] < 0) {
                    count++;
                }
            }
        }


        cout << "The number of negative numbers are: " << count << endl;


    }
    void Matrix2643() {
        cout << endl << "2643. Row With Maximum Ones" << endl << endl << "Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row." << endl << "In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected." << endl << "Return an array containing the index of the row, and the number of ones in it." << endl << endl << "Example :" << endl << "Input: mat = [[0,1],[1,0]]" << endl << "Output: [0,1]" << endl << "Explanation: Both rows have the same number of 1's. So we return the index of the smaller row, 0, and the maximum count of ones (1). So, the answer is [0,1]. " << endl << endl;

        int n, m;
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << "Enter the number of columns: ";
        cin >> m;

        vector<vector<int>>mat(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << "Enter the values of A(" << i + 1 << ")(" << j + 1 << ") elements of the matrix(0 and 1 ONLY): ";
                cin >> mat[i][j];
            }
        }
        vector<int> ans = { 0, 0 };
        for (int i = 0; i < n; ++i) {
            int cnt = 0;
            for (int j = 0; j < m; ++j)
                if (mat[i][j] == 1)
                    ++cnt;

            if (cnt > ans[1])
                ans = { i, cnt };


        }
        cout << "Ans[";
        for (int i = 0; i < ans.size(); i++) {
            if (i == ans.size() - 1) {
                cout << ans[i] << "]" << endl;
            }
            cout << ans[i] << ",";
        }

    }
    void Matrix867() {
        cout << endl << "867. Transpose Matrix" << endl << endl << "Given a 2D integer array matrix, return the transpose of matrix." << endl << "The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices." << endl << endl << "Example :" << endl << "Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]" << endl << "Output: [[1,4,7],[2,5,8],[3,6,9]]" << endl << endl;


        int n;
        cout << "Enter the value of the order n : ";
        cin >> n;
        vector<vector<int>>matrix(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "Enter a value to the A(" << i + 1 << ")(" << j + 1 << ") elemenent of the matrix: ";
                cin >> matrix[i][j];
            }
        }

        vector<vector<int>> res(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res[j][i] = matrix[i][j];


            }
        }
        cout << "Transposed matrix: [";
        for (int i = 0; i < n; i++) {

            cout << "[";
            for (int j = 0; j < n; j++) {
                if (j == n - 1) {
                    cout << res[i][j] << "]";
                    continue;
                }
                cout << res[i][j] << ",";
            }

        }
        cout << "]" << endl;

    }
void Array1() {
    int n;
    cout << endl<< "1. Array:  " << endl;
    cout << "1) 1929.Concatenation of Array." << endl << endl;
    cout << "2) 1920.Build Array from Permutation" << endl << endl;
    cout << "3) 1512.Number of Good Pairs" << endl << endl;
    cout << "4) 2011.Final Value of Variable After Performing Operations" << endl << endl;
    cout << "5) 2798.Number of Employees Who Met the Target" << endl;
    repeat:
    cout << "Choose one of the 5 solution codes: ";
    cin >> n;
    switch (n) {
    case 1:
        Array1929();
        break;
    case 2:
        Array1920();
        break;
    case 3:
        Array1512();
        break;
    case 4:
        Array2011();
        break;
    case 5:
        Array2798();
        break;
    default:
        cout << "Please enter a valid number (1 to 5)!" << endl;
        goto repeat;

    }

}
void String2() {
  
    cout << endl << "2. String: " << endl;
    cout << "1) 1108.Defanging an IP Address" << endl << endl;
    cout << "2) 2942.Find Words Containing Character" << endl << endl;
    cout << "3) 711.Jewels and Stones" << endl << endl;
    cout << "4) 1678.Goal Parser Interpretation" << endl << endl;
    cout << "5) 1662.Check if Two String Arrays are Equivalent" << endl;
    
    int n;
    repeat:
    cout << "Choose one of the 5 solution codes: ";
    cin >> n;
    switch (n) {
    case 1:
        String1108();
        break;
    case 2:
        String2942();
        break;
    case 3:
        String711();
        break;
    case 4:
        String1678();
        break;
    case 5:
        String1662();
        break;
    default:
        cout << "Please enter a valid number (1 to 5)!" << endl;
        goto repeat;

    }
}
void Math3() {
    cout << endl << "3. Math  " << endl;
    cout << "1) 2469.Convert the Temperature" << endl << endl;
    cout << "2) 2769.Find the Maximum Achievable Number" << endl << endl;
    cout << "3) 2894.Divisible and Non-divisible Sums Difference" << endl << endl;
    cout << "4) 2413.Smallest Even Multiple" << endl << endl;
    cout << "5) 2235.Add Two Integers" << endl;
    int n;
repeat:
    cout << "Choose one of the 5 solution codes: ";
    cin >> n;
    switch (n) {
    case 1:
        Math2469();
        break;
    case 2:
        Math2769();
        break;
    case 3:
        Math2894();
        break;
    case 4:
        Math2413();
        break;
    case 5:
        Math2235();
        break;
    default:
        cout << "Please enter a valid number (1 to 5)!" << endl;
        goto repeat;

    }
}
void Matrix4() {
    cout << endl << "4. Matrix " << endl;
    cout << "1) 1672.Richest Customer Wealth" << endl << endl;
    cout << "2) 1572.Matrix Diagonal Sum" << endl << endl;
    cout << "3) 1351.Count Negative Numbers in a Sorted Matrix" << endl << endl;
    cout << "4) 2643.Row with Maximum Ones" << endl << endl;
    cout << "5) 867.Transpose Matrix" << endl;
    int n;
repeat:
    cout << "Choose one of the 5 solution codes: ";
    cin >> n;
    switch (n) {
    case 1:
        Matrix1672();
        break;
    case 2:
        Matrix1572();
        break;
    case 3:
        Matrix1351();
        break;
    case 4:
        Matrix2643();
        break;
    case 5:
        Matrix867();
        break;
    default:
        cout << "Please enter a valid number (1 to 5)!" << endl;
        goto repeat;

    }
}

int main()
{
    int n;
    cout << "This is Fatos's Leet Code Solution Codes! These are the 4 topics: " << endl;
    cout << "1. Array" << endl << endl << "2. String" << endl << endl << "3. Math" << endl << endl << "4. Matrix" << endl << endl;
    repeat:
    cout << "Choose one of the 4 topics to show the results: ";
    cin >> n;
    switch (n) {
    case 1:
        Array1();
        break;
    case 2:
        String2();
        break;
    case 3:
        Math3();
        break;
    case 4:
        Matrix4();
        break;
    default:
        cout << "Please enter a valid number (between 1 to 4)" << endl;
            goto repeat;
    }
    return 0;
}

