#include <stdio.h>
#include <limits.h>

void main(){
    printf("\n|%-10s|%-16s|%-13s|%-22s|%-22s|%-20s|%-22s|","type","format specifier","size in bytes","max value","min value","unsigned format specifier","unsigned max value");
    printf("\n|%-10s|%-16s|%-13zu|%-22ld|%-22ld|%-25s|%-22ld|","char","%c",sizeof(char),CHAR_MAX,CHAR_MIN,"%c",UCHAR_MAX);
    printf("\n|%-10s|%-16s|%-13zu|%-22hd|%-22hd|%-25s|%-22hu|","short","%hd",sizeof(short),SHRT_MAX,SHRT_MIN,"%hu",USHRT_MAX);
    printf("\n|%-10s|%-16s|%-13zu|%-22d|%-22d|%-25s|%-22u|","int","%d",sizeof(int),INT_MAX,INT_MIN,"%u",UINT_MAX);
    printf("\n|%-10s|%-16s|%-13zu|%-22ld|%-22ld|%-25s|%-22lu|","long","%ld",sizeof(long),LONG_MAX,LONG_MIN,"%lu",ULONG_MAX);
    printf("\n|%-10s|%-16s|%-13zu|%-22lld|%-22lld|%-25s|%-22llu|","long long","%lld",sizeof(long long),LLONG_MAX,LLONG_MIN,"%llu",ULLONG_MAX);
}