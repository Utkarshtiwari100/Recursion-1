int count(int n){
    //write your code here
    int c=0;
    while(n) {
        c++;
        n=n/10;
    }
    return c;
}

/*
Number of Digits
Send Feedback
Given the number 'n', find out and return the number of digits present in a number recursively.
Input Format :
Integer n
Output Format :
Count of digits
Constraints :
1 <= n <= 10^6
Sample Input 1 :
 156
Sample Output 1 :
3
Sample Input 2 :
 7
Sample Output 2 :
1
*/