#include <iostream>
#include <string.h>
using namespace std;

int ParseSubtring(char *from, char *till){
    int result=0;
    while(from<=till){
        result*=10;
        result+=*from++ -48;
    }
    return result;
}
long long DropZeros(char *str){
    char *start=str;
    while(*start==48)start++;

     return (long long)start;
}
bool LessThen(char* str1, char* str2) {
    int len1 = strlen(str1), len2 = strlen(str2);
    if (len1 < len2)return true;
    else if(len1>len2)return false;
    else {
        char* till=str1+len1;
        for (;  str1< till; str1++,str2++) {
            if (*str1 != *str2) {
                if (*str1 < *str2)return true;
                else return false;
            }
        }
    }
    return false;
}
bool LessThenOrEqual(char* str1, char* str2) {
    int len1 = strlen(str1), len2 = strlen(str2);
    if (len1 < len2)return true;
    else if(len1>len2)return false;
    else {
        char* till=str1+len1;
        for (;  str1< till; str1++,str2++) {
            if (*str1 != *str2) {
                if (*str1 < *str2)return true;
                else return false;
            }
        }
    }
    return true;
}
bool LessThenFromIndex(char* str1, char* str2) {
    int len1 = strlen(str1);
        char *till = str2 + len1;
        for (; str2 < till; str1++, str2++) {
            if (*str1 != *str2) {
                if (*str2 > *str1)return true;
                else return false;
            }
        }


    return false;
}
long long Add(char *Result,char *number1,char *number2){
    char rest=0,s1,s2,result;
    char* Current=Result+ 99999;*Current=0;
    char *i=number2+ strlen(number2)-1,*j=number1+strlen(number1)-1;

    while(i>=number2){
        s1=*j--+rest;
        s2=*i--;
        result=(s1+s2)-96;
        rest=result/10;
        *--Current=(result%10)+48;
    }
    while(rest==1&&j>=number1){
        result=*j--+rest-48;
        *--Current=(result%10)+48;
        rest=result/10;
    }
    if(rest==1) *--Current=49;
    while(j>=number1) *--Current=*j--;

    return (long long)Current;
}
long long Sub(char *Result,char *number1,char *number2) {
    char rest = 0, s1 , s2 , result;
    char *Current = Result + 99999;*Current = 0;
    char *i = number2 + strlen(number2) - 1, *j = number1 + strlen(number1) - 1;

    while (i >= number2) {
        s1 = *j-- + rest;
        s2 = *i--;
        result = s1 - s2;
        if (result < 0) {
            result += 10;
            rest = -1;
        } else rest = 0;
        *--Current = result % 10 + 48;
    }
    while (rest == -1) {
        result = *j-- - 48 + rest;
        if (result < 0) {
            result += 10;
            rest = -1;
        } else rest = 0;
        *--Current = (result % 10) + 48;
    }
    while (j >= number1) *--Current = *j--;

    return DropZeros(Current);
}
long long SubEqual(char *number1,char *number2) {
    char rest = 0, s1 , s2 , result;

    char *i = number2 + strlen(number2) - 1, *j = number1 + strlen(number1) - 1;
    char *Current = number1 + strlen(number1);*Current = 0;
    while (i >= number2) {
        s1 = *j-- + rest;
        s2 = *i--;
        result = s1 - s2;
        if (result < 0) {
            result += 10;
            rest = -1;
        } else rest = 0;
        *--Current = result % 10 + 48;
    }
    while (rest == -1) {
        result = *j-- - 48 + rest;
        if (result < 0) {
            result += 10;
            rest = -1;
        } else rest = 0;
        *--Current = (result % 10) + 48;
    }
    while (j >= number1) *--Current = *j--;

    return DropZeros(Current);
}
long long SubFromIndex(char *number1,char *number2) {
    char rest = 0, s1 , s2 , result;
    int len2=strlen(number2);
    char *Current = number1+len2;
    char *i = number2 + len2 - 1, *j = number1 + len2 - 1;

    while (i >= number2) {
        s1 = *j-- + rest;
        s2 = *i--;
        result = s1 - s2;
        if (result < 0) {
            result += 10;
            rest = -1;
        } else rest = 0;
        *--Current = result % 10 + 48;
    }
    while (rest == -1) {
        result = *j-- - 48 + rest;
        if (result < 0) {
            result += 10;
            rest = -1;
        } else rest = 0;
        *--Current = (result % 10) + 48;
    }
    while (j >= number1) *--Current = *j--;

    return DropZeros(Current);
}
long long Mul(char *Result,char *number1,char *number2){

    char rest = 0, s1 , s2 , result,RES,*temp ;
    memset(Result,48,100000);
    char *Current = Result + 99999; *Current-- = 0;*Current = 0;
    char *i = number2 + strlen(number2) - 1, *j ,*Lastofj= number1 + strlen(number1) - 1,*Zeros=Current;

    while(i>=number2) {
        j=Lastofj;
        s2 = *i-- - 48;
        while( j >= number1) {
            s1 = *j-- - 48;
            RES=*--Current;
            result = (s1 * s2)+(RES-48) + rest;
            rest = result / 10;
            *Current = (result % 10) + 48;
        }
        *--Current = rest + 48;
        temp=Current;
        Current = --Zeros;//shift left to add zeros
        rest = 0;
    }
    return DropZeros(temp);
}
long long MulInteger(char *Result,char *number1,long long number2){
    long long rest=0,result=0;
    char s1 ;
    memset(Result,48,100000);
    char *Current = Result + 99999,*temp=Current; *Current-- = 0;*Current = 0;
    char *j ,*Lastofj= number1 + strlen(number1) - 1;

    j=Lastofj;

    while( j >= number1) {
            s1 = *j-- - 48;
            result = (s1 * number2) + rest;
            rest = result / 10;
            *--Current = (result % 10) + 48;
        }
    while(rest>0){
        *--Current=(rest%10)+48;
        rest/=10;
    }
    Current=(char*) DropZeros(Current);
    if(*Current==0)--*Current=48;
    return (long long)Current;
}

long long Div(char *Result,char *number1,char *number2){

    char* index=number1,*res=Result,*s;
    long long s2=*number2-48,s1,result;


    while(LessThen(number2,number1)){
        s1= ParseSubtring(number1,index);
        result=s1/s2;
        Result=(char*) MulInteger(res,number2,result);
        //cout<<Result<<"   "<<result<<endl;

        while(LessThenFromIndex(number1,Result)){
            SubEqual(Result,number2);
            result--;
            //cout<<Result<<endl;
        }
        number1=(char*)SubFromIndex(number1,Result);
        //cout<<number1<<endl;
        cout<<result;
        result=0;
        index++;
    }

    return DropZeros(number1);
}

int main() {
    char str1[]="1024";
    char str2[]="8";
    char *Result =new char[100000];
    cout<<(char*)(Mul(Result,str1,str2));

    return 0;
}
