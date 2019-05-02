#include <stdio.h>
int main() {
        char num[100000]={};
        scanf("%s", num);
        unsigned long int result=0;
        int buf=0;
        unsigned long int resbuf=0;
        unsigned long int final=0;
                for (unsigned long int i=0; num[i]!='\0'; i++) {
                        buf=num[i]-'0';
                        result=result+buf;
                }
                resbuf=result;
                result=0;
                while (resbuf>9) {
                        while (resbuf > 0)  {
                                result =result+resbuf%10;
                                resbuf /= 10;
                        }
                        if (result<10) {
                                 printf("%ld\n", result);
                                 return 0;
                        }
                        if (result>9) {
                                while (result>9) {
                                        final+=result%10;
                                        result=result/10;
                                }
                                final+=result;
                        }
                }
                if (final==10) final=final/10;
        printf("%ld\n", final);
        return 0;
}
