#include <iostream>
#include <string>

using namespace std;

int myAtoi(string str) {
    if (str == ""){
        return 0;
    }
    int tmp = int(str[0]) - int('0');
    if (str.length() == 1){
        if (tmp > -1 && tmp < 10)
            return tmp;
        else
            return 0;
    }

    int num = 0;
    int i=0,j=0,k=0;

    for (i = 0; i < str.length(); i++){
        if (str[i] == '-'){
            j++;
            continue;
        }
        if (str[i] == '+'){
            k++;
            continue;
        }

        tmp = int(str[i]) - int('0');
        num = num * 10 + tmp;
    }

    if (j == 0)
        return num;
    else{
        if( j==1 && k ==0)
            return -1 * num;
        else
            return 0;
    }
}

int main(){
    string str = "+1";
    cout << myAtoi(str);
}