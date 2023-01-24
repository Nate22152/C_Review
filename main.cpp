#include <stdio.h>
#include <string.h>
void name_function(char);
void check_pass(char []);
int main()
{
    int option;
    printf("Please enter the number of the function to run\n 1 - name function\n 2 - password function\n");
    scanf("%i",&option);
    if(option == '1')
    {
        void name_function();
    }
    if(option == '2')
    {

        check_pass();
    }
}
void name_function(char name[])
{

}
void check_pass(char password[])
{
    printf("Input password:");
    puts(password);
    if(strlen(password) < 14){
        printf("No more than 14 characters (Password too long)\n");
    }
}