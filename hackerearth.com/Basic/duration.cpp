#include<iostream>
using namespace std;
int abs(int c){
    if(c<0){
        return (-c);
    }
    return c;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        int sh,sm,eh,em;
        cin >> sh >> sm >> eh >> em;
        int one,two;
        one = (sh*60)+sm;
        two = (eh*60)+em;
        int diff = abs(one - two);
        int hour,minute;
        if(diff<60){
            hour=0;
            minute=diff;
        }
        else{
            hour = diff/60;
            minute= diff - (hour*60);
        }
        cout << hour << " " << minute << "\n";
    }
    return 0;
}
