int length(char ch[]){
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}
bool checkPalindrome(char input[]) {
   int l = length(input);
   bool flag = 0;

   for(int i=0; i<l; i++) {
    if(input[i] != input[l-i-1]){
        flag = 1;
        break;
    }
   }
   return flag ? 0 : 1;
}


/*
//here, it will not pass all test cases

bool checkPalindrome(char input[]) {
    // Write your code here
    int l = len(input);

    int i=0, j=l -1;

    if(i>j) return false;

    while(i<j){
         if(input[i++]!=input[j--])
         return 0;
         else
         return 1;
    }

}
*/

/*

Check Palindrome (recursive)
Send Feedback
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false

*/