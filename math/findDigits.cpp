// https://www.hackerrank.com/challenges/find-digits/problem

int findDigits(int n) {
    int x = n;
    int count = 0;
    while(x!=0){
        int digit = x%10;
        x = x/10;
        if(digit==0){
            continue;
        }else if(n%digit==0){
            count++;
        }
    }
    return count;
}
