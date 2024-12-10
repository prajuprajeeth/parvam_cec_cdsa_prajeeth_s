#include<stdio.h>
#include<string.h>
int main(){
    char f_name[20], l_name[20], name[50];
    printf("enter you first name:");
    scanf("%s", f_name);
    printf("enter you last name:");
    scanf("%s", l_name);
    strcpy(name,f_name);//strcpy(string copy)-strcpy(resultstring,orgstring)
    strcat(name,l_name);//strcat(string concatention)-merge two strings-strcat(result_str,org_str)
        printf("full name:%s\n", name);//using string handling function
        printf("full name:%s %s \n", f_name,l_name);
        printf("full name in uppercase:%s\n",strupr(name));//strupr-converts to upper string
        printf("full name in lowercase:%s\n",strlwr(name));//strlwr-converts to lower string
        printf("full name is reversed:%s\n", strrev(name));//strrev-reverses the string
}